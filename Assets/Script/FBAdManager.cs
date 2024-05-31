using System;
using System.Collections;
using System.Collections.Generic;
using AudienceNetwork;
using UnityEngine;

public class FBAdManager : MonoBehaviour
{
    public static FBAdManager Instash;
    private AdView adView;
    private InterstitialAd interstitialAd;
    private RewardedVideoAd rewardedVideoAd;
    public bool isLoaded;
    public bool FBInterLoaded;
    public bool FBRewadLoaded;
    public bool BannerReady;

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

        AudienceNetworkAds.Initialize();
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

    // Update is called once per frame
    void Update()
    {
    }


    public void LoadBanner()
    {
        if (AdManager.Instance.bottom_banner == "hide")
        {
        }
        else
        {
            if (BannerReady)
            {
                return;
            }
            if (this.adView)
            {
                this.adView.Dispose();
            }

            this.adView = new AdView(FBBannerID, AdSize.BANNER_HEIGHT_50);
            this.adView.Register(this.gameObject);

            // Set delegates to get notified on changes or when the user interacts with the ad.
            this.adView.AdViewDidLoad = (delegate ()
            {
                BannerReady = true;
                Debug.Log("Banner loaded.");
                this.adView.Show(AdPosition.BOTTOM);
            });
            adView.AdViewDidFailWithError = (delegate (string error)
            {
                BannerReady = false;
                Debug.Log("Banner failed to load with error: " + error);
                if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
                {
                    StartCoroutine(loadGooleBanner());
                }
                else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
                {
                    StartCoroutine(loadunityBanner());
                }
            });
            adView.AdViewWillLogImpression = (delegate () { Debug.Log("Banner logged impression."); });
            adView.AdViewDidClick = (delegate () { Debug.Log("Banner clicked."); });

            // Initiate a request to load an ad.
            adView.LoadAd();
        }
    }

    private IEnumerator loadGooleBanner()
    {
        yield return new WaitForSeconds(3);
        GoogleAdMob.Instash.LoadBanner();
    }

    private IEnumerator loadunityBanner()
    {
        yield return new WaitForSeconds(3);
        UnityBannermanager.instance.LoadBanner();
    }

    public void LoadInterstitial()
    {
        this.interstitialAd = new InterstitialAd(FBInterID);
        this.interstitialAd.Register(this.gameObject);

        // Set delegates to get notified on changes or when the user interacts with the ad.
        this.interstitialAd.InterstitialAdDidLoad = (delegate ()
        {
            Debug.Log("Interstitial ad loaded.");
            FBInterLoaded = true;
        });
        interstitialAd.InterstitialAdDidFailWithError = (delegate (string error)
        {
            FBInterLoaded = false;
            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
            {
                StartCoroutine(loadgoogleinter());
            }
            else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
            {
                StartCoroutine(loadUnityinter());
            }


            Debug.Log("Interstitial ad failed to load with error: " + error);
        });
        interstitialAd.InterstitialAdWillLogImpression = (delegate ()
        {
            Debug.Log("Interstitial ad logged impression.");
        });
        interstitialAd.InterstitialAdDidClick = (delegate () { Debug.Log("Interstitial ad clicked."); });

        this.interstitialAd.interstitialAdDidClose = (delegate ()
        {
            Debug.Log("Interstitial ad did close.");


            AdManager.Instance.CloseInterstitial();
            if (this.interstitialAd != null)
            {
                this.interstitialAd.Dispose();
            }

            StartCoroutine(callappopentrue());
            if (AdManager.Instance.Adtype == "1")
            {
                GoogleAdMob.Instash.LoadLoadInterstitialAd();
            }
            else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
            {
                LoadInterstitial();
            }
            else if (AdManager.Instance.Adtype == "6")
            {
                UnityInterstialManager.instance.LoadAd();
            }
        });

        // Initiate the request to load the ad.
        this.interstitialAd.LoadAd();
    }

    IEnumerator loadgoogleinter()
    {
        yield return new WaitForSeconds(3);
        GoogleAdMob.Instash.LoadLoadInterstitialAd();
    }

    IEnumerator loadUnityinter()
    {
        yield return new WaitForSeconds(3);
        UnityInterstialManager.instance.LoadAd();
    }

    public void ShowInterstitial()
    {
        Debug.LogError("ShowInterstitial Meta");
        this.interstitialAd.Show();
        //this.isLoaded = false;
        GoogleAdMob.Instash.AppShow = false;
    }


