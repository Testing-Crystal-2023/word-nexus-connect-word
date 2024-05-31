using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using dotmob;

namespace WordCross
{
	public class WordNexus_UIController : WordNexus_SingletonComponent<WordNexus_UIController>
	{
		#region Inspector Variables

		[SerializeField] private Text gamePointsText = null;
		[SerializeField] private GameObject playButton = null;
		[SerializeField] private Text playButtonText = null;
		[SerializeField] private Image backgroundImage = null;
		[SerializeField] private Sprite mainBackgroundSprite = null;
		[SerializeField] private float backgroundFadeDuration = 0.35f;
		[Space]
		[SerializeField] private WordNexus_PackItemUI packItemUIPrefab = null;
		[SerializeField] private WordNexus_CategoryItemUI categoryItemUI = null;
		[SerializeField] private Transform packListContainer = null;
		[Space]
		[SerializeField] private WordNexus_LevelItemUI levelItemUIPrefab = null;
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

		private WordNexus_ObjectPool packItemUIPool;
		private WordNexus_ObjectPool categoryItemUIPool;
		private WordNexus_ObjectPool levelItemUIPool;

		private WordNexus_PackInfo selectedPackInfo;
		private WordNexus_CategoryInfo selectedCategoryInfo;

		private Image backgroundCopy;

		#endregion

		#region Unity Methods

		private void Start()
		{
			packItemUIPool = new WordNexus_ObjectPool(packItemUIPrefab.gameObject, 1, WordNexus_ObjectPool.CreatePoolContainer(transform, "pack_item_pool_container"));
			categoryItemUIPool = new WordNexus_ObjectPool(categoryItemUI.gameObject, 1, WordNexus_ObjectPool.CreatePoolContainer(transform, "category_item_pool_container"));
			levelItemUIPool = new WordNexus_ObjectPool(levelItemUIPrefab.gameObject, 1, WordNexus_ObjectPool.CreatePoolContainer(transform, "level_item_pool_container"));

			// Check if there is a current active level
			if (WordNexus_GameController.Instance.CurrentActiveLevel != null)
			{
				// Set the selected pack and category
				selectedPackInfo = WordNexus_GameController.Instance.CurrentActiveLevel.packInfo;
				selectedCategoryInfo = WordNexus_GameController.Instance.CurrentActiveLevel.categoryInfo;
			}

			gamePointsText.text = WordNexus_GameController.Instance.GamePoints.ToString();
			coinsPerHintText.text = WordNexus_GameController.Instance.CoinCostPerHint.ToString();
			coinsPerMultiHintText.text = WordNexus_GameController.Instance.CoinCostPerMultiHint.ToString();
			coinsPerTargetHintText.text = WordNexus_GameController.Instance.CoinCostPerTargetHint.ToString();

			UpdateUI();

			// Remove the play button if all the levels have been completed
			playButton.SetActive(!WordNexus_GameController.Instance.IsLastLevelInGameCompleted());

			ScreenManager.Instance.OnShowingScreen += OnScreenShowing;
			ScreenManager.Instance.OnSwitchingScreens += OnSwitchingScreens;
		}

		#endregion

		#region Public Methods

		public void UpdateUI()
		{
			if (!WordNexus_GameController.Instance.IsLastLevelInGameCompleted())
			{
				// Set the main screens play button text
				playButtonText.text = string.Format("Level {0}", WordNexus_GameController.Instance.LastCompletedLevelNumber + 1);
			}

			UpdatePackListItems();
			UpdateLevelListItems();
		}

		public void OnNewLevelStarted()
		{
			// Set the selected pack and category to the level that is currently being played so when the level screen is show it shows the correct levels
			selectedPackInfo = WordNexus_GameController.Instance.CurrentActiveLevel.packInfo;
			selectedCategoryInfo = WordNexus_GameController.Instance.CurrentActiveLevel.categoryInfo;

			// Set the new level text on the top bar
			topBarLevelText.text = "Level " + WordNexus_GameController.Instance.CurrentActiveLevel.levelData.GameLevelNumber;

			// Make sure the correct background is being displayed
			SetBackground(selectedPackInfo.background);

			UpdateUI();
		}

		/// <summary>
		/// Invoked when the play button one the main screen is clicked
		/// </summary>
		public void OnMainScreenPlayClicked()
		{
			WordNexus_GameController.Instance.StartLevel(WordNexus_GameController.Instance.LastCompletedLevelNumber + 1);

			ScreenManager.Instance.Show("game");
		}

