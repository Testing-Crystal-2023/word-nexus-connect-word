using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class UnityManager : MonoBehaviour, IUnityAdsInitializationListener, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] string _androidGameId;
    [SerializeField] string _iOSGameId;
    public bool _testMode = true;
    public string _bannerId, _interstitialId, _rewardeId;
    [SerializeField] private string _gameId;
    public bool UnityBannerLoaded, UnityInterLoaded, UnityRewardLoaded = false;
    public static UnityManager Instance;

    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        InitializeAds();
    }
    public void LoadUnityads()
    {
        LoadBanner();
        LoadInterstitialAd();
        LoadRewardedVideo();
    }

    #region  Unity Initialization

    public void InitializeAds()
    {
#if UNITY_IOS
            _gameId = _iOSGameId;
#elif UNITY_ANDROID
        _gameId = _androidGameId;
#elif UNITY_EDITOR
            _gameId = _androidGameId; //Only for testing the functionality in the Editor
#endif
        if (!Advertisement.isInitialized && Advertisement.isSupported)
        {
            Advertisement.Initialize(_gameId, _testMode, this);
        }
    }


    public void OnInitializationComplete()
    {
        Debug.Log("Unity Ads initialization complete.");
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
    }
    #endregion

    #region  Unity Banner
    // Implement a method to call when the Load Banner button is clicked:
    public void LoadBanner()
    {
        UnityBannerLoaded = false;
        if (AdManager.Instance.bottom_banner == "hide")
        {
        }
        else
        {

            Debug.LogWarning("UNity LoadBanner() is run");
            // Set up options to notify the SDK of load events:
            BannerLoadOptions options = new BannerLoadOptions
            {
                loadCallback = OnBannerLoaded,
                errorCallback = OnBannerError
            };


            // Set the banner position:
            Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
            // Load the Ad Unit with banner content:
            Advertisement.Banner.Load(_bannerId, options);
        }
    }

    // Implement code to execute when the loadCallback event triggers:
    void OnBannerLoaded()
    {
        UnityBannerLoaded = true;
        ShowBannerAd();
        Debug.Log("UNity Banner loaded");
    }

    // Implement code to execute when the load errorCallback event triggers:
    void OnBannerError(string message)
    {
        UnityBannerLoaded = false;
        Debug.Log($"UNity Banner Error: {message}");
        if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            Debug.LogWarning("Unity failed and Google request");
            StartCoroutine(loadgooglebanner());
        }
        else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        {
            Debug.LogWarning("Unity failed and FB request");
            StartCoroutine(loadfacebookbanner());
        }
        // Optionally execute additional code, such as attempting to load another ad.
    }

    IEnumerator loadfacebookbanner()
    {
        yield return new WaitForSeconds(3);
        if(!FBAdManager.Instash.FBBannerLoaded)
            FBAdManager.Instash.LoadBanner();
    }
    IEnumerator loadgooglebanner()
    {
        yield return new WaitForSeconds(3);
        Debug.LogWarning("Unity Banner failed and Google request");
        Debug.LogWarning("loadgooglebanner is run");
        if(!GoogleAdMob.Instash.BannerReady)
            GoogleAdMob.Instash.LoadBanner();
    }

    // Implement a method to call when the Show Banner button is clicked:
    void ShowBannerAd()
    {
        Debug.LogWarning("Unity ShowBannerAd() run");
        // Set up options to notify the SDK of show events:
        BannerOptions options = new BannerOptions
        {
            clickCallback = OnBannerClicked,
            hideCallback = OnBannerHidden,
            showCallback = OnBannerShown
        };

        // Show the loaded Banner Ad Unit:
        Advertisement.Banner.Show(_bannerId, options);
    }

    void OnBannerClicked() { }
    void OnBannerShown() { }
    void OnBannerHidden() { }

    #endregion

    #region Unity Interstitial
    // Load content to the Ad Unit:
    public void LoadInterstitialAd()
    {
        Debug.LogWarning("Unity LoadInterstitialAd() run");
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.LogWarning("Loading Ad: " + _interstitialId);
        Advertisement.Load(_interstitialId, this);
    }

    // Show the loaded content in the Ad Unit:
    public void ShowInterstitialAd()
    {
        Debug.LogWarning("Unity ShowInterstitialAd() run");
        // Note that if the ad content wasn't previously loaded, this method will fail
        Debug.LogWarning("Showing Ad: " + _interstitialId);
        Advertisement.Show(_interstitialId, this);
    }


    IEnumerator LoadFacebokkinter()
    {
        yield return new WaitForSeconds(3);
        FBAdManager.Instash.LoadInterstitial();
    }
    IEnumerator loadgoogleinter()
    {
        yield return new WaitForSeconds(3);
        Debug.LogWarning("Unity Inter failed and Google request");
        GoogleAdMob.Instash.LoadLoadInterstitialAd();
    }
    #endregion



    #region  Unity Rewarded
    // Call this public method when you want to get an ad ready to show.
    public void LoadRewardedVideo()
    {
        Debug.LogWarning("Unity LoadRewardedVideo() run");
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.LogWarning("Loading Ad: " + _rewardeId);
        Advertisement.Load(_rewardeId, this);
    }


    // Implement a method to execute when the user clicks the button:
    public void ShowRewardedVideo()
    {
        Debug.LogWarning("Unity ShowRewardedVideo() run");
        // Then show the ad:
        Advertisement.Show(_rewardeId, this);
    }

    #endregion

    #region  Unity Callbacks

    // Implement Load Listener and Show Listener interface methods: 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        if (adUnitId.Equals(_interstitialId))
        {
            Debug.LogWarning("UNity INter loaded");
            UnityInterLoaded = true;
        }
        else if (adUnitId.Equals(_rewardeId))
        {
            Debug.LogWarning("UNity Rewarded loaded");
            UnityRewardLoaded = true;
        }
        // Optionally execute code if the Ad Unit successfully loads content.
    }

    public void OnUnityAdsFailedToLoad(string _adUnitId, UnityAdsLoadError error, string message)
    {
        if (_adUnitId.Equals(_interstitialId))
        {
            Debug.LogWarning($"UNity Inter Load Error: {message}");
            UnityInterLoaded = false;

            if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
            {
                StartCoroutine(loadgoogleinter());
            }
            else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
            {
                Debug.LogWarning("call google fail  LoadFacebokkinter()");
                StartCoroutine(LoadFacebokkinter());
            }
            
        }
        else if (_adUnitId.Equals(_rewardeId))
        {
            Debug.Log($"UNity Rewarde Load Error: {message}");
            UnityRewardLoaded = false;
            if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
            {
                Debug.LogWarning("call Unity Reward fail loadgooglerewad()");
                StartCoroutine(loadgooglerewad());
            }
            else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
            {
                Debug.LogWarning("call Unity Reward fail LoadFacebook()");
                StartCoroutine(LoadFacebokk());
            }
        }
        Debug.Log($"Unity Error loading Ad Unit: {_adUnitId} - {error.ToString()} - {message}");
        // Optionally execute code if the Ad Unit fails to load, such as attempting to try again.
    }
    public void OnUnityAdsShowFailure(string _adUnitId, UnityAdsShowError error, string message)
    {
        if (_adUnitId.Equals(_interstitialId))
        {
            UnityInterLoaded = false;
            StartCoroutine(LoadIntersialfail());
            Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");
        }
        else if (_adUnitId.Equals(_rewardeId))
        {
            UnityRewardLoaded = false;
            StartCoroutine(LoadRewadsfail());
            Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");
        }
        // Optionally execute code if the Ad Unit fails to show, such as loading another ad.
    }
    IEnumerator LoadIntersialfail()
    {
        yield return new WaitForSeconds(3);

        Debug.LogWarning("Google LoadIntersialfail");
        LoadInterstitialAd();
    }
    
    IEnumerator LoadRewadsfail()
    {
        yield return new WaitForSeconds(3);
        Debug.LogWarning("Google LoadRewadsfail");
        LoadRewardedVideo();
    }
    public void OnUnityAdsShowStart(string _adUnitId) { }
    public void OnUnityAdsShowClick(string _adUnitId) { }
    public void OnUnityAdsShowComplete(string _adUnitId, UnityAdsShowCompletionState showCompletionState)
    {
        if (_adUnitId.Equals(_interstitialId))
        {

            Debug.LogWarning("Unity Inter OnUnityAdsShowComplete");
            UnityInterLoaded = false;


            StartCoroutine(callappopentrue());

            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
            {
                Debug.LogWarning("Unity Inter GoogleAdMob.Instash.LoadLoadInterstitialAd();");
                GoogleAdMob.Instash.LoadLoadInterstitialAd();
            }
            else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
            {
                Debug.LogWarning(" FBAdManager.Instash.LoadInterstitial();");
                FBAdManager.Instash.LoadInterstitial();
            }
            else if (AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "6")
            {
                Debug.LogWarning("LoadInterstitialAd();");
                LoadInterstitialAd();
            }
        }
        else if (_adUnitId.Equals(_rewardeId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            Debug.LogWarning("Unity Rewarded OnUnityAdsShowComplete");
            AdManager.Instance.CompleteRewardedVideo();
            StartCoroutine(callappopentrue());
            UnityRewardLoaded = false;
            if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
            {
                Debug.LogWarning("Unity Inter GoogleAdMob.Instash.LoadRewardedAd();");
                GoogleAdMob.Instash.LoadRewardedAd();
            }
            else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
            {
                Debug.LogWarning("Unity Inter GoogleAdMob.Instash.LoadRewardedVideo();");
                FBAdManager.Instash.LoadRewardedVideo();
            }
            else if (AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "6")
            {
                Debug.LogWarning("LoadRewardedVideo();");
                LoadRewardedVideo();
            }
        }
    }

    #endregion
    IEnumerator loadgooglerewad()
    {
        yield return new WaitForSeconds(3);
        Debug.LogWarning("Unity Reward failed and Google request");
        GoogleAdMob.Instash.LoadRewardedAd();
    }

    IEnumerator LoadFacebokk()
    {
        yield return new WaitForSeconds(3);
        FBAdManager.Instash.LoadRewardedVideo();
    }
    public IEnumerator callappopentrue()
    {
        yield return new WaitForSeconds(1.5f);
        GoogleAdMob.Instash.AppShow = true;
    }
}