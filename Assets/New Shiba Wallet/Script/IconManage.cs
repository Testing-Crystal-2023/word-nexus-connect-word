using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine;

public class IconManage : MonoBehaviour
{
    public Sprite cash;
    public Sprite crypto;
    public Image[] coin;
    public Sprite Coin_Simple;
    // Start is called before the first frame update
    void Start()
    {

        if(AdManager.Instance.Crypto_Wallet_Show.ToString()=="true"&&AdManager.Instance.WalletShow.ToString()=="true")
        {
            for(int i=0;i<coin.Length;i++)
            {
                coin[i].sprite=crypto;
            }
        }
        else if(AdManager.Instance.UPI_Wallet_Show.ToString()=="true"&&AdManager.Instance.WalletShow.ToString()=="true")
        {
            for(int i=0;i<coin.Length;i++)
            {
                coin[i].sprite=cash;
            }
        }
        else 
        {
            for(int i=0;i<coin.Length;i++)
            {
                coin[i].sprite=Coin_Simple;
            }
        }
    }
}
