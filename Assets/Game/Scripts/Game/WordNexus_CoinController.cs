using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Game;

namespace Game
{
	public class WordNexus_CoinController : WordNexus_SingletonComponent<WordNexus_CoinController>
	{
		#region Inspector Variables

		[SerializeField] private Text coinsText;
		[SerializeField] private RectTransform animateTo;
		[SerializeField] private RectTransform animationContainer;
		[SerializeField] private RectTransform coinPrefab;
		[SerializeField] private float animationDuration;
		[SerializeField] private float delayBetweenCoins;

		#endregion

		#region Member Variables

		private WordNexus_ObjectPool coinPool;

		#endregion

		#region Unity Methods

		private void Start()
		{
			coinPool = new WordNexus_ObjectPool(coinPrefab.gameObject, 1, animationContainer);
		}

		#endregion

		#region Public Methods

		/// <summary>
		/// Increments the Coins by the give amount
		/// </summary>
		public void SetCoinsText(int coins)
		{
			coinsText.text = coins.ToString();
		}

		/// <summary>
		/// Animates coins to the coin container
		/// </summary>
		public void AnimateCoins(int fromCoinAmount, int toCoinAmount, List<RectTransform> fromRects)
		{
			WordNexus_SoundManager.Instance.Play("coins-awarded");

			for (int i = 0; i < fromRects.Count; i++)
			{
				// Animate each coin separately and when the coin reaches the coin container set the text coin amount
				int setCoinsTextTo = (int)Mathf.Lerp(fromCoinAmount, toCoinAmount, (i + 1) / fromRects.Count);

				AnimateCoin(fromRects[i], (float)i * delayBetweenCoins, setCoinsTextTo);
			}
		}

		#endregion

		#region Private Methods

		private void AnimateCoin(RectTransform coinRectTransform, float startDelay, int setCoinAmountTextTo)
		{
			RectTransform coinToAnimate = coinPool.GetObject<RectTransform>();

			WordNexus_UIAnimation.DestroyAllAnimations(coinToAnimate.gameObject);

			// Need to set the scale of coinToAnimate to the same scale as coinRectTransform
			coinToAnimate.SetParent(coinRectTransform.parent, false);
			coinToAnimate.sizeDelta = coinRectTransform.sizeDelta;
			coinToAnimate.localScale = coinRectTransform.localScale;
			coinToAnimate.anchoredPosition = coinRectTransform.anchoredPosition;
			coinToAnimate.SetParent(animationContainer);

			Vector2 animateToPosition = WordNexus_Utilities.SwitchToRectTransform(animateTo, animationContainer);
			// Debug.LogError("coinToAnimate => " + coinToAnimate);
			// Debug.LogError("animateToPosition.x => " + animateToPosition.x);
			// Debug.LogError("animateToPosition.y => " + animateToPosition.y);

			// Aniamte the x position position of the coin
			PlayAnimation(WordNexus_UIAnimation.PositionX(coinToAnimate, animateToPosition.x, animationDuration), startDelay);

			// Aniamte the y position position of the coin
			PlayAnimation(WordNexus_UIAnimation.PositionY(coinToAnimate, animateToPosition.y, animationDuration), startDelay);

			// Animate the x scale
			PlayAnimation(WordNexus_UIAnimation.ScaleX(coinToAnimate, 1, animationDuration), startDelay);

			// Animate the y scale
			PlayAnimation(WordNexus_UIAnimation.ScaleY(coinToAnimate, 1, animationDuration), startDelay);

			// Animate the width
			PlayAnimation(WordNexus_UIAnimation.Width(coinToAnimate, animateTo.sizeDelta.x, animationDuration), startDelay);

			// Animate the height
			PlayAnimation(WordNexus_UIAnimation.Height(coinToAnimate, animateTo.sizeDelta.y, animationDuration), startDelay);

			StartCoroutine(WaitThenSetCoinsText(setCoinAmountTextTo, animationDuration + startDelay));
		}

		/// <summary>
		/// Sets up and plays the UIAnimation for a coin
		/// </summary>
		private void PlayAnimation(WordNexus_UIAnimation anim, float startDelay)
		{
			anim.style = WordNexus_UIAnimation.Style.EaseOut;
			anim.startDelay = startDelay;
			anim.startOnFirstFrame = true;

			anim.OnAnimationFinished += (GameObject target) =>
			{
				coinPool.ReturnObjectToPool(target);
			};

			anim.Play();
		}

		private IEnumerator WaitThenSetCoinsText(int coinAmount, float waitTime)
		{
			yield return new WaitForSeconds(waitTime);

			SetCoinsText(coinAmount);
		}

		#endregion
	}
}
