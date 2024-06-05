using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class WordNexus_NetworkManager : MonoBehaviour
{
    public TextMeshProUGUI AssetName_text,Time_Text_text,Fee_text_text,Icon;
    string _name,_Fees;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Assign_Data(string AssetName ,string Time_Text,string Fee_text)
    {
        Debug.Log(AssetName);
        AssetName_text.text=AssetName;
        Time_Text_text.text="Est. arrival in "+Time_Text+" Minutes";
        Fee_text_text.text="You Payable Network Fee is "+Fee_text;
        _name=AssetName;
        _Fees=Fee_text;
        if(AssetName=="Tron(TRC20)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Tron";
        }
        else if(AssetName=="Ethereum(ERC20)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Ethereum";
        }
        else if(AssetName=="Polygon(MATIC)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Polygon";
        }
        else if(AssetName=="Arbiturm One(ARB)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Arbiturm One";
        }
        else if(AssetName=="Optimism(OP)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Optimism";
        }
        else if(AssetName=="BNB Smart Chain(BEP20)")
        {
            Icon.text="<sprite name=\"USDT\"> fUSDT BNB Smart Chain";
        }
        else if(AssetName=="Avalance C Chain(AVAX CCHAIN)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Avalance C Chain";
        }
        else if(AssetName=="Linea Mainnet(Linea)")
        {
            Icon.text="<sprite name=\"USDT\"> USDT Linea Mainnet";
        }
        else if(AssetName=="zkSync Era Mainnet")
        {
            Icon.text="<sprite name=\"USDT\"> USDT ZkSync Era Mainnet";
        }
    }
    public void Select_Network()
    {
        if(WordNexus_WalletManager.Instance.Secondtime_Open_Screen)
        {
            WordNexus_WalletManager.Instance.Open_Transfer_Details_Screen_Secnd_Time(_name,_Fees);
        }
        else
        {
            WordNexus_WalletManager.Instance.Open_Tranfer_Details_Wallet_Screen_Transfer_fee_True(_name,_Fees);
        }
    }
}
