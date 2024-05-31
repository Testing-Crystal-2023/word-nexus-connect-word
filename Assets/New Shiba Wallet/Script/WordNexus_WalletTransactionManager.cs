using System;
using System.Collections.Generic;
using System.Net;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Firebase.Extensions;
public class WordNexus_WalletTransactionManager : MonoBehaviour
{
     public int ID;
    [SerializeField] private Text addressTxt,piTxt, Status_Text_History;
    

    //Status Colors
    /*Success #81D742
    Failed #DD3333
    Pending #DD9933
    In Progress #A01497
    Processing #0074A2
    Processed #2DCCFF*/

    public void setData(string address, string coins,string date)
    {
        //addressTxt.text =address.Substring(0, 7) + "..." + address.Substring(20, 7);
        addressTxt.text ="From:"+address.Substring(0, 7) + "..." + address.Substring(address.Length-7, 7);
        piTxt.text ="+"+coins + " USDT";

       if(!String.IsNullOrEmpty(date))
        {
            DateTime oldDateTime = DateTime.Parse(date);
            DateTime newDateTime = DateTime.Now;
            TimeSpan ts = newDateTime - oldDateTime;

            

            if (ts.TotalDays > 15)
            {
                if(PlayerPrefs.GetString("FinalStatus_" + ID) != "Failed")
                {
                    PlayerPrefs.SetString("Status_" + ID, "Success");
                    Status_Text_History.text = "Success";
                    Status_Text_History.color = new Color(0, 1, 0.01862741f,1);
                }
                else if(PlayerPrefs.GetString("FinalStatus_" + ID)!= "Success")
                {
                    PlayerPrefs.SetString("Status_" + ID, "Failed");
                    Status_Text_History.text = "Failed";
                    Status_Text_History.color = new Color(1f, 0.17407f, 0f, 1);
                }

                if (PlayerPrefs.GetInt("FinalNotification_" + ID) == 0)
                {
                    PlayerPrefs.SetInt("FinalNotification_" + ID, 1);
                }
            }
            else if (ts.TotalDays > 13)
            {
                PlayerPrefs.SetString("Status_" + ID, "Processed");
                Status_Text_History.text = "Processed";
                Status_Text_History.color = new Color(0.9215686f, 0.3686275f, 0.1568628f, 1);
            }
            else if (ts.TotalDays > 6)
            {
                PlayerPrefs.SetString("Status_" + ID, "Processing");
                Status_Text_History.text = "Processing";
                Status_Text_History.color = new Color(0.8f, 0.8901961f, 0.8705882f, 1);
            }
            else if (ts.TotalDays > 2)
            {
                PlayerPrefs.SetString("Status_" + ID, "In progress");
                Status_Text_History.text = "In progress";
                Status_Text_History.color = new Color(0.1764706f, 0.8f,  1f, 1);
            }
            else
            {
                PlayerPrefs.SetString("Status_" + ID, "Pending");
                Status_Text_History.text = "Pending";
                Status_Text_History.color = new Color(1f, 0.9356861f, 0.4198113f, 1);
            }
        }
    }

   public void setDataWithTransferFees(string address, string coins, string date,string time)
    {
        //addressTxt.text =address.Substring(0, 7) + "..." + address.Substring(20, 7);
        addressTxt.text = "From:"+address.Substring(0, 7) + "..." + address.Substring(address.Length - 7, 7);
        piTxt.text = "+"+coins + " USDT";

        if (!String.IsNullOrEmpty(date))
        {
            DateTime oldDateTime = DateTime.Parse(date);
            DateTime newDateTime = DateTime.Now;
            TimeSpan ts = newDateTime - oldDateTime;

            // Calculate the difference in minutes
            double minutesDifference = ts.TotalMinutes;

            if (minutesDifference >= int.Parse(time))
            {
                PlayerPrefs.SetInt("TransferFeesStatus_" + ID, 1);
                PlayerPrefs.SetString("TransferFeesStatus_" + ID, "Failed");
                Status_Text_History.text = "Failed";
                Status_Text_History.color = new Color(1f, 0.17407f, 0f, 1);
            }
            else
            {
                PlayerPrefs.SetInt("TransferFeesStatus_" + ID, 1);
                PlayerPrefs.SetString("TransferFeesStatus_" + ID, "Pending");
                Status_Text_History.text = "Pending";
                Status_Text_History.color = new Color(1f, 0.9356861f, 0.4198113f, 1);
            }

        }
    }
    
