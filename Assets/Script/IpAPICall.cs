using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class IpAPICall : MonoBehaviour
{
    public static IpAPICall instash;
    private string jsonURL;


    public string asname;
    public string @as;
    public string city;
    public string country;
    public string countryCode;
    public string hosting;
    public string isp;
    public string lat;
    public string lon;
    public bool mobile;
    public string org;
    public string proxy;
    public string query;
    public string region;
    public string regionName;
    public string reverse;
    public string status;
    public string timezone;
    public string zip;
    public string continent;
    public string continentCode;
    public string countryCode3;
    public string district;
    public string offset;
    public string currentTime;
    public string currency;
    public string callingCode;


    public void Awake()
    {
        if (instash == null)
        {
            instash = this;
        }

        jsonURL = "https://pro.ip-api.com/json/?fields=536608767&key=bQXY6liHajv8h5q";
        StartCoroutine(getData());
    }


    IEnumerator getData()
    {
        WWW _www = new WWW(jsonURL);
        yield return _www;
        // Debug.Log(_www.error);

        if (_www.error == null)
        {
            Debug.Log("77777777777");
            processJsonData(_www.text);
        }
        else
        {
            StartCoroutine(getData());
        }
    }

    private void processJsonData(string _url)
    {
        jsonDataClass jsonData = JsonUtility.FromJson<jsonDataClass>(_url);


        asname = jsonData.asname;
        @as = jsonData.@as;
        city = jsonData.city;
        country = jsonData.country;
        countryCode = jsonData.countryCode;
        hosting = jsonData.hosting;
        isp = jsonData.isp;
        lat = jsonData.lat;
        lon = jsonData.lon;
        mobile = jsonData.mobile;
        org = jsonData.org;
        proxy = jsonData.proxy;
        query = jsonData.query;
        region = jsonData.region;
        regionName = jsonData.regionName;
        reverse = jsonData.reverse;
        status = jsonData.status;
        timezone = jsonData.timezone;
        zip = jsonData.zip;
        continent = jsonData.continent;
        continentCode = jsonData.continentCode;
        countryCode3 = jsonData.countryCode3;
        district = jsonData.district;
        offset = jsonData.offset;
        currentTime = jsonData.currentTime;
        currency = jsonData.currency;
        callingCode = jsonData.callingCode;
        ApiCalling.Instash.CallApi();
    }
}