using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Game;

namespace Game
{
	public class WordNexus_SettingsPopup : WordNexus_Popup
	{
		#region Inspector Variables

		[Space]

		[SerializeField] private WordNexus_ToggleSlider musicToggle;
		[SerializeField] private WordNexus_ToggleSlider soundToggle;
		[SerializeField] private string privacyPolicyUrl;

		#endregion

		#region Unity Methods

		private void Start()
		{
			musicToggle.SetToggle(WordNexus_SoundManager.Instance.IsMusicOn, false);
			soundToggle.SetToggle(WordNexus_SoundManager.Instance.IsSoundEffectsOn, false);

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
			WordNexus_SoundManager.Instance.SetSoundTypeOnOff(WordNexus_SoundManager.SoundType.Music, isOn);
		}

		private void OnSoundEffectsValueChanged(bool isOn)
		{
			WordNexus_SoundManager.Instance.SetSoundTypeOnOff(WordNexus_SoundManager.SoundType.SoundEffect, isOn);
		}

		#endregion
	}
}
