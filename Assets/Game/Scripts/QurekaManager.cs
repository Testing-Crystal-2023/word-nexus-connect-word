using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QurekaManager : MonoBehaviour
{
    public ProGifPlayerPanel gifManager;
    public GameObject bannerHolder, interHolder, RewardHolder;
    public List<Sprite> bannerImgs, interImgs, rewardImgs;
    public Image bannerImgHolder,interImgHolder,rewardImgHolder;
    public bool interBool,rewardBool;
            
    public static QurekaManager Instance;

    private void Awake() {
        if(Instance==null)
        Instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        bannerHolder.SetActive(false);
        interHolder.SetActive(false);
        RewardHolder.SetActive(false);

        bannerImgs.Clear();
        interImgs.Clear();
        rewardImgs.Clear();

        bannerImgs = AdManager.Instance.bannerSprites;
        bannerImgHolder.sprite = bannerImgs[Random.Range(0, bannerImgs.Count-1)];
        
        InItInter();
        InItRewards();

        if(AdManager.Instance.Qureka_ads_status.ToLower() == "true")
        {
            bannerHolder.SetActive(true);
            gifManager.gifPath = AdManager.Instance.gifUrls[Random.Range(0, AdManager.Instance.gifUrls.Count-1)];
            gifManager.Play();
        }
    }
    public void BannerAdClick()
    {
        AppMetEvents.Instance.BannerAdsTap("Qureka");
        Application.OpenURL(AdManager.Instance.bannerClickUrl);
    }
    public void InItInter()
    {
        interImgs = AdManager.Instance.interSprites;
        interImgHolder.sprite = interImgs[Random.Range(0, interImgs.Count-1)];
    }  
    public void ShowInterAd()
    {
        AppMetEvents.Instance.InterstitalAdsWatch("Qureka");
        interHolder.SetActive(true);
    } 
    public void InterAdClick()
    {
        AppMetEvents.Instance.InterstitalAdsClick("Qureka");
        interBool = true;
        Application.OpenURL(AdManager.Instance.interClickUrl);
    }
    public void CloseInterAd()
    {
        if (interBool)
        {
            interHolder.SetActive(false);
            AdManager.Instance.CloseInterstitial();
            InItInter();
        }
        else
        {
            AppMetEvents.Instance.InterstitalAdsClick("Qureka_CloseBtn");
            Application.OpenURL(AdManager.Instance.interClickUrl);
        }
        interBool = !interBool;
    }
    public void InItRewards()
    {
        rewardImgs = AdManager.Instance.rewardSprites;
        rewardImgHolder.sprite = rewardImgs[Random.Range(0, rewardImgs.Count-1)];
    }   
    public void ShowRewardedAd(string placement)
    {
        AppMetEvents.Instance.VideoAdsStarted(placement+"_Qureka");
        RewardHolder.SetActive(true);
    } 
    public void RewardsAdClick()
    {
        AppMetEvents.Instance.RewardAdsClick("Qureka");
        rewardBool = true;
        Application.OpenURL(AdManager.Instance.rewardsClickUrl);
    }
    
    public void CloseRewardsAd()
    {
        if(rewardBool)
        {   
            RewardHolder.SetActive(false);
            AdManager.Instance.CompleteRewardedVideoQureka();
            InItRewards();
        }
        else
        {
            AppMetEvents.Instance.RewardAdsClick("Qureka_CloseBtn");
            Application.OpenURL(AdManager.Instance.rewardsClickUrl);
        }
        rewardBool = !rewardBool;
    }
}
