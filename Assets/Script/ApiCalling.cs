using System;
using Newtonsoft.Json.Linq;
// using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using AndroidInstallReferrer;
using System.Threading.Tasks;

public class ApiCalling : MonoBehaviour
{
  public static ApiCalling Instash;
  public string pakageName;
  public string deviceID;

  byte[]
      key = Encoding.UTF8.GetBytes(
          "hljfhcbvyrjdnclgmidhcjsyrkalseuq"); // Make sure the key is the correct length for the chosen algorithm

  byte[] iv = Encoding.UTF8.GetBytes("hahdtficlupvwbvh");

  public string InstallReferer;
  private string PlayInstant;
  private bool Retantion;
  private bool MarketingUser;
  public Text loading;

  void Start()
  {
    pakageName = Application.identifier + ".ios";
    deviceID = SystemInfo.deviceUniqueIdentifier;
    InvokeRepeating("ani", 0f, 2f);
  }

  public void CallApi()
  {
    StartCoroutine(Webavtarupdate("https://sevtameta.shop:8000/api/auth/userDownload"));
  }
  async void ani()
  {
    if(loading!=null)
      loading.text = "Loading.";
    await Task.Delay(500);
    if(loading!=null)
      loading.text = "Loading..";
    await Task.Delay(500);
    if(loading!=null)
      loading.text = "Loading...";
    await Task.Delay(500);
    if(loading!=null)
      loading.text = "Loading..";
    await Task.Delay(500);
  }

  private void Awake()
  {
    if (Instash == null)
    {
      Instash = this;
    }

    if (PlayerPrefs.GetInt("retantion", 0) == 0)
    {
      PlayerPrefs.SetInt("retantion", 1);
      Retantion = false;
    }
    else
    {
      Retantion = true;
    }

    InstallReferrer.GetReferrer(OnGetData);
    //Emulating install referrer data in Unity Editor:
#if UNITY_EDITOR
    // InstallReferer = "https://play.google.com/store/apps/details?id=com.game.wordnexus.connectword&gclid=Cj0KCQiAtOmsBhCnARIsAGPa5ybwVz52PmqrPSKEFHjxhtCeOI-mI1bszBQ60CzlLOEzS6tlRVFVtW0aAnWnEALw_wcB";

    OnGetData(new InstallReferrerData(
        "utm_source=google&utm_medium=cpc&utm_term=1&utm_content=2&utm_campaign=3&anid=admob",
        "1.0", false,
        DateTime.Now, DateTime.Now,
        DateTime.Now, DateTime.Now));
#endif
  }


