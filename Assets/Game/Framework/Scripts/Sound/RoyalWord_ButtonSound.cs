using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	[RequireComponent(typeof(Button))]
	public class RoyalWord_ButtonSound : MonoBehaviour
	{
		#region Inspector Variables

		[SerializeField] private string soundId;

		#endregion

		#region Unity Methods

		private void Awake()
		{
			gameObject.GetComponent<Button>().onClick.AddListener(PlaySound);
		}

		#endregion

		#region Private Methods

		private void PlaySound()
		{
			if (RoyalWord_SoundManager.Exists())
			{
				RoyalWord_SoundManager.Instance.Play(soundId);
			}
		}

		#endregion
	}
}
