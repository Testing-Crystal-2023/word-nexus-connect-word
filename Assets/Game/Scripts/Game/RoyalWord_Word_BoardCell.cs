using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class RoyalWord_Word_BoardCell : RoyalWord_UIMonoBehaviour
	{
		#region Enums

		public enum State
		{
			Blank,
			Hint,
			Found
		}

		#endregion

		#region Inspector Variables

		public Text letterText;
		public Image letterBackground;
		public GameObject coinObject;
		public Color normalTextColor = Color.white;
		public Color foundTextColor = Color.white;

		#endregion

		#region Properties

		public int Row { get; set; }
		public int Col { get; set; }
		public bool HasCoin { get; set; }
		public State CurrentState { get; set; }
		public Image coin;
		public Sprite crypto,cash,Coin_Simple;
		public System.Action<int, int> OnCellClicked { get; set; }

		#endregion

		#region Public Methods
		/// <summary>
		/// Start is called on the frame when a script is enabled just before
		/// any of the Update methods is called the first time.
		/// </summary>
		void Start()
		{

			if (AdManager.Instance.Crypto_Wallet_Show.ToString() == "true" && AdManager.Instance.WalletShow.ToString() == "true")
			{
				coin.sprite = crypto;
			}
			else if (AdManager.Instance.UPI_Wallet_Show.ToString() == "true" && AdManager.Instance.WalletShow.ToString() == "true")
			{
				coin.sprite = cash;
			}
			else
			{
				coin.sprite = Coin_Simple;
			}
		}
		/// <summary>
		/// Invoked when the button for this cell is clicked
		/// </summary>
		public void OnClick()
		{
			if (OnCellClicked != null)
			{
				OnCellClicked(Row, Col);
			}
		}

		/// <summary>
		/// Updates the state of this cell
		/// </summary>
		public void SetState(State state)
		{
			CurrentState = state;

			// Only set the letter background it the letter is found
			letterBackground.gameObject.SetActive(state == State.Found);

			// Set the color of the letter text
			Color letterColor = (state == State.Found) ? foundTextColor : normalTextColor;
			letterColor.a = (state != State.Blank) ? 1f : 0f;

			letterText.color = letterColor;

			// Hide the coin if the state is now found of hint
			if (HasCoin && (state == State.Found || state == State.Hint))
			{
				coinObject.SetActive(false);
			}
		}

		private void SetupAndPlay(RoyalWord_UIAnimation anim, AnimationCurve animationCurve, float startDelay)
		{
			anim.style = RoyalWord_UIAnimation.Style.Custom;
			anim.animationCurve = animationCurve;
			anim.startDelay = startDelay;
			anim.startOnFirstFrame = true;
			anim.Play();
		}

		#endregion
	}
}