  public IEnumerator Webavtarupdate(string avtarurl)
  {
    yield return new WaitForSeconds(2.5f);

    Debug.Log("11111111110");
    /* if (InstallReferer.Contains("gclid"))
    {
        MarketingUser = true;
    }
    else
    {
        MarketingUser = false;
    } */

    string method_name = "dseth";
    string package = pakageName;
    string org = IpAPICall.instash.org;
    string country = IpAPICall.instash.country;
    string countryCode = IpAPICall.instash.countryCode;
    string region = IpAPICall.instash.region;
    string regionName = IpAPICall.instash.regionName;
    string city = IpAPICall.instash.city;
    string zip = IpAPICall.instash.zip;
    string lat = IpAPICall.instash.lat;
    string lon = IpAPICall.instash.lon;
    string timezone = IpAPICall.instash.timezone;
    string isp = IpAPICall.instash.isp;
    string @as = IpAPICall.instash.@as;
    string asname = IpAPICall.instash.asname;
    string callingCode = IpAPICall.instash.callingCode;
    string continent = IpAPICall.instash.continent;
    string continentCode = IpAPICall.instash.continentCode;
    string countryCode3 = IpAPICall.instash.countryCode3;
    string currency = IpAPICall.instash.currency;
    string currentTime = IpAPICall.instash.currentTime;
    string district = IpAPICall.instash.district;
    string hosting = IpAPICall.instash.hosting;
    bool mobile = IpAPICall.instash.mobile;
    string proxy = IpAPICall.instash.proxy;
    string offset = IpAPICall.instash.offset;
    string reverse = IpAPICall.instash.reverse;
    string status = IpAPICall.instash.status;
    string query = IpAPICall.instash.query;
    string device_id = deviceID;
    bool retention = Retantion;
    bool installerinfo = MarketingUser;
    string installerurl = InstallReferer;


    string jsonData = "{" + "\n" +
                      @"    ""method_name"":""" + method_name + @""",
                        " + "\n" +
                      @"    ""package"":""" + package + @""",
                        " + "\n" +
                      @"    ""org"":""" + org + @""",
                        " + "\n" +
                      @"    ""country"":""" + country + @""",
                         " + "\n" +
                      @"    ""countryCode"":""" + countryCode + @""",
                        " + "\n" +
                      @"    ""region"":""" + region + @""",
                        " + "\n" +
                      @"    ""regionName"":""" + regionName + @""",
                        " + "\n" +
                      @"    ""city"":""" + city + @""",
                        " + "\n" +
                      @"    ""zip"":""" + zip + @""",
                        " + "\n" +
                      @"    ""lat"":""" + lat + @""",
                        " + "\n" +
                      @"    ""lon"":""" + lon + @""",
                        " + "\n" +
                      @"    ""timezone"":""" + timezone + @""",
                        " + "\n" +
                      @"    ""isp"":""" + isp + @""",
                        " + "\n" +
                      @"    ""as"":""" + @as + @""",
                        " + "\n" +
                      @"    ""asname"":""" + asname + @""",
                        " + "\n" +
                      @"    ""callingCode"":""" + callingCode + @""",
                        " + "\n" +
                      @"    ""continent"":""" + continent + @""",
                        " + "\n" +
                      @"    ""continentCode"":""" + continentCode + @""",
                        " + "\n" +
                      @"    ""countryCode3"":""" + countryCode3 + @""",
                        " + "\n" +
                      @"    ""currency"":""" + currency + @""",
                        " + "\n" +
                      @"    ""currentTime"":""" + currentTime + @""",
                        " + "\n" +
                      @"    ""district"":""" + district + @""",
                        " + "\n" +
                      @"    ""hosting"":""" + hosting + @""",
                        " + "\n" +
                      @"    ""mobile"":""" + mobile + @""",
                        " + "\n" +
                      @"    ""proxy"":""" + proxy + @""",
                        " + "\n" +
                      @"    ""offset"":""" + offset + @""",
                        " + "\n" +
                      @"    ""reverse"":""" + reverse + @""",
                        " + "\n" +
                      @"    ""status"":""" + status + @""",
                        " + "\n" +
                      @"    ""query"":""" + query + @""",
                        " + "\n" +
                      @"    ""device_id"":""" + device_id + @""",
                        " + "\n" +
                      @"    ""retention"":""" + retention + @""",
                        " + "\n" +
                      @"    ""installerinfo"":""" + installerinfo + @""",
                        " + "\n" +
                      @" ""installerurl"": """ + installerurl + @"""
                        " + "\n" +
                      @"}";

    var request = new UnityWebRequest(avtarurl, "POST");
    // Debug.LogError(jsonData);
    byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonData);
    request.uploadHandler = new UploadHandlerRaw(bodyRaw);
    request.downloadHandler = new DownloadHandlerBuffer();
    request.SetRequestHeader("Content-Type", "application/json");
    yield return request.SendWebRequest();
    JObject jsonObject = JObject.Parse(request.downloadHandler.text);

    string responsh = (string)jsonObject["AppData"];
    Debug.LogWarning("responsh" + responsh);
    //ana pasi code decript thay se
    string decryptedText = Decrypt(responsh, key, iv);
    Debug.LogWarning("decryptedText =>" + decryptedText);
    Debug.Log("33333333");
    //aa decript code paso lav se

    das(decryptedText);
  }

  private void OnGetData(InstallReferrerData data)
  {
    /* InfoBlock.SetActive(data.IsSuccess);
    ErrorBlock.SetActive(!data.IsSuccess); */
    if (data.IsSuccess)
    {
      InstallReferer = data.InstallReferrer;
    }
    else
    {
      // Error.text = string.Format(ErrorFormat, data.Error);
    }
  }
  public static string Decrypt(string cipherText, byte[] key, byte[] iv)
  {
    using (var aes = new AesManaged())
    {
      aes.Key = key;
      aes.IV = iv;

      ICryptoTransform decryptor = aes.CreateDecryptor();

      using (var memoryStream = new MemoryStream(Convert.FromBase64String(cipherText)))
      {
        using (var cryptoStream = new CryptoStream(memoryStream, decryptor, CryptoStreamMode.Read))
        {
          using (var streamReader = new StreamReader(cryptoStream))
          {
            return streamReader.ReadToEnd();
          }
        }
      }
    }
  }


  [System.Serializable]
  public class GoogleConfig
  {
    public GoogleSettings google;
    public AppRemoveFlags app_remove_flags;
    public OtherSettings other_settings;
    public VpnSettings vpn_settings;
    public AdsSettings ads_settings;
  }

  [System.Serializable]
  public class GoogleSettings
  {
    public Google1 google1;
    public Google1 google2;
    public Google1 google3;
  }

  [System.Serializable]
  public class Google1
  {
    public string percentageOne;
    public string google_account_name;
    public string google_banner;
    public string google_inter;
    public string google_native;
    public string google_native2;
    public string google_appOpen;
    public string google_appId;
  }

  [System.Serializable]
  public class Google2
  {
    public string percentageOne;
    public string google_account_name;
    public string google_banner;
    public string google_inter;
    public string google_native;
    public string google_native2;
    public string google_appOpen;
    public string google_appId;
  }


  // Define similar classes for Google2 and Google3

  [System.Serializable]
  public class AppRemoveFlags
  {
    public string flags;
    public int version;
    public string title;
    public string description;
    public string url;
    public string button_name;
    public string skip_button_name;
  }

  [System.Serializable]
  public class OtherSettings
  {
    public string privacyPolicy;
    public string interTimer;
    public string preLoad;
    public string showaAd;
    public string adtype;
    public string appopenshow;
    public string WalletShow;
    public string Winfailads;
    public string Wingetbutton;

    public string WalletUnlockValue;
    public string audiomobAdShowType;
    public string audiomobAdRewad;
    public string audiomobAd;
    public string audioMobtime;
    public string Qureka_ads_status;
    public string qureka;
    public string Game_Redirect;
    public string Close_Button;
    public string Game_Redirect_Title;
    public string Game_Redirect_Msg;
    public string Game_Redirect_ButtonTxt;
    public string Game_Redirect_ButtonURL;
    public string Force_Update;
    public string Force_Update_Version;

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

    public string review_star_setup;
    public string review_desc;
    public string minimumWithdrawal;
    public string transactionMinuteForTransferFeesFlow;
    public string review_reward;
    public string isReviewShow;
    public string review_title;
    public string transferFees;
    public string isTransferFeesFix;
    public string transferFeesAmount, walletData;
    public string transferFeesPercentage;
  }

  [System.Serializable]
  public class VpnSettings
  {
    public string vpn_dialog;
    // Define fields as per your requirements
  }

  [System.Serializable]
  public class AdsSettings
  {
    public AppColor app_color;
    public Native native;
    public Inter inter;
    public AppOpen app_open;
  }

  [System.Serializable]
  public class AppColor
  {
    public string app_color_for_admin;
    public string background_color;
  }

  [System.Serializable]
  public class Native
  {
    public string native_loading;
    public string bottom_banner;
    public string all_screen_native;
    public string list_native;
    public string static_native_count;
    public string exit_dialog_native;
    public string native_button_text;
    public NativeColor native_color;
  }

  [System.Serializable]
  public class NativeColor
  {
    public string background;
    public string text;
    public string button_background;
    public string button_text;
  }

  [System.Serializable]
  public class Inter
  {
    public string inter_interval;
    public string back_click_inter;
    public string inter_loading;
    public string alternate_app;
  }

  [System.Serializable]
  public class AppOpen
  {
    public string splash_ads;
    public string app_open;
    public string app_open_loading;
  }

  public void das(string jsonString)
  {
    // Replace with your actual JSON string

    GoogleConfig googleData = JsonUtility.FromJson<GoogleConfig>(jsonString);

    LoadingScene.instash.PrivacyPolicy = googleData.other_settings.privacyPolicy;
    LoadingScene.instash.InterTimer = googleData.other_settings.interTimer;
    LoadingScene.instash.PreLoad = googleData.other_settings.preLoad;
    LoadingScene.instash.showaAd = googleData.other_settings.showaAd;
    LoadingScene.instash.AppPopUp = googleData.vpn_settings.vpn_dialog;


    AdManager.Instance.WalletCoinConvertValue = googleData.other_settings.WalletCoinConvertValue;
    AdManager.Instance.Buy_Sell_Screen_Message = googleData.other_settings.Buy_Sell_Screen_Message;
    AdManager.Instance.Network_Fee_Information_message = googleData.other_settings.Network_Fee_Information_message;
    AdManager.Instance.UploadData_SheetURI = googleData.other_settings.UploadData_SheetURI;
    AdManager.Instance.Max_Image_Size_MB = googleData.other_settings.Max_Image_Size_MB;
    AdManager.Instance.Big_Size_Image_Error_Message = googleData.other_settings.Big_Size_Image_Error_Message;

    AdManager.Instance.WebviewURL = googleData.other_settings.WebviewURL;
    AdManager.Instance.UPI_WEBVIEW_AMOUNT = googleData.other_settings.UPI_WEBVIEW_AMOUNT;
    AdManager.Instance.transactionMinuteForUPIFlow = googleData.other_settings.transactionMinuteForUPIFlow;
    AdManager.Instance.minimumWithdrawal_UPI_Flow = googleData.other_settings.minimumWithdrawal_UPI_Flow;
    AdManager.Instance.UPI_Wallet_Show = googleData.other_settings.UPI_Wallet_Show;
    AdManager.Instance.Histry_Screen_Note = googleData.other_settings.Histry_Screen_Note;
    AdManager.Instance.Crypto_Wallet_Show = googleData.other_settings.Crypto_Wallet_Show;

    AdManager.Instance.Adtype = googleData.other_settings.adtype;
    AdManager.Instance.appopenshow = googleData.other_settings.appopenshow;
    AdManager.Instance.WalletShow = googleData.other_settings.WalletShow;


    AdManager.Instance.Winfailads = googleData.other_settings.Winfailads;
    AdManager.Instance.Wingetbutton = googleData.other_settings.Wingetbutton;
    AdManager.Instance.AudiomobAd = googleData.other_settings.audiomobAd;
    AdManager.Instance.bottom_banner = googleData.ads_settings.native.bottom_banner;
    AdManager.Instance.audioMobtime = googleData.other_settings.audioMobtime;
    AdManager.Instance.audiomobAdRewad = googleData.other_settings.audiomobAdRewad;
    AdManager.Instance.transferFeesPercentage = googleData.other_settings.transferFeesPercentage;

    AdManager.Instance.qureka = googleData.other_settings.qureka;
    AdManager.Instance.Qureka_ads_status = googleData.other_settings.Qureka_ads_status;
    AdManager.Instance.Game_Redirect = googleData.other_settings.Game_Redirect;
    AdManager.Instance.Force_Update = googleData.other_settings.Force_Update;
    AdManager.Instance.Game_Redirect_ButtonTxt = googleData.other_settings.Game_Redirect_ButtonTxt;
    AdManager.Instance.Game_Redirect_Msg = googleData.other_settings.Game_Redirect_Msg;
    AdManager.Instance.Game_Redirect_Title = googleData.other_settings.Game_Redirect_Title;
    AdManager.Instance.Force_Update_Version = googleData.other_settings.Force_Update_Version;
    AdManager.Instance.Close_Button = googleData.other_settings.Close_Button;
    AdManager.Instance.Game_Redirect_ButtonURL = googleData.other_settings.Game_Redirect_ButtonURL;
    AdManager.Instance.WalletUnlockValue = googleData.other_settings.WalletUnlockValue;
    AdManager.Instance.transactionMinuteForTransferFeesFlow = googleData.other_settings.transactionMinuteForTransferFeesFlow;

    AdManager.Instance.review_star_setup = googleData.other_settings.review_star_setup;
    AdManager.Instance.isReviewShow = googleData.other_settings.isReviewShow;
    AdManager.Instance.review_title = googleData.other_settings.review_title;
    AdManager.Instance.review_reward = googleData.other_settings.review_reward;
    AdManager.Instance.review_desc = googleData.other_settings.review_desc;
    AdManager.Instance.minimumWithdrawal = googleData.other_settings.minimumWithdrawal;
    AdManager.Instance.transferFees = googleData.other_settings.transferFees;
    AdManager.Instance.isTransferFeesFix = googleData.other_settings.isTransferFeesFix;
    AdManager.Instance.transferFeesAmount = googleData.other_settings.transferFeesAmount;
    AdManager.Instance.walletData = googleData.other_settings.walletData;
    AdManager.Instance.AudiomobAdShowType = googleData.other_settings.audiomobAdShowType;
    GoogleAdMob.Instash.GoogleBannerid = googleData.google.google1.google_banner;
    GoogleAdMob.Instash.InterstitialId = googleData.google.google1.google_inter;
    GoogleAdMob.Instash.RewardedId = googleData.google.google1.google_native2;
    GoogleAdMob.Instash.AppOpenId = googleData.google.google1.google_appOpen;
    FBAdManager.Instash.FBBannerID = googleData.google.google2.google_banner;
    FBAdManager.Instash.FBInterID = googleData.google.google2.google_inter;
    FBAdManager.Instash.FBRewadID = googleData.google.google2.google_native2;



    //Set UNity Ids
    UnityManager.Instance._bannerId = googleData.google.google3.google_banner;
    UnityManager.Instance._interstitialId = googleData.google.google3.google_inter;
    UnityManager.Instance._rewardeId = googleData.google.google3.google_native2;

    StartCoroutine(GetData.instance.GetJsonData(AdManager.Instance.walletData));
    //Debug.LogError(FBAdManager.Instash.FBBannerID);
    //Debug.LogError(FBAdManager.Instash.FBInterID);
    //Debug.LogError(FBAdManager.Instash.FBRewadID);
    if (PlayerPrefs.GetInt("callfffff111", 0) == 0)
    {
      calcurrrncy();
    }
    AdManager.Instance.Popup();
    LoadingScene.instash.Setid();
    StartCoroutine(GetData.instance.GetJsonData(AdManager.Instance.walletData));
  }

  private Dictionary<string, (double rate, string symbol)> currencyData = new Dictionary<string, (double, string)>
    {
        { "US", (1.00, "USD") }, // US Dollar (default)
        { "IN", (83.00, "Rs") }, // Indian Rupee
        // Add more currencies and their data as needed
    };

  public (double rate, string symbol) GetCurrencyData(string userCurrencyCode)
  {
    if (currencyData.ContainsKey(userCurrencyCode))
    {
      return currencyData[userCurrencyCode];
    }
    else
    {
      return currencyData["US"];
    }
  }

  private double exchangeRate;
  private string currencySymbol;

  public void calcurrrncy()
  {
    PlayerPrefs.SetInt("callfffff111", 1);

    if (AdManager.Instance.dollarSine == "false")
    {
      (exchangeRate, currencySymbol) = GetCurrencyData(IpAPICall.instash.countryCode);
    }
    else
    {
      (exchangeRate, currencySymbol) = GetCurrencyData("US");
    }

    int aaa = Convert.ToInt32(exchangeRate.ToString());
    PlayerPrefs.SetInt("exchangeRate", aaa);
    PlayerPrefs.SetString("currencySymbol", currencySymbol);
  }


}