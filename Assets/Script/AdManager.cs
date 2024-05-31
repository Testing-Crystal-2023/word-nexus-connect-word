using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using TMPro;
using Game;
using EasyUI.Toast;
[Serializable]
public class NewQurekaData
{
    public List<QurekaData> qureka;
}
[Serializable]
public class QurekaData
{
    public string link;
    public string type;
    public List<string> image;
}
public class AdManager : MonoBehaviour
{
    public static AdManager Instance;
    public string WebviewURL,
                UPI_WEBVIEW_AMOUNT,
                transactionMinuteForUPIFlow,
                minimumWithdrawal_UPI_Flow,
                UPI_Wallet_Show,
                Histry_Screen_Note,
                Crypto_Wallet_Show,
                WalletCoinConvertValue,
                Buy_Sell_Screen_Message,
                Network_Fee_Information_message,
                UploadData_SheetURI,
                Big_Size_Image_Error_Message,
                Max_Image_Size_MB;
    public bool isFirstOpen, WebviewOpen, handAnimationShow;

    public float intervalTime;

    public float interClick;

    public float timer;

    public bool canshowInter;

    public UnityAction InvokeSdkAction;

    public string PrivacyPolicy;

    public string AudiomobAdShowType;

    public string AudiomobAd;

    public string ReviewPopup;

    public string ReviewType;

    public string transferFeesAmount;
    public string transferFeesPercentage;

    public GameObject OnLoadeAdsObject;

    public string PreLoad;


    public string Adtype;

    public static bool VapnIsOn;
    public string AppPopUp,walletData;
    public string WalletUnlockValue;
    public string dollarSine;
    public string showaAd;
    public string appopenshow;
    public string WalletShow;
    public string Qureka_ads_status;
    public string qureka;
    public string Winfailads;
    public string Wingetbutton;
    public string bottom_banner;
    public string audioMobtime;
    public string audiomobAdRewad;

    public bool coinReward;
    public List<int> intlist = new List<int>();
    [SerializeField] private int minVal = 0, maxVal = 16;
    public GameObject updatePopUp, redirectPopUp, redirectPopUpCloseBtn;
    public TextMeshProUGUI redirectText, redirectMsg, redirectBtnText;
    public bool isTestJson;

    public string bannerClickUrl, interClickUrl, rewardsClickUrl, Game_Redirect_Msg, Game_Redirect_Title, Game_Redirect_ButtonTxt, Force_Update_Version
        , Game_Redirect, Close_Button, Force_Update, Game_Redirect_ButtonURL;
    public List<Sprite> bannerSprites;
    public List<Sprite> interSprites;
    public List<Sprite> rewardSprites;
    public List<string> gifUrls;
    public string review_star_setup, review_title, review_reward, review_desc, minimumWithdrawal, transactionMinuteForTransferFeesFlow, transferFees, isTransferFeesFix;
    public NewQurekaData jsnData;
    private void Awake()
    {
        Application.runInBackground = false;
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

        InvokeSdkAction += InvokeIrs;
    }


    private void Start()
    {
        string pakegName = Application.identifier;
        Application.targetFrameRate = 60;


        if (updatePopUp != null)
            updatePopUp.SetActive(false);
        if (redirectPopUp != null)
            redirectPopUp.SetActive(false);
    }

