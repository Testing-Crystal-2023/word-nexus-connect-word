﻿/// <summary>
/// write by 52cwalk,if you have some question ,please contract lycwalk@gmail.com
/// </summary>
/// 
/// 

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class QREncodeTest : MonoBehaviour
{
	public QRCodeEncodeController e_qrController;
	public RawImage qrCodeImage;
	// public InputField m_inputfield;
	// public Text infoText;

	public Texture2D codeTex;
	public static QREncodeTest Instance;

	private void Awake()
	{
		if (Instance == null)
			Instance = this;
	}
	


	public void qrEncodeFinished(Texture2D tex)
	{
		if (tex != null && tex != null)
		{
			int width = tex.width;
			int height = tex.height;
			float aspect = width * 1.0f / height;
			qrCodeImage.GetComponent<RectTransform>().sizeDelta = new Vector2(220, 220 / aspect);
			qrCodeImage.texture = tex;
			codeTex = tex;
		}
		else
		{
		}
	}

	public void setCodeType(int typeId)
	{
		e_qrController.eCodeFormat = (QRCodeEncodeController.CodeMode)(typeId);
		Debug.Log("clicked typeid is " + e_qrController.eCodeFormat);
	}


	public void Encode()
	{
		if (e_qrController != null)
		{
			string valueStr = DOGEWalletManager.Instance.myAddress;
			int errorlog = e_qrController.Encode(valueStr);
			// infoText.color = Color.red;
			// if (errorlog == -13) {
			// 	infoText.text = "Must contain 12 digits,the 13th digit is automatically added !";

			// } else if (errorlog == -8) {
			// 	infoText.text = "Must contain 7 digits,the 8th digit is automatically added !";
			// }
			// else if (errorlog == -39)
			// {
			//     infoText.text = "Only support digits";
			// }
			// else if (errorlog == -128) {
			// 	infoText.text = "Contents length should be between 1 and 80 characters !";

			// } else if (errorlog == -1) {
			// 	infoText.text = "Please select one code type !";
			// }
			// else if (errorlog == 0) {
			// 	infoText.color = Color.green;
			// 	infoText.text = "Encode successfully !";
			// }
		}
	}

	public void ClearCode()
	{
		qrCodeImage.texture = null;
		// m_inputfield.text = "";
		// infoText.text = "";
	}

	public void SaveCode()
	{
		GalleryController.SaveImageToGallery(codeTex);
	}
}