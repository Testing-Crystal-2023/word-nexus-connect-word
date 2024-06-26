using System;
using System.Collections;
using System.Collections.Generic;
using EasyUI.Toast;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;
using UnityEngine;

public class GoogleAdMob : MonoBehaviour
{
    public static GoogleAdMob Instash;
    private AppOpenAd appOpenAd;
    private InterstitialAd _interstitialAd;
    private RewardedAd _rewardedAd;
    private BannerView _bannerView;
    List<String> deviceIds = new List<String>() { AdRequest.TestDeviceSimulator };

    public bool AppShow = true;
    public bool InterReady = false;
    public bool RewadReady = false;
    public bool BannerReady = false;
    private void Awake()
    {
        if (Instash == null)
        {
            Instash = this;
        }

        AppStateEventNotifier.AppStateChanged += OnAppStateChanged;
    }
    private void OnDestroy()
    {
        AppStateEventNotifier.AppStateChanged -= OnAppStateChanged;
    }

    void Start()
    {

        MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            // This callback is called once the MobileAds SDK is initialized.
            Dictionary<string, AdapterStatus> map = initStatus.getAdapterStatusMap();
            foreach (KeyValuePair<string, AdapterStatus> keyValuePair in map)
            {
                string className = keyValuePair.Key;
                AdapterStatus status = keyValuePair.Value;
                switch (status.InitializationState)
                {
                    case AdapterState.NotReady:
                        // The adapter initialization did not complete.
                        MonoBehaviour.print("Adapter: " + className + " not ready.");
                        break;
                    case AdapterState.Ready:
                        // The adapter was successfully initialized.
                        MonoBehaviour.print("Adapter: " + className + " is initialized.");
                        break;
                }
            }
        });
    }

    public void LoadGoogleads()
    {
        LoadRewardedAd();
        LoadLoadInterstitialAd();
        LoadBanner();
        if (AdManager.Instance.appopenshow == "true")
        {
            LoadAppOpenAd();
        }

    }

    #region Banner

    public string GoogleBannerid;

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
            // create an instance of a banner view first.
            if (_bannerView == null)
            {
                CreateBannerView();
            }

            // create our request used to load the ad.
            var adRequest = new AdRequest();

            // send the request to load the ad.
            Debug.Log("Loading banner ad.");
            _bannerView.LoadAd(adRequest);
            ListenToAdEvents();
        }
    }

    public void CreateBannerView()
    {
        Debug.Log("Creating banner view");

        // If we already have a banner, destroy the old one.
        if (_bannerView != null)
        {
            DestroyBannerView();
        }
        // Create a 320x50 banner at top of the screen
        _bannerView = new BannerView(GoogleBannerid, AdSize.Banner, AdPosition.Bottom);
    }
    public void DestroyBannerView()
    {
        if (_bannerView != null)
        {
            Debug.Log("Destroying banner view.");
            _bannerView.Destroy();
            _bannerView = null;
        }
    }

    /// <summary>
    /// listen to events the banner view may raise.
    /// </summary>
    private void ListenToAdEvents()
    {
        // Raised when an ad is loaded into the banner view.
        _bannerView.OnBannerAdLoaded += () =>
        {
            BannerReady = true;
            Debug.Log("Banner view loaded an ad with response : "
                + _bannerView.GetResponseInfo());
        };
        // Raised when an ad fails to load into the banner view.
        _bannerView.OnBannerAdLoadFailed += (LoadAdError error) =>
        {
            BannerReady = false;
            Debug.LogError("Banner view failed to load an ad with error : "
                + error);
            StartCoroutine(loadbanner());
        };
        // Raised when the ad is estimated to have earned money.
        _bannerView.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Banner view paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        _bannerView.OnAdImpressionRecorded += () =>
        {
            Debug.Log("Banner view recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        _bannerView.OnAdClicked += () =>
        {
            Debug.Log("Banner view was clicked.");
        };
        // Raised when an ad opened full screen content.
        _bannerView.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Banner view full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        _bannerView.OnAdFullScreenContentClosed += () =>
        {
            BannerReady = false;
            Debug.Log("Banner view full screen content closed.");
        };
    }

    IEnumerator loadbanner()
    {
        yield return new WaitForSeconds(3);
        if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        {
            FBAdManager.Instash.LoadBanner();
        }
        else if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            UnityBannermanager.instance.LoadBanner();
        }
    }

    #endregion

    #region Rewads

    public string RewardedId;

    public void LoadRewardedAd()
    {
        // Clean up the old ad before loading a new one.
        if (_rewardedAd != null)
        {
            _rewardedAd.Destroy();
            _rewardedAd = null;
        }




        Debug.Log("Loading the rewarded ad.");


        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        RewardedAd.Load(RewardedId, adRequest,
            (RewardedAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("Rewarded ad failed to load an ad " +
                                   "with error : " + error);
                    RewadReady = false;


                    StartCoroutine(LoadReward());
                    return;
                }

                RewadReady = true;
                _rewardedAd = ad;
                RegisterEventHandlers(ad);
            });
    }

    public void ShowRewardedAd(string rt)
    {
        const string rewardMsg =
            "Rewarded ad rewarded the user. Type: {0}, amount: {1}.";
        AppShow = false;
        if (_rewardedAd != null && _rewardedAd.CanShowAd())
        {
            _rewardedAd.Show((Reward reward) =>
            {
                // TODO: Reward the user.
                Rewad(rt);
                Debug.Log("sdfbasjhdfgasjhdgasdhjfgahjfasdghahgsdfahd");
            });
        }
    }

    private void RegisterEventHandlers(RewardedAd ad)
    {
        // Raised when the ad is estimated to have earned money.
        ad.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Rewarded ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        ad.OnAdImpressionRecorded += () =>
        {


            Debug.Log("Rewarded ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        ad.OnAdClicked += () =>
        {


            Debug.Log("Rewarded ad was clicked.");
        };
        // Raised when an ad opened full screen content.
        ad.OnAdFullScreenContentOpened += () => { Debug.Log("Rewarded ad full screen content opened."); };
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>
        {


            StartCoroutine(callappopentrue());
            RewadReady = false;

            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
            {
                LoadRewardedAd();
            }
            else if (AdManager.Instance.Adtype == "2")
            {
                FBAdManager.Instash.LoadRewardedVideo();
            }
            else if (AdManager.Instance.Adtype == "4")
            {
                UnityRewardManager.instance.LoadAd();
            }
            Debug.Log("Rewarded ad full screen content closed.");
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            RewadReady = false;
            if (Application.internetReachability == NetworkReachability.NotReachable)
            {
                Toast.Show("Oops! Your device is not connected to the internet. Please connect and try again.");
            }
            else
            {
                Toast.Show("We apologize, but there are no ads ready to be played right now. Please try again later.");
            }
            StartCoroutine(LoadRewadsfail());
            Debug.LogError("Rewarded ad failed to open full screen content " +
                           "with error : " + error);
        };
    }


    IEnumerator LoadRewadsfail()
    {
        yield return new WaitForSeconds(3);
        LoadRewardedAd();
    }

    IEnumerator LoadReward()
    {
        yield return new WaitForSeconds(3);

        if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        {
            FBAdManager.Instash.LoadRewardedVideo();
        }
        else if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            UnityRewardManager.instance.LoadAd();
        }
    }


    public void Rewad(string rt)
    {
        AdManager.Instance.CompleteRewardedVideo();
    }

    #endregion

    #region Interstitial

    public string InterstitialId;

    public void LoadLoadInterstitialAd()
    {
        // Clean up the old ad before loading a new one.
        if (_interstitialAd != null)
        {
            _interstitialAd.Destroy();
            _interstitialAd = null;
        }



        Debug.Log("Loading the interstitial ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        InterstitialAd.Load(InterstitialId, adRequest,
            (InterstitialAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    InterReady = false;


                    StartCoroutine(Loadinter());
                    return;
                }

                InterReady = true;
                _interstitialAd = ad;
                RegisterEventHandlers(ad);
            });
    }

    public void ShowInterstitialAd()
    {
        if (_interstitialAd != null && _interstitialAd.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            AppShow = false;
            _interstitialAd.Show();
        }
        else
        {
            Debug.LogError("Interstitial ad is not ready yet.");
        }
    }

    private void RegisterEventHandlers(InterstitialAd interstitialAd)
    {
        // Raised when the ad is estimated to have earned money.
        interstitialAd.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Interstitial ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        interstitialAd.OnAdImpressionRecorded += () =>
        {

            Debug.Log("Interstitial ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        interstitialAd.OnAdClicked += () =>
        {

            Debug.Log("Interstitial ad was clicked.");
        };
        // Raised when an ad opened full screen content.
        interstitialAd.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Interstitial ad full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        interstitialAd.OnAdFullScreenContentClosed += () =>
        {
            StartCoroutine(callappopentrue());
            InterReady = false;
            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
            {
                LoadLoadInterstitialAd();
            }
            else if (AdManager.Instance.Adtype == "2")
            {
                FBAdManager.Instash.LoadInterstitial();
            }
            else if (AdManager.Instance.Adtype == "4")
            {
                UnityInterstialManager.instance.LoadAd();
            }
            AdManager.Instance.CloseInterstitial();
            Debug.Log("Interstitial ad full screen content closed.");
        };
        // Raised when the ad failed to open full screen content.
        interstitialAd.OnAdFullScreenContentFailed += (AdError error) =>
        {
            InterReady = false;
            AdManager.Instance.CloseInterstitial();
            StartCoroutine(LoadIntersialfail());


            Debug.LogError("Interstitial ad failed to open full screen content " +
                           "with error : " + error);
        };
    }


    IEnumerator LoadIntersialfail()
    {
        yield return new WaitForSeconds(3);
        LoadLoadInterstitialAd();
    }

    IEnumerator Loadinter()
    {
        yield return new WaitForSeconds(3);
        if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2")
        {
            FBAdManager.Instash.LoadInterstitial();
        }
        else if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            UnityInterstialManager.instance.LoadAd();
        }
    }

    #endregion

    #region Appopen

    public string AppOpenId;
    public bool AppOpenReady;

    public bool IsAdAvailable
    {
        get
        {
            return appOpenAd != null;
        }
    }
    public void LoadAppOpenAd()
    {
        // Clean up the old ad before loading a new one.
        if (appOpenAd != null)
        {
            appOpenAd.Destroy();
            appOpenAd = null;
        }

        Debug.Log("Loading the app open ad.");

        // Create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        AppOpenAd.Load(AppOpenId, adRequest,
            (AppOpenAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("app open ad failed to load an ad " +
                                   "with error : " + error);
                    StartCoroutine(LoadAppopenfail());
                    return;
                }

                Debug.Log("App open ad loaded with response : "
                          + ad.GetResponseInfo());

                AppOpenReady = true;
                appOpenAd = ad;
                RegisterEventHandlers(ad);
            });
    }
    private void RegisterEventHandlers(AppOpenAd ad)
    {
        // Raised when the ad is estimated to have earned money.
        ad.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("App open ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        ad.OnAdImpressionRecorded += () =>
        {
            Debug.Log("App open ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        ad.OnAdClicked += () =>
        {
            Debug.Log("App open ad was clicked.");
        };
        // Raised when an ad opened full screen content.
        ad.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("App open ad full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("App open ad full screen content closed.");
            StartCoroutine(callappopentrue());
            LoadAppOpenAd();
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("App open ad failed to open full screen content " +
                           "with error : " + error);
            AdManager.Instance.ConfirmInter();
            StartCoroutine(LoadAppopenfail());
        };
    }
    IEnumerator LoadAppopenfail()
    {
        yield return new WaitForSeconds(3);
        LoadAppOpenAd();
    }

    private void OnAppStateChanged(AppState state)
    {
        Debug.Log("App State changed to : " + state);

        // if the app is Foregrounded and the ad is available, show it.
        if (state == AppState.Foreground)
        {
            if (IsAdAvailable)
            {
                if (AdManager.Instance.PreLoad.ToLower() == "true" && AdManager.Instance.showaAd.ToLower() == "true" && AdManager.Instance.appopenshow.ToLower() == "true")
                    ShowAppOpenAd();
            }
        }
    }

    public void ShowAppOpenAd()
    {
        if (AdManager.Instance.appopenshow == "true" && AdManager.Instance.showaAd == "true" && !AdManager.Instance.WebviewOpen &&
        AdManager.Instance.Game_Redirect.ToLower() == "false" && AdManager.Instance.Force_Update.ToLower() == "false")
        {
            if (appOpenAd != null && appOpenAd.CanShowAd())
            {
                AppShow = false;
                appOpenAd.Show();
            }
            else
            {
                Debug.Log("App open ad is not ready yet.");
            }
        }
    }

    public IEnumerator callappopentrue2()
    {
        yield return new WaitForSeconds(1.5f);
        AppShow = false;
        yield return new WaitForSeconds(2f);
        AppShow = true;
    }

    public IEnumerator callappopentrue()
    {
        yield return new WaitForSeconds(1f);
        AppShow = true;
    }

    public void callOffAppopen()
    {
        AppShow = false;
        StartCoroutine(callappopentrue2());
    }



    #endregion
}