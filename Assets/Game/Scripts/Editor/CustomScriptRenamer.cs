using System.IO;
using UnityEditor;
using UnityEngine;
#if UNITY_EDITOR
public class CustomScriptRenamer : EditorWindow
{
    private string oldScriptName = "";
    private string newScriptName = "";

    [MenuItem("CustomTools/RenameScript")]
    private static void Init()
    {
        CustomScriptRenamer window = (CustomScriptRenamer)EditorWindow.GetWindow(typeof(CustomScriptRenamer));
        window.Show();
    }

    private void OnGUI()
    {
        GUILayout.Label("Custom Script Renamer", EditorStyles.boldLabel);
        oldScriptName = EditorGUILayout.TextField("Old Script Name", oldScriptName);
        newScriptName = EditorGUILayout.TextField("New Script Name", newScriptName);

        if (GUILayout.Button("Rename Script"))
        {
            string[] assetGUIDs = AssetDatabase.FindAssets("t:script " + oldScriptName);

            if (assetGUIDs.Length == 0)
            {
                Debug.Log("Script not found.");
                return;
            }

            string oldPath = AssetDatabase.GUIDToAssetPath(assetGUIDs[0]);
            string directory = Path.GetDirectoryName(oldPath);
            string newPath = Path.Combine(directory, newScriptName + ".cs");

            AssetDatabase.RenameAsset(oldPath, newScriptName);
            File.Move(oldPath, newPath);

            // Replace the class name within the script
            string fileContent = File.ReadAllText(newPath);
            fileContent = fileContent.Replace(oldScriptName, newScriptName);
            File.WriteAllText(newPath, fileContent);

            AssetDatabase.Refresh();
            Debug.Log("Script renamed successfully!");
        }
    }
}
#endif