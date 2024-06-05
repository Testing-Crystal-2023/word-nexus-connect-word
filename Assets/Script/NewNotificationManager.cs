using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Notifications.iOS;
using UnityEngine;

public class NewNotificationManager : MonoBehaviour
{
    public TextMeshProUGUI status;

    [SerializeField]
    private string transactionChannel = "transaction_channel00",
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
        StartCoroutine(RequestAuthorization());
        iOSNotificationCenter.OnNotificationReceived += OnNotificationReceived;

        transactionChannel = "transaction_channel00";
        dailyRewardsChannel = "daily_rewards_channel11";


        WordNexus_WithdrawManager.instance.sendRepitNotification();

    }

    void OnDestroy()
    {
        // Unsubscribe from the OnNotificationReceived event
        iOSNotificationCenter.OnNotificationReceived -= OnNotificationReceived;
    }

    void OnNotificationReceived(iOSNotification notification)
    {
        // Check if the notification channel matches your transaction channel
        if (notification.Identifier == transactionChannel)
        {
            // Handle the notification interaction here, for example:
            // GameManager.Instance.showNotificationWallet();
        }
    }
    IEnumerator RequestAuthorization()
    {
        // status.text = "RequestAuthorization";
        var authorizationOption = AuthorizationOption.Alert | AuthorizationOption.Badge | AuthorizationOption.Sound;
        using (var req = new AuthorizationRequest(authorizationOption, true))
        {
            while (!req.IsFinished)
            {
                yield return null;
            };

            string res = "\n RequestAuthorization:";
            res += "\n finished: " + req.IsFinished;
            res += "\n granted :  " + req.Granted;
            res += "\n error:  " + req.Error;
            res += "\n deviceToken:  " + req.DeviceToken;
            Debug.Log(res);
            // status.text+= "\n "+res;
        }
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

        //New Ios Code
        // status.text+= "\n SendTransactionNotification Before call Time "+time;
        var notification = new iOSNotification()
        {
            Identifier = transactionChannel,
            Title = "Your Transaction Status Fail!",
            Body = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned",
            ShowInForeground = true,
            ForegroundPresentationOption = PresentationOption.Sound | PresentationOption.Alert,
            CategoryIdentifier = "transaction_category", // Change to your desired category
            ThreadIdentifier = "transaction_thread", // Change to your desired thread identifier
            Trigger = new iOSNotificationTimeIntervalTrigger()
            {
                TimeInterval = new TimeSpan(0, (int)time, 0), // Time interval in seconds
                Repeats = false
            }
        };
        // status.text+= "\n SendTransactionNotification After Time "+time;
        iOSNotificationCenter.ScheduleNotification(notification);
    }
    public void SendFailTransactionNotification_UPI(double time)
    {
        // var notification = new AndroidNotification();
        // notification.Title = "Your Transaction Status Fail!";
        // notification.Text = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned";

        // notification.SmallIcon = "icon_0";
        // notification.LargeIcon = "icon_1";
        // notification.Style = NotificationStyle.BigTextStyle;
        // //notification.ShouldAutoCancel = true;
        // notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
        // notification.ShowInForeground = true;
        // //notification.IntentData = transactionChannel;
        // notification.FireTime = DateTime.Now.AddMinutes(time);
        // Debug.Log("notification.FireTime is " + notification.FireTime);
        // int id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

        // var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);

        // if (notificationStatus == NotificationStatus.Scheduled)
        // {
        //     Debug.Log(NotificationStatus.Scheduled);
        //     // Replace the scheduled notification with a new notification.
        //     AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
        // }
        // else if (notificationStatus == NotificationStatus.Delivered)
        // {
        //     Debug.LogError(NotificationStatus.Delivered + "  NotificationStatus.Delivered");
        //     // Remove the previously shown notification from the status bar.
        //     AndroidNotificationCenter.CancelNotification(id);
        // }
        // else if (notificationStatus == NotificationStatus.Unknown)
        // {
        //     AndroidNotificationCenter.SendNotification(notification, transactionChannel);
        // }

        var notification = new iOSNotification()
        {
            Identifier = transactionChannel,
            Title = "Your Transaction Status Fail!",
            Body = "Your transfer failed since you were not paid the transfer fees for this transaction, and you also missed your rewards since, as we already mentioned",
            ShowInForeground = true,

            ForegroundPresentationOption = PresentationOption.Sound | PresentationOption.Alert,
            CategoryIdentifier = "transaction_category", // Change to your desired category
            ThreadIdentifier = "transaction_thread", // Change to your desired thread identifier
            Trigger = new iOSNotificationTimeIntervalTrigger()
            {
                TimeInterval = new TimeSpan(0, (int)time, 0), // Time interval in seconds
                Repeats = false
            }
        };
        // status.text+= "\n SendTransactionNotification After Time "+time;
        iOSNotificationCenter.ScheduleNotification(notification);
    }

    public void SendTransactionNotification(double time)
    {
        // var notification = new AndroidNotification();
        // notification.Title = transactionTitles[UnityEngine.Random.Range(0, transactionTitles.Length)];
        // notification.Text = transactionDesc[UnityEngine.Random.Range(0, transactionDesc.Length)];

        // notification.SmallIcon = "icon_0";
        // notification.LargeIcon = "icon_1";
        // notification.Style = NotificationStyle.BigTextStyle;
        // //notification.ShouldAutoCancel = true;
        // notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
        // //notification.ShowInForeground = true;
        // //notification.IntentData = transactionChannel;
        // notification.FireTime = DateTime.Now.AddDays(time);

        // int id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

        // var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);


        // if (notificationStatus == NotificationStatus.Scheduled)
        // {
        //     // Replace the scheduled notification with a new notification.
        //     AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
        // }
        // else if (notificationStatus == NotificationStatus.Delivered)
        // {
        //     // Remove the previously shown notification from the status bar.
        //     AndroidNotificationCenter.CancelNotification(id);
        // }
        // else if (notificationStatus == NotificationStatus.Unknown)
        // {
        //     AndroidNotificationCenter.SendNotification(notification, transactionChannel);
        // }

        var notification = new iOSNotification()
        {
            Identifier = transactionChannel,
            Title = transactionTitles[UnityEngine.Random.Range(0, transactionTitles.Length)],
            Body = transactionDesc[UnityEngine.Random.Range(0, transactionDesc.Length)],
            ShowInForeground = true,

            ForegroundPresentationOption = PresentationOption.Sound | PresentationOption.Alert,
            CategoryIdentifier = "transaction_category", // Change to your desired category
            ThreadIdentifier = "transaction_thread", // Change to your desired thread identifier
            Trigger = new iOSNotificationCalendarTrigger()
            {
                Day = (int)time,
                // TimeInterval = new TimeSpan(0, (int)time, 0), // Time interval in seconds
                Repeats = false
            }
        };
        // status.text+= "\n SendTransactionNotification After Time "+time;
        iOSNotificationCenter.ScheduleNotification(notification);
    }

    public void DailyRewards(int time)
    {
        Debug.LogWarning("Comment her efor change");
        SendDailyNotification(time);
    }

    public void SendDailyNotification(int time)
    {
        // var notification = new AndroidNotification();
        // notification.Title = dailyTitles[UnityEngine.Random.Range(0, dailyTitles.Length - 1)];
        // notification.Style = NotificationStyle.BigTextStyle;
        // notification.Text = dailyDescriptions[UnityEngine.Random.Range(0, dailyDescriptions.Length - 1)];
        // notification.SmallIcon = "icon_0";
        // notification.LargeIcon = "icon_2";


        // //notification.ShouldAutoCancel = true;
        // notification.Color = new Color(0.6f, 0.2f, 0.6f, 1);
        // //notification.ShowInForeground= true;
        // notification.IntentData = dailyRewardsChannel;

        // //Fire after 24 hours
        // //notification.FireTime = DateTime.Now.AddHours(time);

        // //Fire after mintes
        // notification.FireTime = DateTime.Now.AddHours(time);

        // //For hours code
        // //notification.RepeatInterval = TimeSpan.FromHours(24);
        // notification.RepeatInterval = TimeSpan.FromHours(24);

        // var id = AndroidNotificationCenter.SendNotification(notification, transactionChannel);

        // var notificationStatus = AndroidNotificationCenter.CheckScheduledNotificationStatus(id);

        // if (notificationStatus == NotificationStatus.Scheduled)
        // {
        //     // Replace the scheduled notification with a new notification.
        //     AndroidNotificationCenter.UpdateScheduledNotification(id, notification, transactionChannel);
        // }
        // else if (notificationStatus == NotificationStatus.Delivered)
        // {
        //     // Remove the previously shown notification from the status bar.
        //     AndroidNotificationCenter.CancelNotification(id);
        // }
        // else if (notificationStatus == NotificationStatus.Unknown)
        // {
        //     AndroidNotificationCenter.SendNotification(notification, transactionChannel);
        // }
        if(iOSNotificationCenter.GetLastRespondedNotification() !=null)
        {
            var notificationStatus = iOSNotificationCenter.GetLastRespondedNotification();

            iOSNotificationCenter.RemoveDeliveredNotification(notificationStatus.Identifier);
        }

         var notification = new iOSNotification()
        {
            Identifier = dailyRewardsChannel,
            Title = dailyTitles[UnityEngine.Random.Range(0, dailyTitles.Length - 1)],
            Body = dailyDescriptions[UnityEngine.Random.Range(0, dailyDescriptions.Length - 1)],
            ShowInForeground = true,
            
            ForegroundPresentationOption = PresentationOption.Sound | PresentationOption.Alert,
            CategoryIdentifier = "dailyrewards_category", // Change to your desired category
            ThreadIdentifier = "dailyrewards_thread", // Change to your desired thread identifier

            Trigger = new iOSNotificationTimeIntervalTrigger()
            {
                TimeInterval = new TimeSpan(time, 0, 0),
                Repeats = false
            }
            // Trigger = new iOSNotificationCalendarTrigger()
            // {
            //     Hour = time,
            //     TimeInterval = new TimeSpan(0, (int)time, 0), // Time interval in seconds
            // }
        };
        // status.text+= "\n SendTransactionNotification After Time "+time;
        iOSNotificationCenter.ScheduleNotification(notification);
    }


    public void CalculateNotifications(int ID)
    {
        UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
        WordNexus_WithdrawManager.instance.sendRepitNotification();

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
