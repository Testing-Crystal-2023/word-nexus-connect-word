using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class RoyalWord_PackItemUI : MonoBehaviour
	{
		#region Inspector Variables

		[SerializeField] private Text displayNameText = null;
		[SerializeField] private Transform categoryListContainer = null;
		[SerializeField] private List<Graphic> coloredGraphics = null;

		#endregion

		#region Member Variables

		public System.Action<RoyalWord_PackInfo, int> OnCategorySelected;

		#endregion

		#region Public Methods

		public void Setup(RoyalWord_PackInfo packInfo, RoyalWord_ObjectPool categoryItemPool)
		{
			displayNameText.text = packInfo.packName;

			// Create a category item for each category in the pack
			for (int i = 0; i < packInfo.categoryInfos.Count; i++)
			{
				RoyalWord_CategoryInfo categoryInfo = packInfo.categoryInfos[i];
				RoyalWord_CategoryItemUI categoryItemUI = categoryItemPool.GetObject<RoyalWord_CategoryItemUI>(categoryListContainer);

				categoryItemUI.Setup(packInfo, categoryInfo);

				categoryItemUI.Index = i;
				categoryItemUI.Data = packInfo;
				categoryItemUI.OnListItemClicked = OnCategoryListItemClicked;
			}

			// Set the color of all the graphics
			for (int i = 0; i < coloredGraphics.Count; i++)
			{
				coloredGraphics[i].color = packInfo.color;
			}
		}

		#endregion

		#region Private Methods

		private void OnCategoryListItemClicked(int categoryIndex, object data)
		{
			if (OnCategorySelected != null)
			{
				OnCategorySelected(data as RoyalWord_PackInfo, categoryIndex);
			}
		}

		#endregion
	}
}
