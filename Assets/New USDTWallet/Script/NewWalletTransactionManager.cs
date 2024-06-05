using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewWalletTransactionManager : MonoBehaviour
{
    public static NewWalletTransactionManager instance;
    public GameObject HistoryText;
    public GameObject TransactionPre;
    public GameObject Contant;
    void Awake()
    {
        if (instance == null)
            instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        if (PlayerPrefs.HasKey("UpiTransactionDone"))
        {
            HistoryText.SetActive(false);
            CheckTransaction();
        }
        else
        {
            HistoryText.SetActive(true);
        }
    }

    public void CheckTransaction()
    {

        if (PlayerPrefs.HasKey("UpiTransactionDone"))
        {
            for (int i = 0; i < Contant.transform.childCount; i++)
            {
                Destroy(Contant.transform.GetChild(i).gameObject);
            }
            for (int i = 1; i <= PlayerPrefs.GetInt("TotalTransactionData"); i++)
            {
                GameObject pre = Instantiate(TransactionPre, Contant.transform);
                pre.GetComponent<StatusManager>().setData(i);
                pre.gameObject.tag = "MoneyTransactions";
                Debug.Log(pre.tag);
            }
            HistoryText.SetActive(false);
        }
    }
}
