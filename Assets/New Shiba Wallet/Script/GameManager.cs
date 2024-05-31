using UnityEngine;
using UnityEngine.UI;
public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    public GameObject HandAnimation;
    public Text coinTxt;
    private void Awake()
    {
        if(Instance==null)
        {
            Instance= this;
        }
    }
    
}
