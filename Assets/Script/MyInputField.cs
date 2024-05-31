using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MyInputField : MonoBehaviour
{
    public TMP_InputField inputField;
    public bool keepOldTextInField;
    public string oldEditText, editText;

    private void Start()
    {
        inputField = gameObject.GetComponent<TMP_InputField>();
        inputField.onEndEdit.AddListener(EndEdit);
        inputField.onValueChanged.AddListener(Editing);
        inputField.onTouchScreenKeyboardStatusChanged.AddListener(ReportChangeStatus);
    }
    private void ReportChangeStatus(TouchScreenKeyboard.Status newStatus)
    {
        if (newStatus == TouchScreenKeyboard.Status.Canceled)
            keepOldTextInField = true;
    }

    private void Editing(string currentText)
    {
        oldEditText = editText;
        editText = currentText;
    }

    private void EndEdit(string currentText)
    {
        if (keepOldTextInField && !string.IsNullOrEmpty(oldEditText))
        {
            //IMPORTANT ORDER
            editText = oldEditText;
            inputField.text = oldEditText;

            keepOldTextInField = false;
        }
    }

}