		public void UpdatePlayerSelectingHint()
		{
			bool isSelecting = WordNexus_GameController.Instance.PlayerSelectingHint;

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
			for (int i = 0; i < WordNexus_GameController.Instance.PackInfos.Count; i++)
			{
				WordNexus_PackInfo packInfo = WordNexus_GameController.Instance.PackInfos[i];
				WordNexus_PackItemUI packItemUI = packItemUIPool.GetObject<WordNexus_PackItemUI>(packListContainer);

				packItemUI.Setup(packInfo, categoryItemUIPool);

				packItemUI.OnCategorySelected = OnCategorySelected;
			}
		}

		/// <summary>
		/// Invoked when a category inside a pack is clicked
		/// </summary>
		private void OnCategorySelected(WordNexus_PackInfo packInfo, int categoryIndex)
		{
			// Set the selected CategoryInfo to display on the level screen
			selectedPackInfo = packInfo;
			selectedCategoryInfo = packInfo.categoryInfos[categoryIndex];

			// Set the background is being displayed
			SetBackground(selectedPackInfo.background);

			// Setup the level screen with the new selected Category Info
			UpdateLevelListItems();

			ScreenManager.Instance.Show("level");
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
					WordNexus_LevelData levelData = selectedCategoryInfo.LevelDatas[i];
					WordNexus_LevelItemUI levelItemUI = levelItemUIPool.GetObject<WordNexus_LevelItemUI>(levelListContainer);

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
			WordNexus_GameController.Instance.StartLevel(selectedPackInfo, selectedCategoryInfo, index);

			// Show the game screen
			ScreenManager.Instance.Show("game");
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
			WordNexus_UIAnimation anim = WordNexus_UIAnimation.Color(backgroundCopy, new Color(1f, 1f, 1f, 0f), Color.white, backgroundFadeDuration);
			anim.startOnFirstFrame = true;
			anim.Play();
		}

		/// <summary>
		/// Invoked when a new screen is showing in ScreenController
		/// </summary>
		private void OnScreenShowing(string screenId)
		{
			if (screenId == ScreenManager.Instance.HomeScreenId || screenId == "pack")
			{
				SetBackground(mainBackgroundSprite);

				gamePointsText.text = WordNexus_GameController.Instance.GamePoints.ToString();

				// Remove the play button if all the levels have been completed
				playButton.SetActive(!WordNexus_GameController.Instance.IsLastLevelInGameCompleted());
			}
		}

		/// <summary>
		/// Invoked when a new screen is showing in ScreenController
		/// </summary>
		private void OnSwitchingScreens(string fromScreenId, string toScreenId)
		{
			if (toScreenId == ScreenManager.Instance.HomeScreenId)
			{
				// Fade out the top bar
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarBackButton, 1f, 0f, topBarAnimDuration));
			}
			else if (fromScreenId == ScreenManager.Instance.HomeScreenId)
			{
				// Fade in the top bar
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarBackButton, 0f, 1f, topBarAnimDuration));
			}

			if (toScreenId == "level")
			{
				topBarPackText.text = selectedPackInfo.packName;
				topBarCategoryText.text = selectedCategoryInfo.displayName;

				// Fade in the pack/category text
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarPackText.gameObject, 0f, 1f, topBarAnimDuration));
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarCategoryText.gameObject, 0f, 1f, topBarAnimDuration));
			}
			else if (fromScreenId == "level")
			{
				// Fade out the pack/category text
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarPackText.gameObject, 1f, 0f, topBarAnimDuration));
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarCategoryText.gameObject, 1f, 0f, topBarAnimDuration));
			}

			if (toScreenId == "game")
			{
				topBarLevelText.text = "Level " + WordNexus_GameController.Instance.CurrentActiveLevel.levelData.GameLevelNumber;

				// Fade in the level text
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarLevelText.gameObject, 0f, 1f, topBarAnimDuration));
			}
			else if (fromScreenId == "game")
			{
				// Fade out the level text
				PlayTopBarAnimation(WordNexus_UIAnimation.Alpha(topBarLevelText.gameObject, 1f, 0f, topBarAnimDuration));
			}
		}

		private void PlayTopBarAnimation(WordNexus_UIAnimation anim)
		{
			anim.style = WordNexus_UIAnimation.Style.EaseOut;
			anim.startOnFirstFrame = true;
			anim.Play();
		}

		#endregion
	}
}
