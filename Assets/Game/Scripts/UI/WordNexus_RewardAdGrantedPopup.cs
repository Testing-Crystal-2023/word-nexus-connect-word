using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Game;

namespace Game
{
	public class WordNexus_RewardAdGrantedPopup : WordNexus_Popup
	{
		#region Inspector Variables

		[Space]

		[SerializeField] private Text coinsRewardedText = null;
		[SerializeField] private RectTransform coinMarker = null;

		#endregion

		#region Member Variables

		private int coinsRewarded;
		private int animateFromCoins;
		private int animateToCoins;

		#endregion

		#region Public Methods

		public override void OnShowing(object[] inData)
		{
			base.OnShowing(inData);

			coinsRewarded = (int)inData[0];
			animateFromCoins = (int)inData[1];
			animateToCoins = (int)inData[2];

			coinsRewardedText.text = "x " + coinsRewarded;

			coinMarker.gameObject.SetActive(true);
		}

		public void OnClaimButtonClicked()
		{
			Hide(false);
		}

		public override void OnHiding()
		{
			base.OnHiding();

			WordNexus_CoinController.Instance.AnimateCoins(animateFromCoins, animateToCoins, new List<RectTransform>() { coinMarker, coinMarker, coinMarker, coinMarker, coinMarker });

			coinMarker.gameObject.SetActive(false);
		}

		#endregion
	}
}
