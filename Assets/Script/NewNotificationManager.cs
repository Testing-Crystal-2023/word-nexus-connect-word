using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Notifications.Android;
using UnityEngine;
using UnityEngine.Android;

public class NewNotificationManager : MonoBehaviour
{
    public TextMeshProUGUI status;

    [SerializeField] private string transactionChannel= "transaction_channel00", 
                                    dailyRewardsChannel = "daily_rewards_channel11";

    [SerializeField] private string[] dailyTitles, dailyDescriptions, transactionTitles, transactionDesc;

    public static NewNotificationManager Instance;

    #region Old Notification
    void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    void Start()
    {
        if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
        {
            Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
        }

        var notificationIntentData = AndroidNotificationCenter.GetLastNotificationIntent();
        if (notificationIntentData != null)
        {
            var id = notificationIntentData.Id;
            var channel = notificationIntentData.Channel;
            var notification = notificationIntentData.Notification;

            if (channel == transactionChannel && !AppMetEvents.Instance.isOpenByTransNoti)
            {
                AppMetEvents.Instance.isOpenByTransNoti = true;
                AppMetEvents.Instance.NotificationOpen("Transaction");
                // GameManager.Instance.showNotificationWallet();
            }
            else if(channel == dailyRewardsChannel && !AppMetEvents.Instance.isOpenByDailyNoti)
            {
                AppMetEvents.Instance.isOpenByDailyNoti = true;
                AppMetEvents.Instance.NotificationOpen("Daily Rewards");
            }
        }

        transactionChannel = "transaction_channel00";
        dailyRewardsChannel = "daily_rewards_channel11";

        AndroidNotificationCenter.CancelAllDisplayedNotifications();
        DOGE_WithdrawManager.instance.sendRepitNotification();
        var channel1 = new AndroidNotificationChannel()
        {
            Id = transactionChannel,
            Name = "Transaction Status",
            Importance = Importance.Default,
            EnableVibration= true,
            EnableLights= true,
            Description = "Transaction Status Notifications",
        };


        var channel2 = new AndroidNotificationChannel()
        {
            Id = dailyRewardsChannel,
            Name = "Daily Rewards",
            EnableVibration = true,
            EnableLights = true,
            Importance = Importance.Default,
            Description = "Daily Rewards Notifications",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel1);
        AndroidNotificationCenter.RegisterNotificationChannel(channel2);

        // GameManager.Instance.CheckTransaction();
    }


    public void transaStatus()
    {
        TransactionStatus(10);
    }

    public void TransactionStatus(double time)
    {
        SendTransactionNotification(time);
    }
 public void SendFailTransactionNotification(double time)
 {
     var notification = new AndroidNotification();
     notification.Title = "Your Transaction Status Fail!";
     notification.Text = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned";

     notification.SmallIcon = "icon_0";
     notification.LargeIcon = "icon_1";
     notification.Style = NotificationStyle.BigTextStyle;
     //notification.ShouldAutoCancel = true;
     notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
     notification.ShowInForeground = true;
     //notification.IntentData = transactionChannel;
     notification.FireTime = DateTime.Now.AddMinutes(time);
     Debug.Log("notification.FireTime is "+notification.FireTime);
     int id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

     var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);


