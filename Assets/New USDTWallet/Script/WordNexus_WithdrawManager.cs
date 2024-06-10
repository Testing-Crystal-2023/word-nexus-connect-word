using System;
using System.Collections;
using System.Collections.Generic;
using System.Timers;
using EasyUI.Toast;
using JetBrains.Annotations;
using UnityEngine;
using UnityEngine.UI;
using Game;
using System.Linq;
using TMPro;
using Firebase.Extensions;

public class WordNexus_WithdrawManager : MonoBehaviour
{
    public static WordNexus_WithdrawManager instance;

    public TextMeshProUGUI WithdrawAmount, Amount_Text_VerifyPopup, Amount_PayfeePopup;
    public Text DateText, DateText_VerifyPopup, Receipt_Account;
    public GameObject Withdraw, wallet;
    const string glyphs = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string TransactionId;
    public InputField Recipent_Address;
    public string address_re;
    public GameObject VerifyPopup;
    public GameObject PayfeePopup;
    public TextMeshProUGUI availablebalancetxt;
    public Text NoteText_Wallet;
    public InputField withdraw_Amount_Input;
    public GameObject HistoryScreen;
    public TextMeshProUGUI statusTxt, Amount, descriptionTxt, Transaction_ID, note_text;
    public Button PayBTNHistoryScreen;
    public string olddata_Name;
    void Awake()
    {
        if (instance == null)
            instance = this;
    }
    public Button CloseWebview;
    public GameObject BackgroundImage;
    public void Withdraw_Close()
    {
        Recipent_Address.text = "";
    }
    public void wallet_Close()
    {
        wallet.SetActive(false);
        GameManager.Instance.coinTxt.text =RoyalWord_GameController.Instance.Coins.ToString();
        withdraw_Amount_Input.text = "";
    }
    public void History_close()
    {
        HistoryScreen.SetActive(false);
    }
    public void Pay_now(int ID)
    {
        AdManager.Instance.WebviewOpen = true;
        History_close();
        string url = AdManager.Instance.WebviewURL;
        string u = ReplaceMiddle(url, 'A', 'M', AdManager.Instance.UPI_WEBVIEW_AMOUNT);
        StartCoroutine(SampleWebView.instance.a(u));
        CloseWebview.gameObject.SetActive(true);
        BackgroundImage.SetActive(true);
        CloseWebview.GetComponent<Button>().onClick.AddListener(() => closeWebview());

        PlayerPrefs.SetString("UpiTransactionStatus" + ID, "Pending");
        PlayerPrefs.SetString("UpiTransactionDate" + ID, System.DateTime.Now.ToString());
        PlayerPrefs.SetString("TransactionMinuteUPI_" + ID, AdManager.Instance.transactionMinuteForUPIFlow.ToString());
        NewWalletTransactionManager.instance.CheckTransaction();

    }
    public void closeWebview()
    {
        var g = GameObject.Find("WebViewObject");
        // Debug.LogError("wbviewobject find to destroy is "+g.name);
        CloseWebview.gameObject.SetActive(false);
        BackgroundImage.SetActive(false);
        Destroy(g);
    }
    string ReplaceMiddle(string original, char startChar, char endChar, string newValue)
    {
        int startIndex = original.IndexOf(startChar) + 1;
        int endIndex = original.IndexOf(endChar);
        string prefix = original.Substring(0, startIndex);
        string middle = newValue;
        string suffix = original.Substring(endIndex);
        return prefix + middle + suffix;
    }
    public void LaunchSelectedUPIApp_Package()
    {
        AdManager.Instance.WebviewOpen = true;
        string url = AdManager.Instance.WebviewURL;
        string u = ReplaceMiddle(url, 'A', 'M', AdManager.Instance.UPI_WEBVIEW_AMOUNT);
        StartCoroutine(SampleWebView.instance.a(u));
        CloseWebview.gameObject.SetActive(true);
        BackgroundImage.SetActive(true);
        CloseWebview.GetComponent<Button>().onClick.AddListener(() => closeWebview());

        SetTransaction();
    }

