using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Game;

namespace Game
{
	public class RoyalWord_SettingsPopup : RoyalWord_Popup
	{
		#region Inspector Variables

		[Space]

		[SerializeField] private RoyalWord_ToggleSlider musicToggle;
		[SerializeField] private RoyalWord_ToggleSlider soundToggle;
		[SerializeField] private string privacyPolicyUrl;

		#endregion

		#region Unity Methods

		private void Start()
		{
			musicToggle.SetToggle(RoyalWord_SoundManager.Instance.IsMusicOn, false);
			soundToggle.SetToggle(RoyalWord_SoundManager.Instance.IsSoundEffectsOn, false);

			musicToggle.OnValueChanged += OnMusicValueChanged;
			soundToggle.OnValueChanged += OnSoundEffectsValueChanged;
		}

		#endregion

		#region Public Methods

		public void OnPrivacyPolicyClicked()
		{
			Application.OpenURL(privacyPolicyUrl);
		}

		#endregion

		#region Private Methods

		private void OnMusicValueChanged(bool isOn)
		{
			RoyalWord_SoundManager.Instance.SetSoundTypeOnOff(RoyalWord_SoundManager.SoundType.Music, isOn);
		}

		private void OnSoundEffectsValueChanged(bool isOn)
		{
			RoyalWord_SoundManager.Instance.SetSoundTypeOnOff(RoyalWord_SoundManager.SoundType.SoundEffect, isOn);
		}

		#endregion
	}
}