    public IEnumerator GetJsonData(string uri)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(uri))
        {
            //Debug.LogError(uri);
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(request.error);
            }
            else
            {
                //Debug.LogError(request.downloadHandler.text);
                JsonUtility.FromJsonOverwrite(request.downloadHandler.text, jsnData);


                bannerClickUrl = jsnData.qureka[0].link;
                interClickUrl = jsnData.qureka[1].link;
                rewardsClickUrl = jsnData.qureka[2].link;
                gifUrls = jsnData.qureka[3].image;

                Popup();

                StartCoroutine(LoadImages(jsnData.qureka[0].image, 0));
                StartCoroutine(LoadImages(jsnData.qureka[1].image, 1));
                StartCoroutine(LoadImages(jsnData.qureka[2].image, 2));
            }
        }
    }
    public void Popup()
    {
        float tempVersion;
        float.TryParse(Application.version, out tempVersion);

        if (Game_Redirect.ToLower() == "true")
        {
            redirectPopUp.SetActive(true);
            redirectPopUpCloseBtn.SetActive(false);
            if (Close_Button.ToLower() == "true")
                redirectPopUpCloseBtn.SetActive(true);
            redirectText.text = Game_Redirect_Title;
            redirectMsg.text = Game_Redirect_Msg;
            redirectBtnText.text = Game_Redirect_ButtonTxt;
            Time.timeScale = 0;
        }
        if (Force_Update.ToLower() == "true" && tempVersion > 0 && tempVersion <= float.Parse(Force_Update_Version))
        {
            updatePopUp.SetActive(true);
            Time.timeScale = 0;
        }
    }
    
    public void RedirectGame()
    {
        Application.OpenURL(Game_Redirect_ButtonURL);
    }
    public void UpdateGame()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=" + Application.identifier);
    }
    public void CloseRedirect()
    {
        redirectPopUp.SetActive(false);
        if (!updatePopUp.activeSelf)
        {
            Time.timeScale = 1;
        }
    }
    private IEnumerator LoadImages(List<string> urls, int adType)
    {
        switch (adType)
        {
            case 0:
                bannerSprites.Clear();
                break;
            case 1:
                interSprites.Clear();
                break;
            case 2:
                rewardSprites.Clear();
                break;
        }

        foreach (string url in urls)
        {
            using (UnityWebRequest www = UnityWebRequestTexture.GetTexture(url))
            {
                yield return www.SendWebRequest();

                if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
                {
                    Debug.LogWarning("Error loading image: " + www.error);
                }
                else
                {
                    // Get the downloaded texture
                    Texture2D texture = DownloadHandlerTexture.GetContent(www);

                    // Create a sprite from the downloaded texture
                    Sprite sprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));


                    /* // Create a new RawImage for the loaded image
                    Image image = Instantiate(rawImagePrefab, imageContainer);
                    image.sprite = sprite; */

                    switch (adType)
                    {
                        case 0:
                            bannerSprites.Add(sprite);
                            break;
                        case 1:
                            interSprites.Add(sprite);
                            break;
                        case 2:
                            rewardSprites.Add(sprite);
                            break;
                    }
                }
            }
        }
    }
    public void AdsCounter()
    {
        string pakegName = Application.identifier;
    }

    private void InvokeIrs()
    {
        Debug.Log("Hello");
    }
    public void CloseInterstitial()
    {

    }

    public void CompleteRewardedVideo()
    {
        StartCoroutine(DelayCompleteRewardedVideo());
    }

    public IEnumerator DelayCompleteRewardedVideo()
    {
        yield return new WaitForSeconds(0.1f);
        try
        {
            GoogleAdMob.Instash.callOffAppopen();
            Debug.LogWarning("Close rewarded infor here");

            CompleteRewardedVideoAds();
        }
        catch (Exception e)
        {
            throw new Exception(e.Message);
        }
    }

    public void resetBools()
    {
    }

    public void CompleteRewardedVideoAds()
    {
        if (coinReward)
        {
            int animateFromCoins = WordNexus_GameController.Instance.Coins;
            WordNexus_GameController.Instance.GiveCoins(100, false);
            int animateToCoins = WordNexus_GameController.Instance.Coins;
            WordNexus_Pop_upManager.Instance.Show("reward_ad_granted", new object[] { 100, animateFromCoins, animateToCoins });
        }
    }

    public void CompleteRewardedVideoQureka()
    {

        if (coinReward)
        {
            int animateFromCoins = WordNexus_GameController.Instance.Coins;
            WordNexus_GameController.Instance.GiveCoins(100, false);
            int animateToCoins = WordNexus_GameController.Instance.Coins;
            WordNexus_Pop_upManager.Instance.Show("reward_ad_granted", new object[] { 100, animateFromCoins, animateToCoins });
        }
    }

    public void generateNo()
    {
        for (int i = minVal; i < maxVal; i++)
        {
            intlist.Add(i);
        }

        intlist = intlist.OrderBy(tvz => System.Guid.NewGuid()).ToList();
    }

    private void Update()
    {
        // Debug.Log(timer);
        if (timer > 0)
        {
            timer -= Time.deltaTime;
            canshowInter = false;
        }
        else
        {
            canshowInter = true;
        }
    }

    public void updatewatsh()
    {
        PlayerPrefs.SetInt("Watchads", PlayerPrefs.GetInt("Watchads", 0) + 1);
    }


    private int MotaVarachha = 1;

    public void ConfirmInter()
    {
        if (PlayerPrefs.GetInt("GmNoAd", 0) == 0)
        {
            Debug.Log("adstest");


            if (showaAd == "true")
            {
                if (PreLoad == "true")
                {
                    if (Adtype == "1" && canshowInter)
                    {
                        if (GoogleAdMob.Instash.InterReady)
                        {
                            GoogleAdMob.Instash.ShowInterstitialAd();
                        }
                        else if (FBAdManager.Instash.FBInterLoaded)
                        {
                            FBAdManager.Instash.ShowInterstitial();
                        }


                        ResetTimer();
                    }
                    else if (Adtype == "2" && canshowInter)
                    {
                        if (FBAdManager.Instash.FBInterLoaded)
                        {
                            FBAdManager.Instash.ShowInterstitial();
                        }
                        else if (GoogleAdMob.Instash.InterReady)
                        {
                            GoogleAdMob.Instash.ShowInterstitialAd();
                        }


                        ResetTimer();
                    }
                    else if (Adtype == "3" && canshowInter)
                    {
                        if (GoogleAdMob.Instash.InterReady)
                        {
                            GoogleAdMob.Instash.ShowInterstitialAd();
                        }
                        else if (UnityInterstialManager.instance.InterLoaded)
                        {
                            UnityInterstialManager.instance.ShowAd();
                        }
                        ResetTimer();
                    }
                    else if (Adtype == "4" && canshowInter)
                    {
                        if (UnityInterstialManager.instance.InterLoaded)
                        {
                            UnityInterstialManager.instance.ShowAd();
                        }
                        else if (GoogleAdMob.Instash.InterReady)
                        {
                            GoogleAdMob.Instash.ShowInterstitialAd();
                        }
                        ResetTimer();
                    }
                    else if (Adtype == "5" && canshowInter)
                    {
                        if (FBAdManager.Instash.FBInterLoaded)
                        {
                            FBAdManager.Instash.ShowInterstitial();
                        }
                        else if (UnityInterstialManager.instance.InterLoaded)
                        {
                            UnityInterstialManager.instance.ShowAd();
                        }
                        ResetTimer();
                    }
                    else if (Adtype == "6" && canshowInter)
                    {
                        if (UnityInterstialManager.instance.InterLoaded)
                        {
                            UnityInterstialManager.instance.ShowAd();
                        }
                        else if (FBAdManager.Instash.FBInterLoaded)
                        {
                            FBAdManager.Instash.ShowInterstitial();
                        }
                        ResetTimer();
                    }
                }
            }
        }
    }


    public void Reward(string rt)
    {
        if (PlayerPrefs.GetInt("GmNoAd", 0) == 0)
        {
            if (showaAd == "true")
            {
                if (PreLoad == "true")
                {
                    if (Adtype == "1")
                    {
                        if (GoogleAdMob.Instash.RewadReady)
                        {
                            GoogleAdMob.Instash.ShowRewardedAd(rt);
                        }
                        else if (FBAdManager.Instash.FBRewadLoaded)
                        {
                            FBAdManager.Instash.ShowRewardedVideo(rt);
                        }
                        else
                        {
                            show();
                        }
                    }
                    else if (Adtype == "2")
                    {
                        if (FBAdManager.Instash.FBRewadLoaded)
                        {
                            FBAdManager.Instash.ShowRewardedVideo(rt);
                        }
                        else if (GoogleAdMob.Instash.RewadReady)
                        {
                            GoogleAdMob.Instash.ShowRewardedAd(rt);
                        }
                        else
                        {
                            show();
                        }
                    }
                    else if (Adtype == "3")
                    {
                        if (GoogleAdMob.Instash.RewadReady)
                        {
                            GoogleAdMob.Instash.ShowRewardedAd(rt);
                        }
                        else if (UnityRewardManager.instance.RewardLoaded)
                        {
                            UnityRewardManager.instance.ShowAd();
                        }
                        else
                        {
                            show();
                        }
                    }
                    else if (Adtype == "4")
                    {
                        if (UnityRewardManager.instance.RewardLoaded)
                        {
                            UnityRewardManager.instance.ShowAd();
                        }
                        else if (GoogleAdMob.Instash.RewadReady)
                        {
                            GoogleAdMob.Instash.ShowRewardedAd(rt);
                        }
                        else
                        {
                            show();
                        }
                    }
                    else if (Adtype == "5")
                    {
                        if (FBAdManager.Instash.FBRewadLoaded)
                        {
                            FBAdManager.Instash.ShowRewardedVideo(rt);
                        }
                        else if (UnityRewardManager.instance.RewardLoaded)
                        {
                            UnityRewardManager.instance.ShowAd();
                        }
                        else
                        {
                            show();
                        }
                    }
                    else if (Adtype == "6")
                    {
                        if (UnityRewardManager.instance.RewardLoaded)
                        {
                            UnityRewardManager.instance.ShowAd();
                        }
                        else if (FBAdManager.Instash.FBRewadLoaded)
                        {
                            FBAdManager.Instash.ShowRewardedVideo(rt);
                        }
                        else
                        {
                            show();
                        }
                    }
                    else
                    {
                        show();
                    }
                }
            }
            else
            {
                show();
            }
        }

        else
        {
            CompleteRewardedVideo();
        }
    }

    public void show()
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
    public void ResetTimer()
    {
        timer = intervalTime;
        canshowInter = false;
    }
}