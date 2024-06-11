using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game
{
	[System.Serializable]
	public class RoyalWord_PackInfo
	{
		#region Inspector Varaibles

		public string packName = "";
		public Color color = Color.white;
		public Sprite background = null;
		public List<RoyalWord_CategoryInfo> categoryInfos = null;

		#endregion
	}
}