    public void WalletShow()
    {
        if (AdManager.Instance.WalletShow.ToLower() == "true" && AdManager.Instance.UPI_Wallet_Show.ToLower() == "true")
        {
            wallet.SetActive(true);
            NoteText_Wallet.text = "Only if your withdrawal amount is more than " + AdManager.Instance.minimumWithdrawal_UPI_Flow + " you can withdraw otherwise not allowed";
            availablebalancetxt.text = RoyalWord_GameController.Instance.Coins + " <sprite name=\"Paisa\">";
            NewWalletTransactionManager.instance.CheckTransaction();
            withdraw_Amount_Input.text = "";
        }
    }
    public void withdraw_Popup_Open()
    {
        if (withdraw_Amount_Input.text == "")
        {
            Toast.Show("Please Enter Withdraw Amount");
        }
        else if (int.Parse(withdraw_Amount_Input.text) > RoyalWord_GameController.Instance.Coins)
        {
            Toast.Show("Insufficient coins in your wallet to initiate the transfer. Please collect more coins to proceed.", 4);
        }
        else if (int.Parse(withdraw_Amount_Input.text) < int.Parse(AdManager.Instance.minimumWithdrawal_UPI_Flow))
        {
            Toast.Show("The transfer amount must be over " + AdManager.Instance.minimumWithdrawal_UPI_Flow + " coins. Please update your amount and try again", 4);
        }
        else if (int.Parse(withdraw_Amount_Input.text) <= RoyalWord_GameController.Instance.Coins)
        {
            Withdraw.SetActive(true);
            // Debug.Log(WithdrawAmount.text);
            // Debug.Log(WordNexus_GameController.Instance.Coins);
            WithdrawAmount.text = "<sprite name=\"Ru\"> " + withdraw_Amount_Input.text;
            DateText.text = System.DateTime.Now.ToString();
            address_re = "";
            Recipent_Address.text = "";
            int a = PlayerPrefs.GetInt("TotalTransactionData");
            PlayerPrefs.SetInt("Firebase_UPI_ID" + a, a);
            string replacestring = withdraw_Amount_Input.text + "_UPI_" + a;
            olddata_Name = replacestring;



        }
    }
    public void submit_Wallet_btn()
    {
        if (Recipent_Address.text != "")
        {
            address_re = Recipent_Address.text;
            VerifyPopup.SetActive(true);
            VerifyPopup_Fill();
            Withdraw.SetActive(false);

        }
        else
        {
            Toast.Show("Please Check Your Recipent Address", 4);
        }
    }
    public void VerifyPopup_Fill()
    {
        DateText_VerifyPopup.text = DateText.text;
        Receipt_Account.text = address_re;
        Amount_Text_VerifyPopup.text = "<sprite name=\"Ru\"> " + withdraw_Amount_Input.text;
    }
    public void SubmitVerifyPopup()
    {
        PayfeePopup.SetActive(true);
        VerifyPopup.SetActive(false);
        PayfeePopup_open();


    }
    public void verify_close()
    {
        VerifyPopup.SetActive(false);

        Withdraw.SetActive(true);
    }

    public void Payfee_close()
    {
        PayfeePopup.SetActive(false);
        VerifyPopup.SetActive(true);
        Amount_Text_VerifyPopup.text = "<sprite name=\"Ru\"> " + withdraw_Amount_Input.text;
    }
    void PayfeePopup_open()
    {
        Amount_PayfeePopup.text = "<sprite name=\"Ru\"> " + withdraw_Amount_Input.text;

    }
    public void SetTransaction()
    {
        PlayerPrefs.SetInt("TotalTransactionData", PlayerPrefs.GetInt("TotalTransactionData", 0) + 1);
        int a = PlayerPrefs.GetInt("TotalTransactionData");
        for (int i = 0; i < 27; i++)
        {
            TransactionId += glyphs[UnityEngine.Random.Range(0, glyphs.Length)];
        }
        PlayerPrefs.SetString("UpiTransactionDone", "true");
        PlayerPrefs.SetString("UpiTransactionId" + a, TransactionId);
        PlayerPrefs.SetString("UpiTransactionStatus" + a, "Pending");
        PlayerPrefs.SetString("UpiTransactionAmount" + a, withdraw_Amount_Input.text);
        PlayerPrefs.SetString("UpiTransactionDate" + a, System.DateTime.Now.ToString());
        PlayerPrefs.SetString("TransactionMinuteUPI_" + a, AdManager.Instance.transactionMinuteForUPIFlow.ToString());
        PlayerPrefs.SetString("UPIWEbviewAmount" + a, AdManager.Instance.UPI_WEBVIEW_AMOUNT);

        PlayerPrefs.SetString("replacestring_UPI" + a, olddata_Name);
        GameManager.Instance.coinTxt.text = RoyalWord_GameController.Instance.Coins.ToString();
        Amount_PayfeePopup.text = "<sprite name=\"Ru\"> " + RoyalWord_GameController.Instance.Coins.ToString();

        TransactionId = "";

            RoyalWord_GameController.Instance.SpendCoins(int.Parse(withdraw_Amount_Input.text));
        GameManager.Instance.coinTxt.text = RoyalWord_GameController.Instance.Coins.ToString();
        PayfeePopup.SetActive(false);
        NewWalletTransactionManager.instance.CheckTransaction();
        NewNotificationManager.Instance.SendFailTransactionNotification_UPI(int.Parse(AdManager.Instance.transactionMinuteForUPIFlow));
        withdraw_Amount_Input.text = "";
        availablebalancetxt.text = RoyalWord_GameController.Instance.Coins + " <sprite name=\"Paisa\">";
    }
    public void sendRepitNotification()
    {
        for (int i = 1; i <= PlayerPrefs.GetInt("TotalTransactionData"); i++)
        {
            DateTime oldDateTime = DateTime.Parse(PlayerPrefs.GetString("UpiTransactionDate" + i));
            DateTime newDateTime = DateTime.Now;
            TimeSpan ts = newDateTime - oldDateTime;

            // Debug.Log(ts.TotalMinutes +" ==ts");
            double a = int.Parse(AdManager.Instance.transactionMinuteForUPIFlow) - ts.TotalMinutes;
            if (a > 0)
            {
                // Debug.Log(a +" ==a");
                NewNotificationManager.Instance.SendFailTransactionNotification_UPI(a);
            }
        }

    }
}
