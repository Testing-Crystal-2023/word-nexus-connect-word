using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using Firebase.Storage;
using Firebase.Extensions;
using EasyUI.Toast;
using Firebase;
public class WordNexus_ImageUploader : MonoBehaviour
{
    public static WordNexus_ImageUploader instance;
    public Text imageNameDisplay;
    public GameObject RequireImage_Object,Display_Image_Object;
    private void Awake() {
        if(instance==null)
            instance=this;
    }
    public void ImageGet()
    {
        NativeGallery.Permission permission = NativeGallery.GetImageFromGallery((path) =>
	    {
		    Debug.Log( "Image path: " + path );
            long fileSizeInBytes = new FileInfo(path).Length;// Get file size
    
            double fileSizeInMB = (double)fileSizeInBytes / (1024 * 1024);// Convert bytes to megabytes
            Debug.Log(fileSizeInBytes);
            Debug.Log(fileSizeInMB);
            if(fileSizeInMB>int.Parse(AdManager.Instance.Max_Image_Size_MB))
            {
                Toast.Show(AdManager.Instance.Big_Size_Image_Error_Message);
                return;
            }
		    if( path != null )
		    {
			    // Create Texture from selected image
			    Texture2D texture = NativeGallery.LoadImageAtPath( path );
			    if( texture == null )
			    {
				    Debug.Log( "Couldn't load texture from " + path );
				    return;
			    }
			    OnImagePicked(path);
		    }
	    });
    }
    public void OnImagePicked(string imagePath)
    {
        if (!string.IsNullOrEmpty(imagePath))
        {
            
            
            // Load the image from the picked path
            Texture2D tex = LoadTexture(imagePath);
            if (tex != null)
            {
                string name=Path.GetFileName(imagePath);
                Debug.Log(name.ToCharArray().Length);
                if(name.ToCharArray().Length>=25)
                {
                    imageNameDisplay.text = name.Substring(0, 15)+ ".." + name.Substring(name.Length-7, 7);
                }
                else
                {
                    imageNameDisplay.text = name;
                }
                RequireImage_Object.SetActive(false);
                Display_Image_Object.SetActive(true);
                byte[] imageData = File.ReadAllBytes(imagePath);
                FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
                {
                    FirebaseApp app = FirebaseApp.DefaultInstance;
                    WordNexus_WalletManager.Instance.UploadImageToFirebase(imageData);
                });
            }
        }
    }

	private Texture2D LoadTexture(string path)
    {
        Texture2D tex = null;
        byte[] fileData;

        if (File.Exists(path))
        {
            fileData = File.ReadAllBytes(path);
            tex = new Texture2D(2, 2);
            tex.LoadImage(fileData); // LoadImage can auto-resize the texture dimensions.
        }

        return tex;
    }
    public void close_Display_Image()
    {
        RequireImage_Object.SetActive(true);
        Display_Image_Object.SetActive(false);
        WordNexus_WalletManager.Instance.PayFee_screen_PayBtn.gameObject.SetActive(false);
    }
}