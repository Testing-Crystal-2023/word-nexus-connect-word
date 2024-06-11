using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class RoyalWord_CategoryItemUI : RoyalWord_ClickableListItem
	{
		#region Inspector Variables

		[SerializeField] private Text categoryNameText = null;
		[SerializeField] private Text numberOfLevelsText = null;
		[SerializeField] private GameObject playIcon = null;
		[SerializeField] private GameObject lockedIcon = null;
		[SerializeField] private GameObject completedIcon = null;
		[SerializeField] private List<Graphic> coloredGraphics = null;

		#endregion

		#region Public Methods

		public void Setup(RoyalWord_PackInfo packInfo, RoyalWord_CategoryInfo categoryInfo)
		{
			// Set the name of the category
			categoryNameText.text = categoryInfo.displayName;

			// Set the amount of levels in the category
			if (categoryInfo.LevelDatas.Count > 0)
			{
				int firstLevelNumber = categoryInfo.LevelDatas[0].GameLevelNumber;
				int lastLevelNumber = categoryInfo.LevelDatas[categoryInfo.LevelDatas.Count - 1].GameLevelNumber;

				numberOfLevelsText.text = string.Format("Levels {0} - {1}", firstLevelNumber, lastLevelNumber);
			}
			else
			{
				numberOfLevelsText.text = "THERE ARE NO LEVELS IN THIS CATEGORY!";
			}

			bool isCategoryLocked = RoyalWord_GameController.Instance.IsCategoryLocked(categoryInfo);
			bool isCategoryCompleted = RoyalWord_GameController.Instance.IsCategoryCompleted(categoryInfo);

			// Set the visibility of the icons
			playIcon.SetActive(!isCategoryCompleted && !isCategoryLocked);
			lockedIcon.SetActive(isCategoryLocked);
			completedIcon.SetActive(isCategoryCompleted);

			// If it's locked disable the button
			UIButton.interactable = !isCategoryLocked;

			// Set the color of all the graphics
			for (int i = 0; i < coloredGraphics.Count; i++)
			{
				coloredGraphics[i].color = packInfo.color;
			}
		}

		#endregion
	}
}
