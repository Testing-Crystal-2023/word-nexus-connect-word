using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class WordNexus_PackItemUI : MonoBehaviour
	{
		#region Inspector Variables

		[SerializeField] private Text displayNameText = null;
		[SerializeField] private Transform categoryListContainer = null;
		[SerializeField] private List<Graphic> coloredGraphics = null;

		#endregion

		#region Member Variables

		public System.Action<WordNexus_PackInfo, int> OnCategorySelected;

		#endregion

		#region Public Methods

		public void Setup(WordNexus_PackInfo packInfo, WordNexus_ObjectPool categoryItemPool)
		{
			displayNameText.text = packInfo.packName;

			// Create a category item for each category in the pack
			for (int i = 0; i < packInfo.categoryInfos.Count; i++)
			{
				WordNexus_CategoryInfo categoryInfo = packInfo.categoryInfos[i];
				WordNexus_CategoryItemUI categoryItemUI = categoryItemPool.GetObject<WordNexus_CategoryItemUI>(categoryListContainer);

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
				OnCategorySelected(data as WordNexus_PackInfo, categoryIndex);
			}
		}

		#endregion
	}
}
