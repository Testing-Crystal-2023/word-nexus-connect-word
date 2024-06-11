﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Game
{
	public interface RoyalWord_ISaveable
	{
		string SaveId { get; }
		Dictionary<string, object> Save();
	}
}