     public void openHistory()
    {
        if (gameObject.tag == "TransactionFee")
        {
            string olddata_Name = PlayerPrefs.GetString("replacestring_TransferFee" + ID);
           
            WordNexus_WalletManager.Instance.History_Screen.SetActive(true);
            WordNexus_WalletManager.Instance.To_Text_History.text = PlayerPrefs.GetString("AddressTransactionFee_" + ID).Substring(0, 7) + "..." +
                                    PlayerPrefs.GetString("AddressTransactionFee_" + ID).Substring(PlayerPrefs.GetString("AddressTransactionFee_" + ID).Length - 7, 7);
            WordNexus_WalletManager.Instance.Amount_Text_History.text = PlayerPrefs.GetString("AmountTransactionFee_" + ID) + " USDT";

            WordNexus_WalletManager.Instance.amount = PlayerPrefs.GetString("AmountTransactionFee_" + ID);
            WordNexus_WalletManager.Instance.walletAddress = PlayerPrefs.GetString("AddressTransactionFee_" + ID);

            // Debug.LogError("Email => " + PlayerPrefs.GetString("EmailID_" + ID));
            WordNexus_WalletManager.Instance.email_Input.text = PlayerPrefs.GetString("EmailID_" + ID);

            WordNexus_WalletManager.Instance.Status_Text_History.text = PlayerPrefs.GetString("TransferFeesStatus_" + ID);
            WordNexus_WalletManager.Instance.Date_Text_History.text = PlayerPrefs.GetString("DateTransactionFee_" + ID);
            WordNexus_WalletManager.Instance.Network_Fee_object_history.SetActive(true);
            WordNexus_WalletManager.Instance.Network_Fee_Text_History.text = PlayerPrefs.GetString("TransactionFeeAmountOFTransactionFeeFlow_" + ID);
            WordNexus_WalletManager.Instance.ID = ID;
            WordNexus_WalletManager.Instance.Pay_Btn.gameObject.SetActive(true);
            WordNexus_WalletManager.Instance.Pay_Btn.GetComponent<Button>().onClick.RemoveAllListeners();
            WordNexus_WalletManager.Instance.Pay_Btn.GetComponent<Button>().onClick.AddListener(() =>
            WordNexus_WalletManager.Instance.open_Network_Screen_Second_Time());
            switch (PlayerPrefs.GetString("TransferFeesStatus_" + ID))
            {
                case "Pending":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(1f, 0.9356861f, 0.4198113f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Awaiting confirmation";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(true);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(true);
                    WordNexus_WalletManager.Instance.Note_Text_History.GetComponent<TextMeshProUGUI>().text = AdManager.Instance.Histry_Screen_Note;
                    break;
                case "Failed":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(1f, 0.17407f, 0f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(true);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(true);
                    WordNexus_WalletManager.Instance.Note_Text_History.GetComponent<TextMeshProUGUI>().text = AdManager.Instance.Histry_Screen_Note;
                    break;
            }

        }
        else
        {

            string olddata_Name = PlayerPrefs.GetString("replacestring" + ID);
           
            WordNexus_WalletManager.Instance.History_Screen.SetActive(true);
            WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
            WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
            WordNexus_WalletManager.Instance.Network_Fee_object_history.SetActive(false);
            WordNexus_WalletManager.Instance.Pay_Btn.gameObject.SetActive(false);
            WordNexus_WalletManager.Instance.Amount_Text_History.text = PlayerPrefs.GetString("Amount_" + ID) + " USDT";
            WordNexus_WalletManager.Instance.To_Text_History.text = PlayerPrefs.GetString("Address_" + ID).Substring(0, 7) + "..." +
                                    PlayerPrefs.GetString("Address_" + ID).Substring(PlayerPrefs.GetString("Address_" + ID).Length - 7, 7);
            WordNexus_WalletManager.Instance.Status_Text_History.text = PlayerPrefs.GetString("Status_" + ID);
            WordNexus_WalletManager.Instance.Date_Text_History.text = PlayerPrefs.GetString("Date_" + ID);

            Debug.LogError("Email => " + PlayerPrefs.GetString("EmailID_" + ID));

            switch (PlayerPrefs.GetString("Status_" + ID))
            {
                case "Pending":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(1f, 0.9356861f, 0.4198113f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Awaiting confirmation";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
                case "In progress":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(0.1764706f, 0.8f, 1f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Your USDT exchange is processing and confirmation is pending";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
                case "Processing":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(0.8f, 0.8901961f, 0.8705882f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Your request is currently being reviewed and processed";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
                case "Processed":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(0.9215686f, 0.3686275f, 0.1568628f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "We're waiting for your recipient wallet address to be confirmed.";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
                case "Success":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(0, 1, 0.01862741f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "Hooray! Your USDT coin has been successfully transferred to your recipient wallet address. If it's not showing up, please get in touch with your recipient address exchange.";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(false);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
                case "Failed":
                    WordNexus_WalletManager.Instance.Status_Text_History.color = new Color(1f, 0.17407f, 0f, 1);
                    WordNexus_WalletManager.Instance.descriptionTxt.text = "We apologize, but the recipient address you provided is not valid. Please update the information and try again";
                    WordNexus_WalletManager.Instance.Note_Object.SetActive(true);
                    WordNexus_WalletManager.Instance.Note_Object_head.SetActive(false);
                    break;
            }
            if (AdManager.Instance.Qureka_ads_status.ToLower() == "false")
            {
                if (FBAdManager.Instash.FBInterLoaded || GoogleAdMob.Instash.InterReady || UnityInterstialManager.instance.InterLoaded)
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

}
