using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace Game
{
	[CustomEditor(typeof(WordNexus_UIAnimation))]
	public class WordNexus_UIAnimationEditor : Editor
	{
		#region Member Variables

		private static GUIContent fromContent = new GUIContent("From");
		private static GUIContent toContent = new GUIContent("To");

		#endregion

		#region Properties

		#endregion

		#region Unity Methods

		public override void OnInspectorGUI()
		{
			EditorGUILayout.PropertyField(serializedObject.FindProperty("id"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("type"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("style"));

			if (serializedObject.FindProperty("style").enumValueIndex == (int)WordNexus_UIAnimation.Style.Custom)
			{
				EditorGUILayout.PropertyField(serializedObject.FindProperty("animationCurve"));
			}

			EditorGUILayout.PropertyField(serializedObject.FindProperty("duration"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("playOnStart"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("startDelay"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("startOnFirstFrame"));
			EditorGUILayout.PropertyField(serializedObject.FindProperty("loopType"));

			EditorGUILayout.Space();

			EditorGUILayout.PropertyField(serializedObject.FindProperty("useCurrentFrom"));

			switch ((WordNexus_UIAnimation.Type)serializedObject.FindProperty("type").enumValueIndex)
			{
				case WordNexus_UIAnimation.Type.PositionX:
				case WordNexus_UIAnimation.Type.PositionY:
				case WordNexus_UIAnimation.Type.ScaleX:
				case WordNexus_UIAnimation.Type.ScaleY:
				case WordNexus_UIAnimation.Type.RotationZ:
				case WordNexus_UIAnimation.Type.Width:
				case WordNexus_UIAnimation.Type.Height:
				case WordNexus_UIAnimation.Type.Alpha:
					DrawFloatValues();
					break;
				case WordNexus_UIAnimation.Type.Color:
					DrawColorValues();
					break;
			}

			serializedObject.ApplyModifiedProperties();
		}

		#endregion

		#region Private Methods

		private void DrawFloatValues()
		{
			bool useCurrentFrom = serializedObject.FindProperty("useCurrentFrom").boolValue;

			GUI.enabled = !useCurrentFrom;

			EditorGUILayout.PropertyField(serializedObject.FindProperty("fromValue"), fromContent);

			GUI.enabled = true;

			EditorGUILayout.PropertyField(serializedObject.FindProperty("toValue"), toContent);
		}

		private void DrawColorValues()
		{
			bool useCurrentFrom = serializedObject.FindProperty("useCurrentFrom").boolValue;

			GUI.enabled = !useCurrentFrom;

			EditorGUILayout.PropertyField(serializedObject.FindProperty("fromColor"), fromContent);

			GUI.enabled = true;

			EditorGUILayout.PropertyField(serializedObject.FindProperty("toColor"), toContent);
		}

		#endregion
	}
}
