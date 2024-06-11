using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game
{
	public abstract class RoyalWord_RecyclableListItem<T> : RoyalWord_ClickableListItem
	{
		#region Abstract Methods

		public abstract void Initialize(T dataObject);
		public abstract void Setup(T dataObject);
		public abstract void Removed();

		#endregion
	}
}
