using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OneSignalSDK;

namespace Game
{

	public class WordNexus_MainScreen : WordNexus_Screen
	{
		// Start is called before the first frame update
		void Start()
		{
			Debug.Log("USER CONSENT :" + Advertisements.Instance.UserConsentWasSet());
			Invoke("CheckForGDPR", 0.1f);

			// Replace 'YOUR_ONESIGNAL_APP_ID' with your OneSignal App ID from app.onesignal.com
			OneSignal.Default.Initialize("YOUR_ONESIGNAL_APP_ID");

		}




		//GDPR
		void CheckForGDPR()
		{
			if (Advertisements.Instance.UserConsentWasSet() == false)
			{
				WordNexus_Pop_upManager.Instance.ShowNoAd("consent");
			}


		}

		//Popup events
		public void OnUserClickAccept()
		{
			Advertisements.Instance.SetUserConsent(true);

		}

		public void OnUserClickCancel()
		{
			Advertisements.Instance.SetUserConsent(false);

		}
	}

}