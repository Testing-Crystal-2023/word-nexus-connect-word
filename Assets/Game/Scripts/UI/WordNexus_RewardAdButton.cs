using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Game;
using System;
using EasyUI.Toast;

namespace Game
{
	[RequireComponent(typeof(Button))]
	public class WordNexus_RewardAdButton : MonoBehaviour
	{
		#region Inspector Variables

		[SerializeField] private int coinsToReward;
		[SerializeField] private bool testMode;

		#endregion

		#region Properties

		public Button Button { get { return gameObject.GetComponent<Button>(); } }

		#endregion

		#region Unity Methods

		private void Awake()
		{
			Button.onClick.AddListener(OnClick);


			if (testMode)
			{
				gameObject.SetActive(true);
			}
		}

		#endregion

		#region Private Methods

		private void OnClick()
		{
			if (testMode)
			{
				OnRewardAdGranted("", 0);

				return;
			}

			if (GoogleAdMob.Instash.RewadReady || UnityManager.Instance.UnityRewardLoaded || FBAdManager.Instash.FBRewadLoaded && AdManager.Instance.Qureka_ads_status.ToLower() == "false")
			{
				AdManager.Instance.coinReward = true;
				AdManager.Instance.Reward("rt");
				AppMetEvents.Instance.VideoAdsStarted("WinPanel_Multicoin_X-Reward_AdWatch");
			}
			else if (AdManager.Instance.Qureka_ads_status.ToLower() == "true" && AdManager.Instance.PreLoad.ToLower() == "false" && AdManager.Instance.showaAd.ToLower() == "false")
			{
				AdManager.Instance.coinReward = true;
				AppMetEvents.Instance.VideoAdsStarted("WinPanel_Multicoin_X-Reward_AdWatch");
				QurekaManager.Instance.ShowRewardedAd("WinPanel_Multicoin_X-Reward_AdWatch");
			}
			else
			{
				if (Application.internetReachability == NetworkReachability.NotReachable)
				{
					Toast.Show("Oops! Your device is not connected to the internet. Please connect and try again.");
				}
				else
				{
					Toast.Show("We apologize, but there are no ads ready to be played right now. Please try again later.");
				}
			}

		}


		private void OnRewardAdLoaded()
		{
			gameObject.SetActive(true);
		}

		private void OnRewardAdClosed()
		{
			gameObject.SetActive(false);
		}

		private void OnRewardAdGranted(string rewardId, double rewardAmount)
		{
			coinsToReward = UnityEngine.Random.Range(10,100);
			// Get the current amount of coins
			int animateFromCoins = WordNexus_GameController.Instance.Coins;

			// Give the amount of coins
			WordNexus_GameController.Instance.GiveCoins(coinsToReward, false);

			// Get the amount of coins now after giving them
			int animateToCoins = WordNexus_GameController.Instance.Coins;

			// Show the popup to the user so they know they got the coins
			WordNexus_Pop_upManager.Instance.Show("reward_ad_granted", new object[] { coinsToReward, animateFromCoins, animateToCoins });
		}

		private void OnAdsRemoved()
		{
			//MobileAdsManager.Instance.OnRewardAdLoaded -= OnRewardAdLoaded;

			gameObject.SetActive(false);
		}

		#endregion
	}
}
