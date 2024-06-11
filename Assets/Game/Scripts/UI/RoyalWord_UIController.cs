using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using Game;

namespace Game
{
	public class RoyalWord_UIController : RoyalWord_SingletonComponent<RoyalWord_UIController>
	{
		#region Inspector Variables

		[SerializeField] private Text gamePointsText = null;
		[SerializeField] private GameObject playButton = null;
		[SerializeField] private Text playButtonText = null;
		[SerializeField] private Image backgroundImage = null;
		[SerializeField] private Sprite mainBackgroundSprite = null;
		[SerializeField] private float backgroundFadeDuration = 0.35f;
		[Space]
		[SerializeField] private RoyalWord_PackItemUI packItemUIPrefab = null;
		[SerializeField] private RoyalWord_CategoryItemUI categoryItemUI = null;
		[SerializeField] private Transform packListContainer = null;
		[Space]
		[SerializeField] private RoyalWord_LevelItemUI levelItemUIPrefab = null;
		[SerializeField] private Transform levelListContainer = null;
		[Space]
		[SerializeField] private Text coinsPerHintText = null;
		[SerializeField] private Text coinsPerMultiHintText = null;
		[SerializeField] private Text coinsPerTargetHintText = null;
		[Space]
		[SerializeField] private Color hintSelectIconNormalColor = Color.white;
		[SerializeField] private Color hintSelectIconActiveColor = Color.white;
		[SerializeField] private Image hintSelectIcon = null;
		[SerializeField] private GameObject hintSelectOverlay = null;
		[Space]
		[SerializeField] private GameObject topBarBackButton = null;
		[SerializeField] private Text topBarPackText = null;
		[SerializeField] private Text topBarCategoryText = null;
		[SerializeField] private Text topBarLevelText = null;
		[SerializeField] private float topBarAnimDuration = 0.35f;

		#endregion

		#region Member Variables

		private RoyalWord_ObjectPool packItemUIPool;
		private RoyalWord_ObjectPool categoryItemUIPool;
		private RoyalWord_ObjectPool levelItemUIPool;

		private RoyalWord_PackInfo selectedPackInfo;
		private RoyalWord_CategoryInfo selectedCategoryInfo;

		private Image backgroundCopy;

		#endregion

		#region Unity Methods

		private void Start()
		{
			packItemUIPool = new RoyalWord_ObjectPool(packItemUIPrefab.gameObject, 1, RoyalWord_ObjectPool.CreatePoolContainer(transform, "pack_item_pool_container"));
			categoryItemUIPool = new RoyalWord_ObjectPool(categoryItemUI.gameObject, 1, RoyalWord_ObjectPool.CreatePoolContainer(transform, "category_item_pool_container"));
			levelItemUIPool = new RoyalWord_ObjectPool(levelItemUIPrefab.gameObject, 1, RoyalWord_ObjectPool.CreatePoolContainer(transform, "level_item_pool_container"));

			// Check if there is a current active level
			if (RoyalWord_GameController.Instance.CurrentActiveLevel != null)
			{
				// Set the selected pack and category
				selectedPackInfo = RoyalWord_GameController.Instance.CurrentActiveLevel.packInfo;
				selectedCategoryInfo = RoyalWord_GameController.Instance.CurrentActiveLevel.categoryInfo;
			}

			gamePointsText.text = RoyalWord_GameController.Instance.GamePoints.ToString();
			coinsPerHintText.text = RoyalWord_GameController.Instance.CoinCostPerHint.ToString();
			coinsPerMultiHintText.text = RoyalWord_GameController.Instance.CoinCostPerMultiHint.ToString();
			coinsPerTargetHintText.text = RoyalWord_GameController.Instance.CoinCostPerTargetHint.ToString();

			UpdateUI();

			// Remove the play button if all the levels have been completed
			playButton.SetActive(true);

			RoyalWord_ScreenManager.Instance.OnShowingScreen += OnScreenShowing;
			RoyalWord_ScreenManager.Instance.OnSwitchingScreens += OnSwitchingScreens;
		}

