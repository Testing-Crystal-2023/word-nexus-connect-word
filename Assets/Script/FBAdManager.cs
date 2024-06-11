using System;
using System.Collections;
using System.Collections.Generic;
// using AudienceNetwork;
using UnityEngine;

public class FBAdManager : MonoBehaviour
{
    public static FBAdManager Instash;
    // private AdView adView;
    // private InterstitialAd interstitialAd;
    // private RewardedVideoAd rewardedVideoAd;
    public bool isLoaded;
    public bool FBBannerLoaded;
    public bool FBInterLoaded;
    public bool FBRewadLoaded;

    public string FBBannerID;
    public string FBInterID;
    public string FBRewadID;

    public string RewardType;

    // Start is called before the first frame update

    private void Awake()
    {
        if (Instash == null)
        {
            Instash = this;
        }

        // AudienceNetworkAds.Initialize();
    }

    void Start()
    {
    }


    public void FBLoadsads()
    {
        LoadInterstitial();
        LoadRewardedVideo();
        Invoke("callbanner", 3);
    }


    public void callbanner()
    {
        LoadBanner();
    }



    public void LoadBanner()
    {
        // if (AdManager.Instance.bottom_banner == "hide")
        // {
        // }
        // else
        // {
        //     if (this.adView)
        //     {
        //         FBBannerLoaded = false;
        //         this.adView.Dispose();
        //     }

        //     this.adView = new AdView(FBBannerID, AdSize.BANNER_HEIGHT_50);
        //     this.adView.Register(this.gameObject);

        //     // Set delegates to get notified on changes or when the user interacts with the ad.
        //     this.adView.AdViewDidLoad = (delegate()
        //     {
        //         FBBannerLoaded = true;
        //         Debug.Log("Banner loaded.");
        //         this.adView.Show(AdPosition.BOTTOM);
        //     });
        //     adView.AdViewDidFailWithError = (delegate(string error)
        //     {
        //         FBBannerLoaded = false;
        //         Debug.Log("Banner failed to load with error: " + error);
        //         if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        //         {
        //             StartCoroutine(loadGooleBanner());
        //         }
        //         else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        //         {
        //             Debug.LogWarning("FB failed and unity request");
        //             StartCoroutine(loadunitybanner());
        //         }
        //     });
        //     adView.AdViewWillLogImpression = (delegate() { Debug.Log("Banner logged impression."); });
        //     adView.AdViewDidClick = (delegate() { Debug.Log("Banner clicked."); });

        //     // Initiate a request to load an ad.
        //     adView.LoadAd();
        // }
    }

    // private IEnumerator loadGooleBanner()
    // {
    //     yield return new WaitForSeconds(3);
    //     if(!GoogleAdMob.Instash.BannerReady)
    //         GoogleAdMob.Instash.LoadBanner();
    // }
    // IEnumerator loadunitybanner()
    // {
    //     yield return new WaitForSeconds(3);
    //     Debug.LogWarning("loadunitybanner is run");
    //     if(!UnityManager.Instance.UnityBannerLoaded)
    //         UnityManager.Instance.LoadBanner();
    // }

    public void LoadInterstitial()
    {
        // this.interstitialAd = new InterstitialAd(FBInterID);
        // this.interstitialAd.Register(this.gameObject);

        // // Set delegates to get notified on changes or when the user interacts with the ad.
        // this.interstitialAd.InterstitialAdDidLoad = (delegate()
        // {
        //     Debug.Log("Interstitial ad loaded.");
        //     FBInterLoaded = true;
        // });
        // interstitialAd.InterstitialAdDidFailWithError = (delegate(string error)
        // {
        //     FBInterLoaded = false;
        //     if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        //     {
        //         StartCoroutine(loadgoogleinter());
        //     }
        //     else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        //     {
        //         Debug.LogWarning("call FB fail LoadUnityinter()");
        //         StartCoroutine(LoadUnityinter());
        //     }


        //     Debug.Log("Interstitial ad failed to load with error: " + error);
        // });
        // interstitialAd.InterstitialAdWillLogImpression = (delegate()
        // {
        //     Debug.Log("Interstitial ad logged impression.");
        // });
        // interstitialAd.InterstitialAdDidClick = (delegate() { Debug.Log("Interstitial ad clicked."); });

        // this.interstitialAd.interstitialAdDidClose = (delegate()
        // {
        //     Debug.Log("Interstitial ad did close.");

        //     FBInterLoaded = false;

        //     if (this.interstitialAd != null)
        //     {
        //         this.interstitialAd.Dispose();
        //     }

        //     StartCoroutine(callappopentrue());
            
        //     if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
        //     {
        //         GoogleAdMob.Instash.LoadLoadInterstitialAd();
        //     }
        //     else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
        //     {
        //         LoadInterstitial();
        //     }
        //     else if (AdManager.Instance.Adtype == "6")
        //     {
        //         UnityManager.Instance.LoadInterstitialAd();
        //     }
        // });

        // // Initiate the request to load the ad.
        // this.interstitialAd.LoadAd();
    }

