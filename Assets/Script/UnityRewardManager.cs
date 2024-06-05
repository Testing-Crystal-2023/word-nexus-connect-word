using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;
using System.Collections;
using EasyUI.Toast;

public class UnityRewardManager : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    public static UnityRewardManager instance;

    public string _androidAdUnitId;
    [SerializeField] string _iOSAdUnitId = "Rewarded_iOS";
    public bool RewardLoaded = false;
    void Awake()
    {
        if (instance == null)
            instance = this;
    }

    void Start()
    {
    }
    // Call this public method when you want to get an ad ready to show.
    public void LoadAd()
    {
        // IMPORTANT! Only load content AFTER initialization (in this example, initialization is handled in a different script).
        Debug.Log("Loading unity reward Ad: " + _androidAdUnitId);
        Advertisement.Load(_androidAdUnitId, this);
    }

    // If the ad successfully loads, add a listener to the button and enable it:
    public void OnUnityAdsAdLoaded(string adUnitId)
    {
        Debug.Log("Unity Reward Ad Loaded: " + adUnitId);

        RewardLoaded = true;
    }

    // Implement a method to execute when the user clicks the button:
    public void ShowAd()
    {
        Debug.Log("Unity Reward Ad show ");
        Advertisement.Show(_androidAdUnitId, this);
    }

    // Implement the Show Listener's OnUnityAdsShowComplete callback method to determine if the user gets a reward:
    public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState)
    {
        if (adUnitId.Equals(_androidAdUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            Debug.Log("Unity Ads Rewarded Ad Completed");

            AdManager.Instance.CompleteRewardedVideo();
            if (AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "6")
            {
                LoadAd();
            }
            else if (AdManager.Instance.Adtype == "5")
            {
                FBAdManager.Instash.LoadRewardedVideo();
            }
            else if (AdManager.Instance.Adtype == "3")
            {
                GoogleAdMob.Instash.LoadRewardedAd();
            }
        }
    }

    // Implement Load and Show Listener error callbacks:
    public void OnUnityAdsFailedToLoad(string adUnitId, UnityAdsLoadError error, string message)
    {
        Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
        LoadAd();
        // Use the error details to determine whether to try to load another ad.
        if (AdManager.Instance.Adtype == "3" || AdManager.Instance.Adtype == "4")
        {
            GoogleAdMob.Instash.LoadRewardedAd();
        }
        else if (AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
        {
            FBAdManager.Instash.LoadRewardedVideo();
        }
    }

    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message)
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Toast.Show("Oops! Your device is not connected to the internet. Please connect and try again.");
        }
        else
        {
            Toast.Show("We apologize, but there are no ads ready to be played right now. Please try again later.");
        }
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
        // Use the error details to determine whether to try to load another ad.
        StartCoroutine(loadReward());

    }
    IEnumerator loadReward()
    {
        yield return new WaitForSeconds(3);
        LoadAd();
    }
    public void OnUnityAdsShowStart(string adUnitId) { }
    public void OnUnityAdsShowClick(string adUnitId) { }

}