		#endregion

		#region Public Methods

		public void UpdateUI()
		{
				playButtonText.text = string.Format("Level {0}", RoyalWord_GameController.Instance.LastCompletedLevelNumber + 1);

			UpdatePackListItems();
			UpdateLevelListItems();
		}

		public void OnNewLevelStarted()
		{
			// Set the selected pack and category to the level that is currently being played so when the level screen is show it shows the correct levels
			selectedPackInfo = RoyalWord_GameController.Instance.CurrentActiveLevel.packInfo;
			selectedCategoryInfo = RoyalWord_GameController.Instance.CurrentActiveLevel.categoryInfo;

			// Set the new level text on the top bar
			topBarLevelText.text = string.Format("Level {0}", RoyalWord_GameController.Instance.LastCompletedLevelNumber + 1);

			// Make sure the correct background is being displayed
			SetBackground(selectedPackInfo.background);

			UpdateUI();
		}

		/// <summary>
		/// Invoked when the play button one the main screen is clicked
		/// </summary>
		public void OnMainScreenPlayClicked()
		{
			RoyalWord_GameController.Instance.StartLevel(RoyalWord_GameController.Instance.LastCompletedLevelNumber + 1);

			RoyalWord_ScreenManager.Instance.Show("game");
		}

		public void UpdatePlayerSelectingHint()
		{
			bool isSelecting = RoyalWord_GameController.Instance.PlayerSelectingHint;

			hintSelectIcon.color = isSelecting ? hintSelectIconActiveColor : hintSelectIconNormalColor;

			hintSelectOverlay.SetActive(isSelecting);
		}

		#endregion

		#region Private Methods

		/// <summary>
		/// Creates the pack list
		/// </summary>
		private void UpdatePackListItems()
		{
			// Clear the pack list of all items
			packItemUIPool.ReturnAllObjectsToPool();
			categoryItemUIPool.ReturnAllObjectsToPool();

			// Create a new PackItemUI for each pack info in the GameController
			for (int i = 0; i < RoyalWord_GameController.Instance.PackInfos.Count; i++)
			{
				RoyalWord_PackInfo packInfo = RoyalWord_GameController.Instance.PackInfos[i];
				RoyalWord_PackItemUI packItemUI = packItemUIPool.GetObject<RoyalWord_PackItemUI>(packListContainer);

				packItemUI.Setup(packInfo, categoryItemUIPool);

				packItemUI.OnCategorySelected = OnCategorySelected;
			}
		}

		/// <summary>
		/// Invoked when a category inside a pack is clicked
		/// </summary>
		private void OnCategorySelected(RoyalWord_PackInfo packInfo, int categoryIndex)
		{
			// Set the selected CategoryInfo to display on the level screen
			selectedPackInfo = packInfo;
			selectedCategoryInfo = packInfo.categoryInfos[categoryIndex];

			// Set the background is being displayed
			SetBackground(selectedPackInfo.background);

			// Setup the level screen with the new selected Category Info
			UpdateLevelListItems();

			RoyalWord_ScreenManager.Instance.Show("level");
		}

		/// <summary>
		/// Creates a level list using the selected category info
		/// </summary>
		private void UpdateLevelListItems()
		{
			// Clear the level list of all items
			levelItemUIPool.ReturnAllObjectsToPool();

			if (selectedPackInfo != null && selectedCategoryInfo != null)
			{
				// Create a new LevelItemUI for each level in the selected category
				for (int i = 0; i < selectedCategoryInfo.LevelDatas.Count; i++)
				{
					RoyalWord_LevelData levelData = selectedCategoryInfo.LevelDatas[i];
					RoyalWord_LevelItemUI levelItemUI = levelItemUIPool.GetObject<RoyalWord_LevelItemUI>(levelListContainer);

					levelItemUI.Setup(levelData, selectedPackInfo.color);

					levelItemUI.Index = i;
					levelItemUI.OnListItemClicked = OnLevelSelected;
				}
			}
		}