    // IEnumerator loadgoogleinter()
    // {
    //     yield return new WaitForSeconds(3);
    //     GoogleAdMob.Instash.LoadLoadInterstitialAd();
    // }

    // IEnumerator LoadUnityinter()
    // {
    //     yield return new WaitForSeconds(3);
    //     Debug.LogWarning("Google UnityManager.Instance.LoadInterstitialAd()");
    //     UnityManager.Instance.LoadInterstitialAd();
    // }


    public void ShowInterstitial()
    {
        // this.interstitialAd.Show();
        // //this.isLoaded = false;
        // GoogleAdMob.Instash.AppShow = false;
    }


    public void LoadRewardedVideo()
    {
        // // Instantiate RewardedVideoAd with reward data
        // this.rewardedVideoAd = new RewardedVideoAd(FBRewadID);
        // this.rewardedVideoAd.Register(this.gameObject);

        // // Set delegates to get notified on changes or when the user interacts with the ad.
        // this.rewardedVideoAd.RewardedVideoAdDidLoad = (delegate()
        // {
        //     Debug.Log("RewardedVideo ad loaded.");
        //     FBRewadLoaded = true;
        // });
        // this.rewardedVideoAd.RewardedVideoAdDidFailWithError = (delegate(string error)
        // {
        //     FBRewadLoaded = false;
        //     if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        //     {
        //         StartCoroutine(loadgooglerewad());
        //     }
        //     else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        //     {
        //         StartCoroutine(LoadUnityReward());
        //     }

        //     Debug.Log("RewardedVideo ad failed to load with error: " + error);
        // });
        // this.rewardedVideoAd.RewardedVideoAdWillLogImpression = (delegate()
        // {
        //     Debug.Log("RewardedVideo ad logged impression.");
        // });
        // this.rewardedVideoAd.RewardedVideoAdDidClick = (delegate() { Debug.Log("RewardedVideo ad clicked."); });
        // this.rewardedVideoAd.RewardedVideoAdDidClose = (delegate()
        // {
        //     FBRewadLoaded = false;
        //     RewardNow();
        //     Debug.Log("Rewarded video ad did close.");
        //     if (this.rewardedVideoAd != null)
        //     {
        //         this.rewardedVideoAd.Dispose();
        //     }

        //     StartCoroutine(callappopentrue());

        //     if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
        //     {
        //         StartCoroutine(loadgooglerewad());
        //     }
        //     else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
        //     {
        //         LoadRewardedVideo();
        //     }
        //     else if (AdManager.Instance.Adtype == "6")
        //     {
        //         StartCoroutine(LoadUnityReward());
        //     }
        // });

        // // For S2S validation you need to register the following two callback
        // this.rewardedVideoAd.RewardedVideoAdDidSucceed = (delegate()
        // {
        //     // LoadRewardedVideo();
        //     Debug.Log("Rewarded video ad validated by server");
        // });
        // this.rewardedVideoAd.RewardedVideoAdDidFail = (delegate()
        // {
        //     Debug.Log("Rewarded video ad not validated, or no response from server");
        // });

        // this.rewardedVideoAd.LoadAd();
    }

    // IEnumerator loadgooglerewad()
    // {
    //     yield return new WaitForSeconds(3);
    //     GoogleAdMob.Instash.LoadRewardedAd();
    // }

    // IEnumerator LoadUnityReward()
    // {
    //     yield return new WaitForSeconds(3);
    //     Debug.LogWarning("Google UnityManager.Instance.LoadRewardedVideo()");
    //     UnityManager.Instance.LoadRewardedVideo();
    // }

    public void ShowRewardedVideo(string rt)
    {
        // RewardType = rt;
        // GoogleAdMob.Instash.AppShow = false;
        // this.rewardedVideoAd.Show();
        // this.isLoaded = false;
    }


    public void RewardNow()
    {
        // var rewardType = RewardType;
        // Debug.Log(rewardType);
        // AdManager.Instance.CompleteRewardedVideo();

        // RewardType = null;
    }


    // public IEnumerator callappopentrue()
    // {
    //     yield return new WaitForSeconds(1.5f);
    //     GoogleAdMob.Instash.AppShow = true;
    // }
}