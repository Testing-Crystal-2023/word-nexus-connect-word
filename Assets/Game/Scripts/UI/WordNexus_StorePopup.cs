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
	public class WordNexus_StorePopup : WordNexus_Popup
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

		#region Private Methods

		// private void OnProductPurchases(string productId)
		// {
		// 	Hide(false);

		// 	// WordNexus_Pop_upManager.Instance.Show("product_purchased");
		// }

		#endregion
	}
}
