using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;
using Debug = UnityEngine.Debug;

public class Checker : MonoBehaviour
{
  
    public static Checker instash;
    private static int des = 0;
    private static int rts = 0;


    private void Awake()
    {
        if (instash == null)
        {
            instash = this;
        }
    }

    public void Appcall()
    {
       
    }

    private void Start()
    {
        IsVPNConnected();
    }


    public void call()
    {
        IsVPNConnected();
    }

#if UNITY_ANDROID
    private static AndroidJavaClass javaClass;
#endif

    public static bool IsVPNConnected()
    {
#if UNITY_ANDROID
        if (Application.platform != RuntimePlatform.Android)
        {
            return false;
        }

        if (javaClass == null)
        {
            javaClass = new AndroidJavaClass("com.unity.unityplugin.Checker");
        }

        AndroidJavaObject context =
            new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
        bool isVPNConnected = javaClass.CallStatic<bool>("isVPNConnected", context);

        if (isVPNConnected)
        {
            if (des == 0)
            {
                des = 1;
            }

            AdManager.VapnIsOn = true;
        }
        else
        {
            AdManager.VapnIsOn = false;
        }

        return isVPNConnected;
#else
 Debug.LogWarning("VPN check is supported only on Android.");
        return false;
#endif
    }
}