     if (notificationStatus == NotificationStatus.Scheduled)
     {
         Debug.Log(NotificationStatus.Scheduled);
         // Replace the scheduled notification with a new notification.
         AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
     }
     else if (notificationStatus == NotificationStatus.Delivered)
     {
         // Remove the previously shown notification from the status bar.
         AndroidNotificationCenter.CancelNotification(id);
     }
     else if (notificationStatus == NotificationStatus.Unknown)
     {
         AndroidNotificationCenter.SendNotification(notification, transactionChannel);
     }
 }
 public void SendFailTransactionNotification_UPI(double time)
 {
     var notification = new AndroidNotification();
     notification.Title = "Your Transaction Status Fail!";
     notification.Text = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned";

     notification.SmallIcon = "icon_0";
     notification.LargeIcon = "icon_1";
     notification.Style = NotificationStyle.BigTextStyle;
     //notification.ShouldAutoCancel = true;
     notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
     notification.ShowInForeground = true;
     //notification.IntentData = transactionChannel;
     notification.FireTime = DateTime.Now.AddMinutes(time);
     Debug.Log("notification.FireTime is "+notification.FireTime);
     int id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

     var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);

     if (notificationStatus == NotificationStatus.Scheduled)
     {
         Debug.Log(NotificationStatus.Scheduled);
         // Replace the scheduled notification with a new notification.
         AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
     }
     else if (notificationStatus == NotificationStatus.Delivered)
     {
        Debug.LogError(NotificationStatus.Delivered+"  NotificationStatus.Delivered");
         // Remove the previously shown notification from the status bar.
         AndroidNotificationCenter.CancelNotification(id);
     }
     else if (notificationStatus == NotificationStatus.Unknown)
     {
         AndroidNotificationCenter.SendNotification(notification, transactionChannel);
     }
 }

    public void SendTransactionNotification(double time)
    {
        var notification = new AndroidNotification();
        notification.Title = transactionTitles[UnityEngine.Random.Range(0, transactionTitles.Length)];
        notification.Text = transactionDesc[UnityEngine.Random.Range(0, transactionDesc.Length)];

        notification.SmallIcon = "icon_0";
        notification.LargeIcon = "icon_1";
        notification.Style = NotificationStyle.BigTextStyle;
        //notification.ShouldAutoCancel = true;
        notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
        //notification.ShowInForeground = true;
        //notification.IntentData = transactionChannel;
        notification.FireTime = DateTime.Now.AddDays(time);

        int id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

        var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);


        if (notificationStatus == NotificationStatus.Scheduled)
        {
            // Replace the scheduled notification with a new notification.
            AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
        }
        else if (notificationStatus == NotificationStatus.Delivered)
        {
            // Remove the previously shown notification from the status bar.
            AndroidNotificationCenter.CancelNotification(id);
        }
        else if (notificationStatus == NotificationStatus.Unknown)
        {
            AndroidNotificationCenter.SendNotification(notification, transactionChannel);
        }
    }

    public void DailyRewards(double time)
    {
        Debug.LogWarning("Comment her efor change");
        SendDailyNotification(time);
    }

    public void SendDailyNotification(double time)
    {
        var notification = new AndroidNotification();
        notification.Title = dailyTitles[UnityEngine.Random.Range(0, dailyTitles.Length - 1)];
        notification.Style = NotificationStyle.BigTextStyle;
        notification.Text = dailyDescriptions[UnityEngine.Random.Range(0, dailyDescriptions.Length - 1)];
        notification.SmallIcon = "icon_0";
        notification.LargeIcon = "icon_2";
        

        //notification.ShouldAutoCancel = true;
        notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
        //notification.ShowInForeground= true;
        notification.IntentData = dailyRewardsChannel;

        //Fire after 24 hours
        //notification.FireTime = DateTime.Now.AddHours(time);

        //Fire after mintes
        notification.FireTime = DateTime.Now.AddHours(time);

        //For hours code
        //notification.RepeatInterval = TimeSpan.FromHours(24);
        notification.RepeatInterval = TimeSpan.FromHours(24);

        var id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

        var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);

        if (notificationStatus == NotificationStatus.Scheduled)
        {
            // Replace the scheduled notification with a new notification.
            AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
        }
        else if (notificationStatus == NotificationStatus.Delivered)
        {
            // Remove the previously shown notification from the status bar.
            AndroidNotificationCenter.CancelNotification(id);
        }
        else if (notificationStatus == NotificationStatus.Unknown)
        {
            AndroidNotificationCenter.SendNotification(notification, transactionChannel);
        }
    }


    public void CalculateNotifications(int ID)
    {
        AndroidNotificationCenter.CancelAllNotifications();
        DOGE_WithdrawManager.instance.sendRepitNotification();

        if (!String.IsNullOrEmpty(PlayerPrefs.GetString("Date_" + ID)))
        {
            DateTime oldDateTime = DateTime.Parse(PlayerPrefs.GetString("Date_" + ID));
            DateTime newDateTime = DateTime.Now;
            TimeSpan ts = newDateTime - oldDateTime;


            double tempTime = 0;

            tempTime = 15 - ts.TotalDays;
            if (tempTime > 0)
            {
                TransactionStatus(tempTime);
            }


            tempTime = 13 - ts.TotalDays;
            if (tempTime > 0)
            {
                TransactionStatus(tempTime);
            }

            tempTime = 6 - ts.TotalDays;
            if (tempTime > 0)
            {
                TransactionStatus(tempTime);
            }

            tempTime = 2 - ts.TotalDays;
            if (tempTime > 0)
            {
                TransactionStatus(tempTime);
            }
        }
    }

    #endregion


}
