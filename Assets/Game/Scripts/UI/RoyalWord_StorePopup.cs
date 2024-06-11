using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Game;

// #if DM_IAP
// using UnityEngine.Purchasing;
// using UnityEngine.Purchasing.Extension;
// #endif

namespace Game
{
	public class RoyalWord_StorePopup : RoyalWord_Popup
	{
		#region Member Variables

		private bool areAdsRemoved;

		#endregion

		#region Public Methods

		public override void OnShowing(object[] inData)
		{
			// IAPManager.Instance.OnProductPurchased += OnProductPurchases;
		}

		public override void OnHiding()
		{
			base.OnHiding();

			// IAPManager.Instance.OnProductPurchased -= OnProductPurchases;
		}

		#endregion

	}
}
