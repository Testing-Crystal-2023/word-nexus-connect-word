using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace Game
{
	public class WordNexus_WordConnectMenu : MonoBehaviour
	{
		[MenuItem("Word Nexus : Connect word/Level Editor")]
		public static void OpenLevelBuilderWindow()
		{
			EditorWindow.GetWindow<WordNexus_LevelBuilderWindow>("Level Editor");
		}
	}
}
