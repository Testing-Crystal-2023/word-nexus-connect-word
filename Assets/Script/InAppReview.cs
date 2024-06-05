using System.Collections;
using Game;
using TMPro;
using UnityEngine;
using UnityEngine.iOS;
using UnityEngine.UI;

public class InAppReview : MonoBehaviour
{
    public static InAppReview Instance;
    public GameObject InAppReviewPopup;
    public GameObject[] Stars;
    public Sprite FullstarImage;
    public Sprite BlankstarImage;
    int Count;

    public TextMeshProUGUI InAppReviewTitle;
    public TextMeshProUGUI InAppReviewDesc;
    private void Awake()
    {
        if(Instance==null)
            Instance = this;
    }
    public void StarClick(int Number)
    {
        for(int i=0;i<Stars.Length;i++)
        {
            if(Stars[i].GetComponent<Image>().sprite == FullstarImage)
            {
                Stars[i].GetComponent<Image>().sprite = BlankstarImage;
            }
        }
        for(int i = 0; i < Number; i++)
        {
            Stars[i].GetComponent<Image>().sprite = FullstarImage;
        }
    }

    public void Submit()
    {
        for (int i = 0; i < Stars.Length; i++)
        {
            if (Stars[i].GetComponent<Image>().sprite == FullstarImage)
            {
                Count++;
            }
        }
        //print(Count);
        //print(int.Parse(AdManager.Instance.review_star_setup));
        if (Count >= int.Parse(AdManager.Instance.review_star_setup))
        {
            WordNexus_GameController.Instance.GiveCoins(int.Parse(AdManager.Instance.review_reward));
            //Debug.LogError(GlobalValues.Coins);
            SetReview();
            Count = 0;
            cancel();
        }
        else
        {
        print(Count);
           cancel();
           Count = 0;
        }
    }
    public void cancel()
    {
        InAppReviewPopup.SetActive(false);
    } 
    public void SetReview()
    {
        Device.RequestStoreReview();
        int count = PlayerPrefs.GetInt("ReviewApplyComplete", 0);
        count += 1;
        PlayerPrefs.SetInt("ReviewApplyComplete", count); 
    }

    public void OpenPopup()
    {
        //print("come");
        if (!PlayerPrefs.HasKey("ReviewApplyComplete"))
        {
            InAppReviewPopup.SetActive(true);
            InAppReviewTitle.text = AdManager.Instance.review_title;
            InAppReviewDesc.text = AdManager.Instance.review_desc;
        }
        else
        {

            SetReview();
        }

    }
}
