using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DOGE_NetworkIconManage : MonoBehaviour
{
    public Text Asset_Text,Name_text;
    public Image Small_Image;
    public Sprite TRC20,ERC20,MATIC,ARB,OP,BEP20,AVAX_CCHAIN,Linea,zkSync_Era_Mainnet;
    public static DOGE_NetworkIconManage instance;
    /// <summary>
    /// Awake is called when the script instance is being loaded.
    /// </summary>
    void Awake()
    {
        if(instance==null)
            instance=this;
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Set()
    {
        if(Asset_Text.text=="Tron(TRC20)")
        {
            Name_text.text="DOGE Tron";
            Small_Image.sprite=TRC20;
        }
        else if(Asset_Text.text=="Ethereum(ERC20)")
        {
            Name_text.text="DOGE Ethereum";
            Small_Image.sprite=ERC20;
        }
        else if(Asset_Text.text=="Polygon(MATIC)")
        {
            Name_text.text="DOGE Polygon";
            Small_Image.sprite=MATIC;
        }
        else if(Asset_Text.text=="Arbiturm One(ARB)")
        {
            Name_text.text="DOGE Arbiturm One";
            Small_Image.sprite=ARB;
        }
        else if(Asset_Text.text=="Optimism(OP)")
        {
            Name_text.text="DOGE Optimism";
            Small_Image.sprite=OP;
        }
        else if(Asset_Text.text=="BNB Smart Chain(BEP20)")
        {
            Name_text.text="fDOGE BNB Smart Chain";
            Small_Image.sprite=BEP20;
        }
        else if(Asset_Text.text=="Avalance C Chain(AVAX CCHAIN)")
        {
            Name_text.text="DOGE Avalance C Chain";
            Small_Image.sprite=AVAX_CCHAIN;
        }
        else if(Asset_Text.text=="Linea Mainnet(Linea)")
        {
            Name_text.text="DOGE Linea Mainnet";
            Small_Image.sprite=Linea;
        }
        else if(Asset_Text.text=="zkSync Era Mainnet")
        {
            Name_text.text="DOGE ZkSync Era Mainnet";
            Small_Image.sprite=zkSync_Era_Mainnet;
        }
    }
}
