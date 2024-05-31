using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
[Serializable]
public class Data
{
    public string accountName;
    public string type;
    public string address;
    public string image;
}
[Serializable]
public class data1
{
    public List<Data> data;
}
public class GetData : MonoBehaviour
{
    public static GetData instance;
    public data1 data1;
    public void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if(instance == null)
            instance = this;
    }

    public IEnumerator GetJsonData(string jsonURL)
    {
        using (UnityWebRequest request = UnityWebRequest.Get(jsonURL))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log(request.error);
            }
            else
            {
                JsonUtility.FromJsonOverwrite(request.downloadHandler.text, data1);
            }
        }
    }
}
