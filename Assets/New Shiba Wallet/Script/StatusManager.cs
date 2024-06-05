using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using Firebase.Extensions;

public class StatusManager : MonoBehaviour
{
    public int ID;
    public TextMeshProUGUI TransactionId;
    public TextMeshProUGUI TransactionStatus,transaction_Amount;
    public void setData(int n)
    {
        ID=n;
        TransactionId.text=PlayerPrefs.GetString("UpiTransactionId"+n);
        transaction_Amount.text=PlayerPrefs.GetString("UpiTransactionAmount"+n)+" <sprite name=\"rupee\">";
        Debug.Log(PlayerPrefs.GetString("UpiTransactionDate"+n));
        DateTime oldDateTime = DateTime.Parse(PlayerPrefs.GetString("UpiTransactionDate"+n));
        DateTime newDateTime = DateTime.Now;
        TimeSpan ts = newDateTime - oldDateTime;
        
        if (ts.Minutes > int.Parse(AdManager.Instance.transactionMinuteForUPIFlow))
        {
            PlayerPrefs.SetString("UpiTransactionStatus"+n,"Failed");
            TransactionStatus.text=PlayerPrefs.GetString("UpiTransactionStatus"+n);
            TransactionStatus.color=new Color(0.3764706f,0.003921569f,0.003921569f,1);
            Debug.Log(TransactionStatus.color);
        }
        else
        {
            TransactionStatus.text=PlayerPrefs.GetString("UpiTransactionStatus"+n);
            TransactionStatus.color=new Color(0,0,0,1);
        }
    }
    public void openHistory()
    {
            Debug.LogError(PlayerPrefs.GetString("replacestring_UPI"+ID));
            
            WordNexus_WithdrawManager.instance.HistoryScreen.SetActive(true);
            
            WordNexus_WithdrawManager.instance.Transaction_ID.text = PlayerPrefs.GetString("UpiTransactionId" + ID);
            WordNexus_WithdrawManager.instance.Amount.text = PlayerPrefs.GetString("UpiTransactionAmount" + ID);
            WordNexus_WithdrawManager.instance.statusTxt.text = PlayerPrefs.GetString("UpiTransactionStatus" + ID);
            WordNexus_WithdrawManager.instance.PayBTNHistoryScreen.onClick.RemoveAllListeners();
            WordNexus_WithdrawManager.instance.PayBTNHistoryScreen.onClick.AddListener(()=>WordNexus_WithdrawManager.instance.Pay_now(ID));
            WordNexus_WithdrawManager.instance.note_text.text="<b>*Note :</b> "+AdManager.Instance.Histry_Screen_Note;
            switch (PlayerPrefs.GetString("UpiTransactionStatus" + ID))
            {
                case "Pending":
                    WordNexus_WithdrawManager.instance.statusTxt.color = new Color(0.8666667f, 0.6f, 0.2f, 1);
                    WordNexus_WithdrawManager.instance.descriptionTxt.text = "Awaiting confirmation";
                    break;
                case "Failed":
                    WordNexus_WithdrawManager.instance.statusTxt.color = new Color(0.8666667f, 0.2f, 0.2f, 1);
                    WordNexus_WithdrawManager.instance.descriptionTxt.text = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned";
                    break;
            }
    }
}
