//using NiobiumStudios;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AppMetEvents : MonoBehaviour
{
    public static AppMetEvents Instance;
    //public placement _placement;
    private Dictionary<string, object> eventParameters = new Dictionary<string, object>();

    public bool isOpenByTransNoti, isOpenByDailyNoti = false;

    private void Awake()
    {
        if(Instance==null)
        {
            Instance = this;
        }
            
    }
    public void FirstTimeUser()
    {
        eventParameters["NewUser_Count"] = 1;
        eventParameters["Device_ID"] = SystemInfo.deviceUniqueIdentifier;
        //eventParameters["FCM_Token"] = FirebaseNotificationController.Instance.tokenID;
        //eventParameters["Total_Coins"] = GlobalValues.Coins;
        eventParameters["Date"] = System.DateTime.Now.ToString("dd/MM/yyyy");
        eventParameters["Time"] = System.DateTime.Now.ToString("hh:mm:ss");
        eventParameters["Game_Version"] = Application.version.ToString();

        //Debug.LogError("----------------- New_Users ------------------");
        //Debug.LogError("NewUser_Count = " + eventParameters["NewUser_Count"]);
        //Debug.LogError("Device_ID = " + eventParameters["Device_ID"]);
        //Debug.LogError("Total_Coins = " + eventParameters["Total_Coins"]);
        //Debug.LogError("Date = " + eventParameters["Date"]);
        //Debug.LogError("Time = " + eventParameters["Time"]);
        //Debug.LogError("Game_Version = " + eventParameters["Game_Version"]);

        AppMetrica.Instance.ReportEvent("New_Users", eventParameters);
        eventParameters.Clear();
    }
    public void ClaimDailyRewards(int dayNo,int dayReward)
    {
        eventParameters["Day_No"] = dayNo;
        eventParameters["Day_Rewards"] = dayReward;
        //eventParameters["Total_Coins"] = GlobalValues.Coins+ DailyRewardsInterface.Instance.currentReward;
        eventParameters["Date"] = System.DateTime.Now.ToString("dd/MM/yyyy");
        eventParameters["Time"] = System.DateTime.Now.ToString("hh:mm:ss");
        eventParameters["Game_Version"] = Application.version.ToString();

        //Debug.LogError("----------------- Daily Reward Events ------------------");
        //Debug.LogError("Day_No = " + eventParameters["Day_No"]);
        //Debug.LogError("Day_Rewards = " + eventParameters["Day_Rewards"]);
        //Debug.LogError("Total_Coins = " + eventParameters["Total_Coins"]);
        //Debug.LogError("Date = " + eventParameters["Date"]);
        //Debug.LogError("Time = " + eventParameters["Time"]);
        //Debug.LogError("Game_Version = " + eventParameters["Game_Version"]);

        AppMetrica.Instance.ReportEvent("Daily_Reward_Tap", eventParameters);
        eventParameters.Clear();
    }
    public void BannerAdsTap()
    {
        eventParameters["Banner_Show"] = true;

        //Debug.LogError("----------------- Banner ads tap ------------------");
        //Debug.LogError("Banner_Show = " + eventParameters["Banner_Show"]);

        AppMetrica.Instance.ReportEvent("Banner_Ad_Tap", eventParameters);
        eventParameters.Clear();
    }
    public void Level_Win(int levelNo, bool isMasterLevel, bool isAddSeconds, bool isDoubleCoin, int rewardCoin, 
                          int levelCoins, int levelTime, bool isRandomIcon,bool isRandomIconClick)
    {
        eventParameters["Level_No"] = levelNo;
        eventParameters["Master_Level"] = isMasterLevel;
        if (isMasterLevel)
            eventParameters["LevelTime_Seconds"] = levelTime;
        eventParameters["Level_Coin"] = levelCoins;
        if(isDoubleCoin)
        {
            eventParameters["Multiplier_Use"] = isDoubleCoin;
            eventParameters["Rewarded_Coin"] = rewardCoin;
        }
        //eventParameters["Total_Coins"] = GlobalValues.Coins+ rewardCoin+ levelCoins;
        eventParameters["Add_More_Seconds"] = isAddSeconds;
        eventParameters["Random_Icon"] = isRandomIcon;
        eventParameters["Random_Is_Click"] = isRandomIconClick;
        eventParameters["Random_Show_Count"] = PlayerPrefs.GetInt("RandomShowCount");
        eventParameters["Random_Icon_Click_Count"] = PlayerPrefs.GetInt("RandomClickCount");
        eventParameters["Time"] = System.DateTime.Now.ToString("hh:mm:ss");
        eventParameters["Game_Version"] = Application.version.ToString();

        //Debug.LogError("----------------- Level_Win Events ------------------");
        //Debug.LogError("Level_No = " + eventParameters["Level_No"]);
        //Debug.LogError("Master_Level = " + eventParameters["Master_Level"]);
        if (isMasterLevel)
            //Debug.LogError("LevelTime_Seconds = " + eventParameters["LevelTime_Seconds"]);
        //Debug.LogError("Level_Coin = " + eventParameters["Level_Coin"]);
        if (isDoubleCoin)
        {
            //Debug.LogError("Multiplier_Use = " + eventParameters["Multiplier_Use"]);
            //Debug.LogError("Rewarded_Coin = " + eventParameters["Rewarded_Coin"]);
        }
        //Debug.LogError("Total_Coins = " + eventParameters["Total_Coins"]);
        //Debug.LogError("Add_More_Seconds = " + eventParameters["Add_More_Seconds"]);
        //Debug.LogError("Random_Icon = " + eventParameters["Random_Icon"]);
        //Debug.LogError("Random_Is_Click = " + eventParameters["Random_Is_Click"]);
        //Debug.LogError("Random_Show_Count = " + eventParameters["Random_Show_Count"]);
        //Debug.LogError("Random_Icon_Click_Count = " + eventParameters["Random_Icon_Click_Count"]);
        //Debug.LogError("Time = " + eventParameters["Time"]);
        //Debug.LogError("Game_Version = " + eventParameters["Game_Version"]);

        AppMetrica.Instance.ReportEvent("Level_Win", eventParameters);
        eventParameters.Clear();
    }
    public void Level_Failed(int levelNo,bool isMasterLevel,bool isRetryPress,bool isSkipLevel,
                             bool isAddSeconds, bool isRandomIcon, bool isRandomIconClick, int levelTime = 0)
    {
        eventParameters["Level_No"] = levelNo;
        eventParameters["Master_Level"] = isMasterLevel;
        if(isMasterLevel)
        {
            eventParameters["LevelTime_Seconds"] = levelTime;
            eventParameters["Add_More_Seconds"] = isAddSeconds;
        }
            
        //eventParameters["Total_Coins"] = GlobalValues.Coins;
        eventParameters["Level_Retry"] = isRetryPress;
        eventParameters["Skip_Level"] = isSkipLevel;
        eventParameters["Random_Icon"] = isRandomIcon;
        eventParameters["Random_Is_Click"] = isRandomIconClick;
        eventParameters["Random_Show_Count"] = PlayerPrefs.GetInt("RandomShowCount");
        eventParameters["Random_Icon_Click_Count"] = PlayerPrefs.GetInt("RandomClickCount");
        eventParameters["Time"] = System.DateTime.Now.ToString("hh:mm:ss");
        eventParameters["Game_Version"] = Application.version.ToString();

        //Debug.LogError("----------------- Level_Failed Events ------------------");
        //Debug.LogError("Level_No = " + eventParameters["Level_No"]);
        //Debug.LogError("Master_Level = " + eventParameters["Master_Level"]);
        if (isMasterLevel)
        {
            //Debug.LogError("LevelTime_Seconds = " + eventParameters["LevelTime_Seconds"]);
            //Debug.LogError("Add_More_Seconds = " + eventParameters["Add_More_Seconds"]);
        }

        //Debug.LogError("Total_Coins = " + eventParameters["Total_Coins"]);
        //Debug.LogError("Level_Retry = " + eventParameters["Level_Retry"]);
        //Debug.LogError("Skip_Level = " + eventParameters["Skip_Level"]);
        //Debug.LogError("Random_Icon = " + eventParameters["Random_Icon"]);
        //Debug.LogError("Random_Is_Click = " + eventParameters["Random_Is_Click"]);
        //Debug.LogError("Random_Show_Count = " + eventParameters["Random_Show_Count"]);
        //Debug.LogError("Random_Icon_Click_Count = " + eventParameters["Random_Icon_Click_Count"]);
        //Debug.LogError("Time = " + eventParameters["Time"]);
        //Debug.LogError("Game_Version = " + eventParameters["Game_Version"]);

        AppMetrica.Instance.ReportEvent("Level_Failed", eventParameters);
        eventParameters.Clear();
    }


    public void Puzzle_Unlock(int puzzleID, int puzzlePieceNo, int puzzleLeft,bool isUnlockByAds)
    {
        eventParameters["Puzzle_ID"] = puzzleID;
        eventParameters["Puzzle_Piece_No"] = puzzlePieceNo;
        eventParameters["Puzzle_Left"] = puzzleLeft;
        if(isUnlockByAds)
            eventParameters["isUnlockByAds"] = isUnlockByAds;

        //Debug.LogError("----------------- Puzzle_Unlock ------------------");
        //Debug.LogError("Puzzle_ID" + " = " + eventParameters["Puzzle_ID"]);
        //Debug.LogError("Puzzle_Piece_No" + " = " + eventParameters["Puzzle_Piece_No"]);
        //Debug.LogError("Puzzle_Piece_Left" + " = " + eventParameters["Puzzle_Left"]);
        if (isUnlockByAds)
            //Debug.LogError("isUnlockByAds" + " = " + eventParameters["isUnlockByAds"]);
        
        AppMetrica.Instance.ReportEvent("Puzzle_Unlock", eventParameters);
        eventParameters.Clear();
    }
    public void Race_Result(int racePosition,int raceReward)
    {
        eventParameters["Player_Rank"] = racePosition;
        eventParameters["Race_Reward"] = raceReward;

        //Debug.LogError("----------------- Race Result ------------------");
        //Debug.LogError("Player_Rank" + " = " + eventParameters["Player_Rank"]);
        //Debug.LogError("Race_Reward" + " = " + eventParameters["Race_Reward"]);
        AppMetrica.Instance.ReportEvent("Race_Result", eventParameters);
        eventParameters.Clear();
    }
    public void PopUpOpenEvent(string type)
    {
        eventParameters[type] = "Open";

        //Debug.LogError("----------------- PopUp_Open ------------------");
        //Debug.LogError(type + " = " + eventParameters[type]);
        AppMetrica.Instance.ReportEvent("PopUp_Open", eventParameters);
        eventParameters.Clear();
    }
    public void BannerAdsTap(string type)
    {
        eventParameters["Banner_Type"] = type;

        //Debug.LogError("----------------- Banner ads tap ------------------");
        //Debug.LogError("Banner_Show = " + eventParameters["Banner_Show"]);

        AppMetrica.Instance.ReportEvent("Banner_Ad_Tap", eventParameters);
        eventParameters.Clear();
    }

    public void ButtonEvent(string type)
    {
        eventParameters[type] = "Click";

        //Debug.LogError("----------------- Button_Click ------------------");
        //Debug.LogError(type + " = " + eventParameters[type]);
        AppMetrica.Instance.ReportEvent("Button_Click", eventParameters);
        eventParameters.Clear();
    }
    public void TransactionEvent(string senderAddress, string recipeintAddress, string piAmt,string date, int transactionNo)
    {
        eventParameters["Sender_Address"] = senderAddress;
        eventParameters["Recipient_Address"] = recipeintAddress;
        eventParameters["PI_Amount"] = piAmt;
        eventParameters["Date"] = date;
        eventParameters["Transaction_No"] = transactionNo;

        //Debug.LogError("----------------- Coin_Transaction ------------------");
        //Debug.LogError("Sender_Address" + " = " + eventParameters["Sender_Address"]);
        //Debug.LogError("Recipient_Address" + " = " + eventParameters["Recipient_Address"]);
        //Debug.LogError("PI_Amount" + " = " + eventParameters["PI_Amount"]);
        //Debug.LogError("Date" + " = " + eventParameters["Date"]);
        //Debug.LogError("Transaction_No" + " = " + eventParameters["Transaction_No"]);
        AppMetrica.Instance.ReportEvent("Coin_Transaction", eventParameters);
        eventParameters.Clear();
    }
    public void WalletToastStatus(string reason)
    {
        eventParameters["StatusReason"] = reason;

        //Debug.LogError("----------------- Wallet_ToastStatus ------------------");
        //Debug.LogError("StatusReason" + " = " + eventParameters["StatusReason"]);
        AppMetrica.Instance.ReportEvent("Wallet_ToastStatus", eventParameters);
        eventParameters.Clear();
    }
    public void HistoryEvent(string senderAddress, string recipeintAddress,string piAmt,string status)
    {
        eventParameters["Sender_Address"] = senderAddress;
        eventParameters["Recipient_Address"] = recipeintAddress;
        eventParameters["PI_Amount"] = piAmt;
        eventParameters["Status"] = status;

        //Debug.LogError("----------------- History_Open ------------------");
        //Debug.LogError("Sender_Address" + " = " + eventParameters["Sender_Address"]);
        //Debug.LogError("Recipient_Address" + " = " + eventParameters["Recipient_Address"]);
        //Debug.LogError("PI_Amount" + " = " + eventParameters["PI_Amount"]);
        //Debug.LogError("Status" + " = " + eventParameters["Status"]);
        AppMetrica.Instance.ReportEvent("History_Open", eventParameters);
        eventParameters.Clear();
    }

    public void VideoAdsStarted(string _placement)
    {
        eventParameters["Placement"] =  _placement;

        //Debug.LogError("----------------- RewardAds_Started ------------------");
        //Debug.LogError("Placement = " + eventParameters["Placement"]);

        AppMetrica.Instance.ReportEvent("RewardAds_Started", eventParameters);
        eventParameters.Clear();
    }

    public void VideoAdsWatch(string _placement)
    {
        eventParameters["Placement"] = _placement;

        //Debug.LogError("----------------- RewardAds_Watch ------------------");
        //Debug.LogError("Placement = " + eventParameters["Placement"]);


        AppMetrica.Instance.ReportEvent("RewardAds_Watch", eventParameters);

        eventParameters.Clear();
    }
    public void InterstitalAdsWatch(string _placement)
    {
        eventParameters["Placement"] = _placement;

        //Debug.LogError("----------------- Interatital_Watch ------------------");
        //Debug.LogError("Placement = " + eventParameters["Placement"]);


        AppMetrica.Instance.ReportEvent("Interatital_Watch", eventParameters);

        eventParameters.Clear();
    }

    public void AppOpenWatch(string _placement)
    {
        eventParameters["Placement"] = _placement;

        //Debug.LogError("----------------- Interatital_Watch ------------------");
        //Debug.LogError("Placement = " + eventParameters["Placement"]);


        AppMetrica.Instance.ReportEvent("AppOpen_Watch", eventParameters);

        eventParameters.Clear();
    }
    public void InterstitalAdsClick(string _placement)
    {
        eventParameters["Placement"] = _placement;

        /*Debug.LogError("----------------- Interatital_Watch ------------------");
        Debug.LogError("Placement = " + eventParameters["Placement"]);*/


        AppMetrica.Instance.ReportEvent("Interatital_Click", eventParameters);

        eventParameters.Clear();
    }
    public void RewardAdsClick(string _placement)
    {
        eventParameters["Placement"] = _placement;

        /*Debug.LogError("----------------- Interatital_Watch ------------------");
        Debug.LogError("Placement = " + eventParameters["Placement"]);*/


        AppMetrica.Instance.ReportEvent("Rewarded_Click", eventParameters);

        eventParameters.Clear();
    }
    public void NotificationOpen(string type)
    {
        eventParameters["Type"] = type;

        //Debug.LogError("----------------- Notification_Open ------------------");
        //Debug.LogError("Placement = " + eventParameters["Placement"]);


        AppMetrica.Instance.ReportEvent("Notification_Open", eventParameters);

        eventParameters.Clear();
    }


}
