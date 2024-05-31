using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace WordCross
{
	public class WordNexus_WordConnectMenu : MonoBehaviour
	{
		[MenuItem("Dotmob/Level Editor")]
		public static void OpenLevelBuilderWindow()
		{
			EditorWindow.GetWindow<WordNexus_LevelBuilderWindow>("Level Editor");
		}
	}
}
