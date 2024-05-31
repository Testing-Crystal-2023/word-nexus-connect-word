using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace WordCross
{
	public class WordNexus_Word_BoardList : WordNexus_WordBoard
	{
		#region Inspector Variables

		[Space]

		[SerializeField] private int maxNumberOfColumns = 3;
		[SerializeField] private int preferredWordsPerColumn = 5;
		[SerializeField] private int spaceBetweenLetters = 5;
		[SerializeField] private int spaceBetweenRows = 10;
		[SerializeField] private int spaceBetweenColumns = 20;
		[SerializeField] private WordNexus_Word_BoardCell wordBoardCellPrefab = null;

		#endregion

		#region Member Variables

		private WordNexus_ObjectPool wordBoardCellPool;
		private WordNexus_ObjectPool columnContainerPool;
		private WordNexus_ObjectPool rowContainerPool;
		private WordNexus_ObjectPool cellContainerPool;

		private RectTransform boardContainer;
		private Dictionary<string, List<WordNexus_Word_BoardCell>> wordBoardCells;

		#endregion

		#region Unity Methods

		private void Update()
		{
			//ScaleWordList();
		}

		#endregion

		#region Public Methods

		/// <summary>
		/// Initialize this board
		/// </summary>
		public override void Initialize()
		{
			wordBoardCells = new Dictionary<string, List<WordNexus_Word_BoardCell>>();

			// Create a template object for the column and row containers for the pools
			Transform columnContainerTemplate = CreateColumnContainerTemplate(transform);
			Transform rowContainerTemplate = CreateRowContainerTemplate(transform);

			// Create a cell placement template GameObject to pass to the cellPlacementPool 
			Transform cellContainerTemplate = new GameObject("cell_template", typeof(RectTransform)).transform;
			cellContainerTemplate.SetParent(transform, false);

			// Create a pool container to hold all the pooled objects
			Transform poolContainer = WordNexus_ObjectPool.CreatePoolContainer(transform, "pool_container");

			// Create the ObjectPools for the word cell and containers
			wordBoardCellPool = new WordNexus_ObjectPool(wordBoardCellPrefab.gameObject, 10, poolContainer);
			columnContainerPool = new WordNexus_ObjectPool(columnContainerTemplate.gameObject, 10, poolContainer);
			rowContainerPool = new WordNexus_ObjectPool(rowContainerTemplate.gameObject, 10, poolContainer);
			cellContainerPool = new WordNexus_ObjectPool(cellContainerTemplate.gameObject, 10, poolContainer);

			// Create the container that holds all board objects
			boardContainer = CreateBoardContainer(transform);
		}

		/// <summary>
		/// Setup the board for the given level
		/// </summary>
		public override void Setup(WordNexus_ActiveLevel level)
		{
			Clear();
			CreateWordList(level);
			ShowFoundWords(level);
		}

		/// <summary>
		/// Clears the board of all UI elements
		/// </summary>
		public override void Clear()
		{
			wordBoardCellPool.ReturnAllObjectsToPool();
			columnContainerPool.ReturnAllObjectsToPool();
			rowContainerPool.ReturnAllObjectsToPool();
			cellContainerPool.ReturnAllObjectsToPool();

			wordBoardCells.Clear();
		}

		#endregion

		#region Protected Methods

		protected override List<WordNexus_Word_BoardCell> GetWordGridCells(WordData wordData)
		{
			return wordBoardCells[wordData.Word];
		}

		#endregion

		#region Private Methods

		private void CreateWordList(WordNexus_ActiveLevel level)
		{
			// Get the minumum number of columns we will need
			int numColumns = Mathf.Min(maxNumberOfColumns, Mathf.CeilToInt((float)level.levelData.Words.Count / (float)preferredWordsPerColumn));

			// Get the minumum number of words that must go in each column
			int numWordsPerColumn = Mathf.FloorToInt((float)level.levelData.Words.Count / (float)numColumns);

			// Get the number of remaining words that will be placed in columns from left to right
			int remainingWords = level.levelData.Words.Count - (numWordsPerColumn * numColumns);

			for (int c = 0, wordIndex = 0; c < numColumns; c++)
			{
				int numWordsInColumn = numWordsPerColumn;

				// If there are remaining words add one to this column
				if (remainingWords > 0)
				{
					numWordsInColumn += 1;
					remainingWords -= 1;
				}

				// Create a new column container from the 
				Transform columnContainer = columnContainerPool.GetObject<Transform>(boardContainer);

				// Add the words to the column
				for (int r = 0; r < numWordsInColumn && wordIndex < level.levelData.Words.Count; r++, wordIndex++)
				{
					// Get a new row container for the word to use
					Transform rowContainer = rowContainerPool.GetObject<Transform>(columnContainer);

					// Get the WordData from the level for the word we are currently placing on the board
					WordData wordData = level.levelData.Words[wordIndex];

					// Create all the WordBoardCells for each letter in the word, adding them to the row container
					List<WordNexus_Word_BoardCell> cells = CreateWordBoardCells(level, wordIndex, rowContainer);

					wordBoardCells.Add(wordData.Word, cells);
				}
			}
		}

		/// <summary>
		/// Create all WordBoardCells for the given word data
		/// </summary>
		private List<WordNexus_Word_BoardCell> CreateWordBoardCells(WordNexus_ActiveLevel level, int wordIndex, Transform parent)
		{
			WordData wordData = level.levelData.Words[wordIndex];

			List<WordNexus_Word_BoardCell> wordCells = new List<WordNexus_Word_BoardCell>();

			for (int k = 0; k < wordData.Word.Length; k++)
			{
				WordNexus_Word_BoardCell wordBoardCell = CreateWordBoardCell(parent, wordData.Word[k], wordData.AwardCoins, level.packInfo.color);

				// Set the Row/Col so when the cell is clicked during a target hint we know what letter needs to be shown
				wordBoardCell.Row = wordIndex;
				wordBoardCell.Col = k;
				wordBoardCell.OnCellClicked = OnWordBoardCellClicked;

				wordCells.Add(wordBoardCell);
			}

			return wordCells;
		}

		/// <summary>
		/// Creates a WordBoardCell for the given letter
		/// </summary>
		private WordNexus_Word_BoardCell CreateWordBoardCell(Transform parent, char letter, bool hasCoin, Color packColor)
		{
			RectTransform cellContainer = cellContainerPool.GetObject(parent).transform as RectTransform;
			WordNexus_Word_BoardCell wordBoardCell = wordBoardCellPool.GetObject<WordNexus_Word_BoardCell>(cellContainer);

			cellContainer.sizeDelta = wordBoardCell.RectT.sizeDelta;

			wordBoardCell.letterText.text = letter.ToString();
			wordBoardCell.letterBackground.color = packColor;

			wordBoardCell.SetState(WordNexus_Word_BoardCell.State.Blank);

			wordBoardCell.HasCoin = hasCoin;
			wordBoardCell.coinObject.SetActive(hasCoin);

			// Destroy any animations on the object that might be left over from a previous game
			WordNexus_UIAnimation.DestroyAllAnimations(wordBoardCell.letterText.gameObject);
			WordNexus_UIAnimation.DestroyAllAnimations(wordBoardCell.letterBackground.gameObject);

			return wordBoardCell;
		}

		private RectTransform CreateBoardContainer(Transform parent)
		{
			GameObject listObject = new GameObject("board_container", typeof(RectTransform), typeof(WordNexus_ScaleToFit));

			listObject.transform.SetParent(parent, false);

			HorizontalLayoutGroup hlg = listObject.AddComponent<HorizontalLayoutGroup>();
			hlg.spacing = spaceBetweenColumns;
			hlg.childControlWidth = true;
			hlg.childControlHeight = true;
			hlg.childForceExpandWidth = true;
			hlg.childForceExpandHeight = true;

			ContentSizeFitter csf = listObject.AddComponent<ContentSizeFitter>();
			csf.verticalFit = ContentSizeFitter.FitMode.PreferredSize;
			csf.horizontalFit = ContentSizeFitter.FitMode.PreferredSize;

			return listObject.transform as RectTransform;
		}

		private Transform CreateColumnContainerTemplate(Transform parent)
		{
			GameObject columnContainerTemplate = new GameObject("column_container_template", typeof(RectTransform));

			columnContainerTemplate.transform.SetParent(parent, false);

			VerticalLayoutGroup vlg = columnContainerTemplate.AddComponent<VerticalLayoutGroup>();
			vlg.spacing = spaceBetweenRows;
			vlg.childControlWidth = true;
			vlg.childControlHeight = true;
			vlg.childForceExpandWidth = false;
			vlg.childForceExpandHeight = false;

			return columnContainerTemplate.transform;
		}

		private Transform CreateRowContainerTemplate(Transform parent)
		{
			GameObject rowContainerTemplate = new GameObject("row_container_template", typeof(RectTransform));

			rowContainerTemplate.transform.SetParent(parent, false);

			HorizontalLayoutGroup hlg = rowContainerTemplate.AddComponent<HorizontalLayoutGroup>();
			hlg.spacing = spaceBetweenLetters;
			hlg.childControlWidth = false;
			hlg.childControlHeight = false;
			hlg.childForceExpandWidth = false;
			hlg.childForceExpandHeight = false;

			return rowContainerTemplate.transform;
		}

		#endregion
	}
}
