using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.iOS;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingScene : MonoBehaviour
{
    public static LoadingScene instash;
    private float timeRemaining = 11;
    public Image cooldown;
    public string PreLoad;
    public string showaAd;

    public string AdsPerameter;

    public string InterTimer;

    public string PrivacyPolicy;

    private bool Try = true;

    private bool Call = false;

    private float Dar = 0;

    public string AudiomobAdShowType;

    public string AudiomobAd;

    public string ReviewPopup;

    public string ReviewType;

    public string AppPopUp;

    private bool solwe = true;

    public bool Internet = true;

    public GameObject[] Star;

    public GameObject PopUpReview;


    private bool popupcall = true;

    private int Show;

    private void Awake()
    {
        if (instash == null)
        {
            instash = this;
        }
    }

    private void Start()
    {
        Invoke("OnReviewPop", 5.5f);
    }

    public void OnReviewPop()
    {
        if (ReviewPopup == "true")
        {
            if (PlayerPrefs.GetInt("Reviewpopshow", 0) == 0)
            {
                Time.timeScale = 0;
                PopUpReview.SetActive(true);
                PlayerPrefs.SetInt("Reviewpopshow", 1);
            }
            else
            {
                PopUpReview.SetActive(false);
            }
        }
    }

    void Update()
    {
        Dar += Time.deltaTime;

        if (cooldown.fillAmount < 0.79f)
        {
            cooldown.fillAmount += 1.0f / timeRemaining * Time.deltaTime;
        }
        else
        {
            if (Try)
            {
                if (PreLoad == "true" && Internet || PreLoad == "false" && Internet)
                {
                    Try = false;
                    LoadAds();
                }
            }
            if (PreLoad == "true" && Internet || PreLoad == "false" && Internet)
            {
                if (GoogleAdMob.Instash.InterReady || FBAdManager.Instash.FBInterLoaded || Dar >= 15 ||
                    PreLoad == "false" || showaAd == "false")
                {
                    Call = true;
                }

                if (Call && solwe)
                {
                    solwe = false;
                    Call = false;
                    cooldown.fillAmount = 1;
                    StartCoroutine(DoSomething());
                }
            }
        }

        /*else
        {
            if (solwe)
            {
                solwe=false;
                SceneManager.LoadScene(1);

            }
          
        }*/ /**/
    }

    IEnumerator DoSomething()
    {
        if (PreLoad == "true")
        {
            if (AdManager.Instance.appopenshow == "true")
            {
                if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "3"
                     || AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "5" || AdManager.Instance.Adtype == "6")
                {
                    if (GoogleAdMob.Instash.AppOpenReady)
                    {
                        GoogleAdMob.Instash.ShowAppOpenAd();
                    }
                    else
                    {
                        showIntr();
                    }
                }
            }
            else
            {
                showIntr();
            }
        }

        yield return new WaitForSeconds(1f);
        SceneManager.LoadScene(1);
    }
    void showIntr()
    {
        if (AdManager.Instance.Qureka_ads_status.ToLower() == "false")
        {
            if (FBAdManager.Instash.FBInterLoaded || GoogleAdMob.Instash.InterReady || UnityManager.Instance.UnityInterLoaded)
            {
                AdManager.Instance.ConfirmInter();
            }
            else
            {
                SceneManager.LoadSceneAsync(1);
            }
        }
        else if (AdManager.Instance.Qureka_ads_status.ToLower() == "true" &&
            AdManager.Instance.PreLoad.ToLower() == "false" && AdManager.Instance.showaAd.ToLower() == "false")
        {
            QurekaManager.Instance.ShowInterAd();
        }
        else
        {
            SceneManager.LoadSceneAsync(1);
        }
    }


    public void Setid()
    {
        AdManager.Instance.timer = int.Parse(InterTimer);
        AdManager.Instance.intervalTime = int.Parse(InterTimer);
        AdManager.Instance.PrivacyPolicy = PrivacyPolicy;
        AdManager.Instance.PreLoad = PreLoad;
        AdManager.Instance.ReviewPopup = ReviewPopup;
        AdManager.Instance.ReviewType = ReviewType;
        AdManager.Instance.AppPopUp = AppPopUp;
        AdManager.Instance.showaAd = showaAd;
    }

    public void LoadAds()
    {
        if (showaAd == "false")
        {
        }
        else if (AdManager.Instance.Adtype == "1" || AdManager.Instance.Adtype == "3")
        {
            Debug.Log("Adtype == " + AdManager.Instance.Adtype);
            GoogleAdMob.Instash.LoadGoogleads();
        }
        else if (AdManager.Instance.Adtype == "2" || AdManager.Instance.Adtype == "5")
        {
            Debug.Log("Adtype == " + AdManager.Instance.Adtype);
            FBAdManager.Instash.FBLoadsads();
            if (AdManager.Instance.appopenshow == "true")
            {
                GoogleAdMob.Instash.LoadAppOpenAd();
            }
        }
        else if (AdManager.Instance.Adtype == "4" || AdManager.Instance.Adtype == "6")
        {
            Debug.Log("Adtype == " + AdManager.Instance.Adtype);
            if (AdManager.Instance.appopenshow == "true")
            {
                GoogleAdMob.Instash.LoadAppOpenAd();
            }
            UnityManager.Instance.LoadUnityads();

        }
    }

    public void ShowStar(int show)
    {
        for (int i = 0; i <= show; i++)
        {
            Star[i].SetActive(true);
        }

        Show = show;
    }

    public void CancelReview()
    {
        Invoke("Hidepopup", 0);
        Time.timeScale = 1;
    }

    public void submitreview()
    {
        Invoke("Hidepopup", 0);
        if (Show < 4)
        {
            Time.timeScale = 1;
        }

        if (Show == 4)
        {
            if (ReviewType == "true")
            {
                Time.timeScale = 1;
    //             SetReview();
            }
            else
            {
                Time.timeScale = 1;
                Application.OpenURL("https://apps.apple.com/app/id6503903776");
            }
        }
    }

    public void Hidepopup()
    {
        PopUpReview.SetActive(false);
    }

    public void SetReview()
    {
        Device.RequestStoreReview();
        int count = PlayerPrefs.GetInt("ReviewApplyComplete", 0);
        count += 1;
        PlayerPrefs.SetInt("ReviewApplyComplete", count);
    }

    public void Logreview(string review)
    {
    }
}