using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class InternetCheking : MonoBehaviour
{
    private float checkInterval = 1.5f;

    public GameObject Internetpopup;

    private bool demos = true;

    // Start is called before the first frame update

    private void Awake()
    {
        DontDestroyOnLoad(this.gameObject);
    }

    void Start()
    {
        if (demos)
        {
            StartCoroutine(CheckInternetConnection());
        }
    }


    private System.Collections.IEnumerator CheckInternetConnection()
    {
        if (demos)
        {
            while (demos)
            {
                yield return new WaitForSeconds(checkInterval);

                switch (Application.internetReachability)
                {
                    case NetworkReachability.NotReachable:
                        //  id.text = "No internet connection";
                        if (demos)
                        {
                            Internetpopup.SetActive(true);
                            demos = false;
                            LoadingScene.instash.Internet = false;
                        }

                        // Debug.Log("No internet connection");
                        break;

                    case NetworkReachability.ReachableViaCarrierDataNetwork:
                        //id.text = "Connected via cellular data";
                        // Debug.Log("Connected via cellular data");
                        break;

                    case NetworkReachability.ReachableViaLocalAreaNetwork:
                        // id.text = "Connected via Wi-Fi or Ethernet";
                        //Debug.Log("Connected via Wi-Fi or Ethernet");
                        break;
                }
            }
        }
    }

    public void NotIKnternet()
    {
        Internetpopup.SetActive(false);
        SceneManager.LoadScene(0);
        demos = true;
    }

    // Update is called once per frame
    void Update()
    {
    }
}