    public void LoadRewardedVideo()
    {
        // Instantiate RewardedVideoAd with reward data
        this.rewardedVideoAd = new RewardedVideoAd(FBRewadID);
        this.rewardedVideoAd.Register(this.gameObject);

        // Set delegates to get notified on changes or when the user interacts with the ad.
        this.rewardedVideoAd.RewardedVideoAdDidLoad = (delegate ()
        {
            Debug.Log("RewardedVideo ad loaded.");
            FBRewadLoaded = true;
        });
        this.rewardedVideoAd.RewardedVideoAdDidFailWithError = (delegate (string error)
        {
            FBRewadLoaded = false;

            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
            {
                StartCoroutine(loadgooglerewad());
            }
            else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
            {
                StartCoroutine(loadUnityrewad());
            }
            Debug.Log("RewardedVideo ad failed to load with error: " + error);
        });
        this.rewardedVideoAd.RewardedVideoAdWillLogImpression = (delegate ()
        {
            Debug.Log("RewardedVideo ad logged impression.");
        });
        this.rewardedVideoAd.RewardedVideoAdDidClick = (delegate () { Debug.Log("RewardedVideo ad clicked."); });
        this.rewardedVideoAd.RewardedVideoAdDidClose = (delegate ()
        {
            RewardNow();
            Debug.Log("Rewarded video ad did close.");
            if (this.rewardedVideoAd != null)
            {
                this.rewardedVideoAd.Dispose();
            }

            StartCoroutine(callappopentrue());


            if (AdManager.Instance.Adtype == "1")
            {
                GoogleAdMob.Instash.LoadRewardedAd();
            }
            else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
            {
                LoadRewardedVideo();
            }
            else if (AdManager.Instance.Adtype == "6")
            {
                UnityRewardManager.instance.LoadAd();
            }
        });

        // For S2S validation you need to register the following two callback
        this.rewardedVideoAd.RewardedVideoAdDidSucceed = (delegate ()
        {
            // LoadRewardedVideo();
            Debug.Log("Rewarded video ad validated by server");
        });
        this.rewardedVideoAd.RewardedVideoAdDidFail = (delegate ()
        {
            Debug.Log("Rewarded video ad not validated, or no response from server");
        });

        this.rewardedVideoAd.LoadAd();
    }

    IEnumerator loadgooglerewad()
    {
        yield return new WaitForSeconds(3);
        GoogleAdMob.Instash.LoadRewardedAd();
    }

    IEnumerator loadUnityrewad()
    {
        yield return new WaitForSeconds(3);
        UnityRewardManager.instance.LoadAd();
    }

    public void ShowRewardedVideo(string rt)
    {
        RewardType = rt;
        GoogleAdMob.Instash.AppShow = false;
        this.rewardedVideoAd.Show();
        this.isLoaded = false;
    }


    public void RewardNow()
    {
        var rewardType = RewardType;
        Debug.Log(rewardType);
        /*switch (rewardType)
        {
            /*case "REwadsAdsCall":
                PotAnimationEventManager.Instansh.REwadsAdsCall();
                updatewatsh();
                break;
            case "GetCoinsByads":
                PotAnimationEventManager.Instansh.GetCoinsByads();
                updatewatsh();
                break;
            case "RewadsResume":
                PotAnimationEventManager.Instansh.RewadsResume();
                updatewatsh();
                break;
            case "Dublerewad":
                PotDailyReward.INstash.Dublerewad();
                updatewatsh();
                break;
            case "StartSpin":
                PotBonusSpin.Instash.StartSpin();
                updatewatsh();
                break;
            case "getrewad":
                TimerManager.instash.getrewad();
                updatewatsh();
                break;
            case "Rewaddbule":
                ChestWinCoins.Insasth.Rewaddbule();
                updatewatsh();
                break;
            case "RewadPigyBank":
                PiggyBank.Inasth.RewadPigyBank();
                updatewatsh();
                break;
            case "RewadWatchAds":
                PotRedeemPanelScript.Insasth.RewadWatchAds();
                break;
            case "CollectNextrewad":
                PotMenuReference.THIS.CollectNextrewad();
                updatewatsh();
                break;#1#
        }*/
        AdManager.Instance.CompleteRewardedVideo();

        RewardType = null;
    }


    public IEnumerator callappopentrue()
    {
        yield return new WaitForSeconds(1.5f);
        GoogleAdMob.Instash.AppShow = true;
    }
}