		/// <summary>
		/// Invoked when a level is selected
		/// </summary>
		private void OnLevelSelected(int index, object data)
		{
			// Start the level in the GameController
			RoyalWord_GameController.Instance.StartLevel(selectedPackInfo, selectedCategoryInfo, index);

			// Show the game screen
			RoyalWord_ScreenManager.Instance.Show("game");
		}

		/// <summary>
		/// Sets the background.
		/// </summary>
		private void SetBackground(Sprite backgroundSprite)
		{
			Sprite currentBackground = (backgroundCopy == null) ? backgroundImage.sprite : backgroundCopy.sprite;

			// Already showing the given background so return
			if (currentBackground == backgroundSprite)
			{
				return;
			}

			if (backgroundCopy == null)
			{
				// If there is not already a backgroundCopy created then create one noew
				backgroundCopy = Instantiate(backgroundImage, backgroundImage.transform, true);
			}
			else
			{
				// If there is a backgrpound copy then it will be used to display the current background which will fade in so set
				// the original background to the current sprite
				backgroundImage.sprite = backgroundCopy.sprite;
			}

			// Set the sprite on the background copy
			backgroundCopy.sprite = backgroundSprite;

			// Fade in the new background
			RoyalWord_UIAnimation anim = RoyalWord_UIAnimation.Color(backgroundCopy, new Color(1f, 1f, 1f, 0f), Color.white, backgroundFadeDuration);
			anim.startOnFirstFrame = true;
			anim.Play();
		}

		/// <summary>
		/// Invoked when a new screen is showing in ScreenController
		/// </summary>
		private void OnScreenShowing(string screenId)
		{
			if (screenId == RoyalWord_ScreenManager.Instance.HomeScreenId || screenId == "pack")
			{
				SetBackground(mainBackgroundSprite);

				gamePointsText.text = RoyalWord_GameController.Instance.GamePoints.ToString();
				playButton.SetActive(true);
			}
		}

		/// <summary>
		/// Invoked when a new screen is showing in ScreenController
		/// </summary>
		private void OnSwitchingScreens(string fromScreenId, string toScreenId)
		{
			if (toScreenId == RoyalWord_ScreenManager.Instance.HomeScreenId)
			{
				// Fade out the top bar
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarBackButton, 1f, 0f, topBarAnimDuration));
			}
			else if (fromScreenId == RoyalWord_ScreenManager.Instance.HomeScreenId)
			{
				// Fade in the top bar
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarBackButton, 0f, 1f, topBarAnimDuration));
			}

			if (toScreenId == "level")
			{
				topBarPackText.text = selectedPackInfo.packName;
				topBarCategoryText.text = selectedCategoryInfo.displayName;

				// Fade in the pack/category text
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarPackText.gameObject, 0f, 1f, topBarAnimDuration));
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarCategoryText.gameObject, 0f, 1f, topBarAnimDuration));
			}
			else if (fromScreenId == "level")
			{
				// Fade out the pack/category text
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarPackText.gameObject, 1f, 0f, topBarAnimDuration));
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarCategoryText.gameObject, 1f, 0f, topBarAnimDuration));
			}

			if (toScreenId == "game")
			{
				topBarLevelText.text = string.Format("Level {0}", RoyalWord_GameController.Instance.LastCompletedLevelNumber + 1);;

				// Fade in the level text
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarLevelText.gameObject, 0f, 1f, topBarAnimDuration));
			}
			else if (fromScreenId == "game")
			{
				// Fade out the level text
				PlayTopBarAnimation(RoyalWord_UIAnimation.Alpha(topBarLevelText.gameObject, 1f, 0f, topBarAnimDuration));
			}
		}

		private void PlayTopBarAnimation(RoyalWord_UIAnimation anim)
		{
			anim.style = RoyalWord_UIAnimation.Style.EaseOut;
			anim.startOnFirstFrame = true;
			anim.Play();
		}

		#endregion
	}
}
