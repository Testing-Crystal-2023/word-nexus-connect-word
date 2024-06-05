using System.Collections;
using UnityEngine;
using UnityEngine.Advertisements;

public class UnityInterstialManager : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    public static UnityInterstialManager instance;
    public string _androidAdUnitId;
    [SerializeField] string _iOsAdUnitId = "Interstitial_iOS";
    public bool InterLoaded=false;
    void Awake()
    {
        if(instance==null)
            instance =this;
        // Get the Ad Unit ID for the current platform:
        _androidAdUnitId = (Application.platform == RuntimePlatform.IPhonePlayer)
            ? _iOsAdUnitId
            : _androidAdUnitId;
    }
    
    void Start()
    {
    }
    // Load content to the Ad Unit:
    public void LoadAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading unity interstial Ad: " + _androidAdUnitId);
        Advertisement.Load(_androidAdUnitId, this);
    }
 
    // Show the loaded content in the Ad Unit:
    public void ShowAd()
    {
        // Note that if the ad content wasn't previously loaded, this method will fail
        Debug.Log("unity Inter show " + _androidAdUnitId);
        Advertisement.Show(_androidAdUnitId, this);
    }
 
    // Implement Load Listener and Show Listener interface methods: 
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        Debug.Log("unity Inter Loaded " + _androidAdUnitId);
        InterLoaded=true;
    }
 
    public void OnUnityAdsFailedToLoad(string _adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit: {_adUnitId} - {error.ToString()} - {message}");
        
        InterLoaded=false;
        StartCoroutine(loadinter());
        // Optionally execute code if the Ad Unit fails to load, such as attempting to try again.
        if(AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            GoogleAdMob.Instash.LoadLoadInterstitialAd();
        }
        else if(AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        {
            FBAdManager.Instash.LoadInterstitial();
        }
    }
 
    public void OnUnityAdsShowFailure(string _adUnitId, UnityAdsShowError error, string message)
    {
        InterLoaded=false;
        AdManager.Instance.CloseInterstitial();
        Debug.Log($"Error showing Ad Unit {_adUnitId}: {error.ToString()} - {message}");

        // Optionally execute code if the Ad Unit fails to show, such as loading another ad.
        StartCoroutine(loadinter());
    }
    IEnumerator loadinter()
    {
        yield return new WaitForSeconds(3);
        LoadAd();
    }
    public void OnUnityAdsShowStart(string _adUnitId) { }
    public void OnUnityAdsShowClick(string _adUnitId) { }
    public void OnUnityAdsShowComplete(string _adUnitId, UnityAdsShowCompletionState showCompletionState) 
    { 
        AdManager.Instance.CloseInterstitial();
        if(AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "6")
        {
            LoadAd();
        }
        else if(AdManager.Instance.Adtype == "5")
        {
            FBAdManager.Instash.LoadInterstitial();
        }
        else if(AdManager.Instance.Adtype == "3")
        {
            GoogleAdMob.Instash.LoadLoadInterstitialAd();
        }
    }
}