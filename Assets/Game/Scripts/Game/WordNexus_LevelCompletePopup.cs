﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class WordNexus_LevelCompletePopup : Game.WordNexus_Popup
	{
		#region Inspector Variables

		[SerializeField] private Image backgroundImage = null;
		[SerializeField] private Text packNameText = null;
		[SerializeField] private Text levelText = null;
		[SerializeField] private Text categoryText = null;
		[SerializeField] private Text extraWordsText = null;
		[SerializeField] private RectTransform extraWordsCoinMarker = null;
		[SerializeField] private Text nextLevelButtonText = null;
		//[SerializeField] private Text			gamePointsText			= null;
		[SerializeField] private Slider categoryProgressSlider = null;
		[SerializeField] private Image categoryProgressBar = null;
		[SerializeField] private RectTransform categoryCoinPrizeIcon = null;

		#endregion

		#region Member Variables

		public const string PlayNextAction = "play_next";
		public const string BackAction = "back";

		private IEnumerator animationEnumerator;

		#endregion

		#region Public Methods

		public override void OnShowing(object[] inData)
		{
			base.OnShowing(inData);
			// Debug.LogError(inData);
			// Debug.LogError("show");
			WordNexus_ActiveLevel level = (WordNexus_ActiveLevel)inData[0];
			bool isLevelAlreadyComplete = (bool)inData[1];
			int currentGamePoints = (int)inData[2];
			int awardedGamePoints = (int)inData[3];
			int categoryCoinsAwarded = (int)inData[4];
			int categoryCoinsAmountFrom = (int)inData[5];
			int categoryCoinsAmountTo = (int)inData[6];
			int extraWordsCoinsAwarded = (int)inData[7];
			int extraWordsCoinsAmountFrom = (int)inData[8];
			int extraWordsCoinsAmountTo = (int)inData[9];
			bool isLastLevel = (bool)inData[10];
			// Debug.LogError(categoryCoinsAmountTo);
			backgroundImage.sprite = level.packInfo.background;
			packNameText.text = level.packInfo.packName;
			levelText.text = string.Format("Level {0}", WordNexus_GameController.Instance.LastCompletedLevelNumber);
			//gamePointsText.text			= currentGamePoints.ToString();
			nextLevelButtonText.text = string.Format("Level {0}", WordNexus_GameController.Instance.LastCompletedLevelNumber + 1);

			categoryCoinPrizeIcon.gameObject.SetActive(true);
			extraWordsCoinMarker.gameObject.SetActive(true);

			// If the level is already complete then don't show the category progress or extra words
			if (isLevelAlreadyComplete)
			{
				categoryText.gameObject.SetActive(false);
				extraWordsText.gameObject.SetActive(false);
				categoryProgressSlider.gameObject.SetActive(false);
			}
			else
			{
				categoryText.gameObject.SetActive(true);
				extraWordsText.gameObject.SetActive(extraWordsCoinsAwarded > 0);
				categoryProgressSlider.gameObject.SetActive(true);

				int categoryNumberComplete = level.levelData.CategoryLevelNumber;
				int totalLevelsInCategory = level.categoryInfo.LevelDatas.Count;

				categoryText.text = string.Format("{0} - {1} / {2}", level.categoryInfo.displayName, categoryNumberComplete, totalLevelsInCategory);
				extraWordsText.text = string.Format("+ {0} Extra Words", extraWordsCoinsAwarded);

				float categoryProgressFromValue = Mathf.Lerp(0.095f, 1f, (float)(categoryNumberComplete - 1) / (float)totalLevelsInCategory);
				float categoryProgressToValue = Mathf.Lerp(0.095f, 1f, (float)(categoryNumberComplete) / (float)totalLevelsInCategory);

				categoryProgressSlider.value = categoryProgressFromValue;
				//categoryProgressBar.color		= level.packInfo.color;

				animationEnumerator =
					Animate(
						level,
						currentGamePoints,
						awardedGamePoints,
						categoryProgressFromValue,
						categoryProgressToValue,
						categoryCoinsAwarded,
						categoryCoinsAmountFrom,
						categoryCoinsAmountTo,
						extraWordsCoinsAwarded,
						extraWordsCoinsAmountFrom,
						extraWordsCoinsAmountTo);

				StartCoroutine(animationEnumerator);
			}
		}

		public void OnPlayNextClicked()
		{
			if (animationEnumerator != null)
			{
				StopCoroutine(animationEnumerator);

				animationEnumerator = null;
			}

			WordNexus_CoinController.Instance.SetCoinsText(WordNexus_GameController.Instance.Coins);

			Hide(false, new object[] { PlayNextAction });
			if (AdManager.Instance.Wingetbutton.ToLower() == "true")
			{
				if (GoogleAdMob.Instash.InterReady || UnityManager.Instance.UnityInterLoaded || FBAdManager.Instash.FBInterLoaded && AdManager.Instance.Qureka_ads_status.ToLower() == "false")
				{
					AdManager.Instance.ConfirmInter();
				}
				else if (AdManager.Instance.Qureka_ads_status.ToLower() == "true" && AdManager.Instance.PreLoad.ToLower() == "false" && AdManager.Instance.showaAd.ToLower() == "false")
				{
					QurekaManager.Instance.ShowInterAd();
				}
			}
		}

		public void OnBackClicked()
		{
			if (animationEnumerator != null)
			{
				StopCoroutine(animationEnumerator);

				animationEnumerator = null;
			}

			WordNexus_CoinController.Instance.SetCoinsText(WordNexus_GameController.Instance.Coins);

			Hide(false, new object[] { BackAction });
		}

		#endregion

		#region Private Methods

		private IEnumerator Animate(
			WordNexus_ActiveLevel level,
			int currentGamePoints,
			int awardedGamePoints,
			float categoryProgressFromValue,
			float categoryProgressToValue,
			int categoryCoinsAwarded,
			int categoryCoinsAmountFrom,
			int categoryCoinsAmountTo,
			int extraWordsCoinsAwarded,
			int extraWordsCoinsAmountFrom,
			int extraWordsCoinsAmountTo)
		{


			// Debug.LogError("show Animate");
			float duration = 500;
			float betweenDelay = 0.25f;

			double timeEnd;

			// Wait for the popup to fade fully in
			yield return new WaitForSeconds(animDuration + betweenDelay);

			// Animate the ticking up of the game points
			timeEnd = WordNexus_Utilities.SystemTimeInMilliseconds + duration;

			while (true)
			{
				float t = 1f - (float)(timeEnd - WordNexus_Utilities.SystemTimeInMilliseconds) / duration;
				int gp = (int)Mathf.Lerp(1, awardedGamePoints, t);

				//gamePointsText.text = (currentGamePoints + gp).ToString();

				if (WordNexus_Utilities.SystemTimeInMilliseconds >= timeEnd)
				{
					break;
				}

				yield return null;
			}

			// Animate the category progress bar
			timeEnd = WordNexus_Utilities.SystemTimeInMilliseconds + duration;

			while (true)
			{
				float t = 1f - (float)(timeEnd - WordNexus_Utilities.SystemTimeInMilliseconds) / duration;
				float value = Mathf.Lerp(categoryProgressFromValue, categoryProgressToValue, t);

				categoryProgressSlider.value = value;

				if (WordNexus_Utilities.SystemTimeInMilliseconds >= timeEnd)
				{
					break;
				}

				yield return null;
			}

			// Animate the coins they get for completing a category
			if (categoryCoinsAwarded > 0)
			{
				List<RectTransform> fromPositions = new List<RectTransform>();

				// for (int i = 0; i < categoryCoinsAwarded; i++)
				// {
				// 	fromPositions.Add(categoryCoinPrizeIcon);
				// }
				for (int i = 0; i < 10; i++)
				{
					fromPositions.Add(categoryCoinPrizeIcon);
				}

				WordNexus_CoinController.Instance.AnimateCoins(categoryCoinsAmountFrom, categoryCoinsAmountTo, fromPositions);

				categoryCoinPrizeIcon.gameObject.SetActive(false);
			}

			yield return new WaitForSeconds(betweenDelay * 2f);

			// Animate the coins they get for finding extra words
			if (extraWordsCoinsAwarded > 0)
			{
				List<RectTransform> fromPositions = new List<RectTransform>();

				for (int i = 0; i < extraWordsCoinsAwarded; i++)
				{
					fromPositions.Add(extraWordsCoinMarker);
				}

				WordNexus_CoinController.Instance.AnimateCoins(extraWordsCoinsAmountFrom, extraWordsCoinsAmountTo, fromPositions);

				extraWordsCoinMarker.gameObject.SetActive(false);
			}

			animationEnumerator = null;
		}

		#endregion
	}
}
