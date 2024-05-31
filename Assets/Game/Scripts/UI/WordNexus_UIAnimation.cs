using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Game
{
	public class WordNexus_UIAnimation : MonoBehaviour
	{
		#region Enums

		public enum Type
		{
			PositionX,
			PositionY,
			ScaleX,
			ScaleY,
			RotationZ,
			Width,
			Height,
			Color,
			Alpha
		}

		public enum LoopType
		{
			None,
			Repeat,
			Reverse
		}

		public enum Style
		{
			Linear,
			EaseIn,
			EaseOut,
			Custom
		}

		#endregion

		#region Inspector Variables

		public string id;
		public Type type;
		public LoopType loopType;
		public Style style;
		public float duration;
		public float startDelay;
		public bool startOnFirstFrame;
		public bool useCurrentFrom;
		public bool playOnStart;
		public AnimationCurve animationCurve;

		[SerializeField] private float fromValue;
		[SerializeField] private float toValue;

		[SerializeField] private Color fromColor = UnityEngine.Color.white;
		[SerializeField] private Color toColor = UnityEngine.Color.white;

		#endregion

		#region Member Variables

		private bool isPlaying;
		private float elapsedTime;
		private bool destroyOnFinish;
		private bool isDestroyed;

		private RectTransform rectT;
		private Graphic graphic;
		private CanvasGroup canvasGroup;
		private bool canvasGroupAdded;

		#endregion

		#region Properties

		public bool IsPlaying { get { return isPlaying; } }
		public System.Action<GameObject> OnAnimationFinished { get; set; }

		#endregion

		#region Unity Methods

		private void Start()
		{
			if (playOnStart)
			{
				Play();
			}
		}

		private void Update()
		{
			if (isPlaying)
			{
				elapsedTime += Time.deltaTime;

				UpdateAnimation(elapsedTime);

				// Check if the animation is over
				if (elapsedTime >= duration)
				{
					isPlaying = false;

					if (loopType != LoopType.None)
					{
						// If loop type is reverse then swap the from and to values
						if (loopType == LoopType.Reverse)
						{
							useCurrentFrom = false;

							WordNexus_Utilities.SwapValue(ref fromValue, ref toValue);
							WordNexus_Utilities.SwapValue(ref fromColor, ref toColor);
						}

						// Play the animation again
						Play();
					}
					else
					{
						if (destroyOnFinish)
						{
							// Destroy the UIAnimation component
							DestroyAnimation();
						}

						if (OnAnimationFinished != null)
						{
							OnAnimationFinished(gameObject);
						}
					}
				}
			}
		}

		#endregion

		#region Public Methods

		/// <summary>
		/// Plays all UIAnimations on the given GameObject with the given id
		/// </summary>
		public static void PlayAllById(GameObject targetGameObject, string animationId)
		{
			WordNexus_UIAnimation[] uiAnimations = targetGameObject.GetComponents<WordNexus_UIAnimation>();

			for (int i = 0; i < uiAnimations.Length; i++)
			{
				if (uiAnimations[i].id == animationId)
				{
					uiAnimations[i].Play();
				}
			}
		}

		/// <summary>
		/// Stops all UIAnimations on the given GameObject with the given id
		/// </summary>
		public static void StopAllById(GameObject targetGameObject, string animationId)
		{
			WordNexus_UIAnimation[] uiAnimations = targetGameObject.GetComponents<WordNexus_UIAnimation>();

			for (int i = 0; i < uiAnimations.Length; i++)
			{
				if (uiAnimations[i].id == animationId)
				{
					uiAnimations[i].Stop();
				}
			}
		}

		public static WordNexus_UIAnimation GetAnimation(GameObject targetGameObject, Type animType)
		{
			WordNexus_UIAnimation[] uiAnimations = targetGameObject.GetComponents<WordNexus_UIAnimation>();

			for (int i = 0; i < uiAnimations.Length; i++)
			{
				if (uiAnimations[i].type == animType)
				{
					return uiAnimations[i];
				}
			}

			return null;
		}

		public static List<WordNexus_UIAnimation> GetAnimationsById(GameObject targetGameObject, string id)
		{
			WordNexus_UIAnimation[] uiAnimations = targetGameObject.GetComponents<WordNexus_UIAnimation>();
			List<WordNexus_UIAnimation> returnAnimations = new List<WordNexus_UIAnimation>();

			for (int i = 0; i < uiAnimations.Length; i++)
			{
				if (uiAnimations[i].id == id)
				{
					returnAnimations.Add(uiAnimations[i]);
				}
			}

			return returnAnimations;
		}

		public static void DestroyAllAnimations(GameObject targetGameObject)
		{
			WordNexus_UIAnimation[] uiAnimations = targetGameObject.GetComponents<WordNexus_UIAnimation>();

			for (int i = 0; i < uiAnimations.Length; i++)
			{
				uiAnimations[i].DestroyAnimation();
			}
		}

		public void Play()
		{
			// Init the animation
			Init();

			// Check that the animation settings are valid
			if (!Check())
			{
				return;
			}

			// If using the current value for the from value then set it now
			if (useCurrentFrom)
			{
				SetFromValue();
			}

			if (startOnFirstFrame)
			{
				// Set the animation in the first frame
				UpdateAnimation(0);
			}

			if (startDelay > 0)
			{
				StartCoroutine(PlayAnimationAfterDelay(startDelay));
			}
			else
			{
				PlayAnimation();
			}
		}

		public void Stop()
		{
			isPlaying = false;
		}

		#endregion

		#region Private Methods

		private void Init()
		{
			switch (type)
			{
				case Type.PositionX:
				case Type.PositionY:
				case Type.Width:
				case Type.Height:
					rectT = transform as RectTransform;
					break;
				case Type.Color:
					graphic = gameObject.GetComponent<Graphic>();
					break;
				case Type.Alpha:
					canvasGroup = gameObject.GetComponent<CanvasGroup>();

					if (canvasGroup == null)
					{
						canvasGroup = gameObject.AddComponent<CanvasGroup>();
						canvasGroup.blocksRaycasts = false;
						canvasGroupAdded = true;
					}
					break;
			}
		}

		private void SetFromValue()
		{
			switch (type)
			{
				case Type.PositionX:
					fromValue = rectT.anchoredPosition.x;
					break;
				case Type.PositionY:
					fromValue = rectT.anchoredPosition.y;
					break;
				case Type.RotationZ:
					fromValue = transform.localEulerAngles.z;
					break;
				case Type.ScaleX:
					fromValue = transform.localScale.x;
					break;
				case Type.ScaleY:
					fromValue = transform.localScale.y;
					break;
				case Type.Width:
					fromValue = rectT.sizeDelta.x;
					break;
				case Type.Height:
					fromValue = rectT.sizeDelta.x;
					break;
				case Type.Alpha:
					fromValue = canvasGroup.alpha;
					break;
				case Type.Color:
					fromColor = graphic.color;
					break;
			}
		}

		private bool Check()
		{
			switch (type)
			{
				case Type.PositionX:
				case Type.PositionY:
				case Type.Width:
				case Type.Height:
					if (rectT == null)
					{
						Debug.LogErrorFormat("[UIAnimation] Cannot play {0} animation on GameObject {1}: There is no RectTransform component.", type, gameObject.name);
						return false;
					}

					break;
				case Type.Color:
					if (graphic == null)
					{
						Debug.LogErrorFormat("[UIAnimation] Cannot play {0} animation on GameObject {1}: There is no Graphic component.", type, gameObject.name);
						return false;
					}

					break;
				case Type.Alpha:
					if (canvasGroup == null)
					{
						Debug.LogErrorFormat("[UIAnimation] Cannot play {0} animation on GameObject {1}: There is no CanvasGroup component.", type, gameObject.name);
						return false;
					}

					break;
			}

			return true;
		}

		private IEnumerator PlayAnimationAfterDelay(float delay)
		{
			yield return new WaitForSeconds(delay);

			PlayAnimation();
		}

		private void PlayAnimation()
		{
			// Set as playing
			isPlaying = true;
			elapsedTime = 0;
		}

		private void UpdateAnimation(float time)
		{
			float t = GetLerpT(time);
			object val = GetValue(t);

			SetValue(val);
		}

		private float GetLerpT(float time)
		{
			float timeValue = (time > duration) ? duration : time;

			float t = (duration == 0) ? 1 : timeValue / duration;

			switch (style)
			{
				case Style.EaseIn:
					t = WordNexus_Utilities.EaseIn(t);
					break;
				case Style.EaseOut:
					t = WordNexus_Utilities.EaseOut(t);
					break;
				case Style.Custom:
					t = animationCurve.Evaluate(t);
					break;
			}

			return t;
		}

		private object GetValue(float t)
		{
			switch (type)
			{
				case Type.PositionX:
				case Type.PositionY:
				case Type.ScaleX:
				case Type.ScaleY:
				case Type.RotationZ:
				case Type.Width:
				case Type.Height:
				case Type.Alpha:
					return Mathf.LerpUnclamped(fromValue, toValue, t);
				case Type.Color:
					return UnityEngine.Color.Lerp(fromColor, toColor, t);
			}

			return null;
		}

		private void SetValue(object val)
		{
			switch (type)
			{
				case Type.PositionX:
					rectT.anchoredPosition = new Vector2((float)val, rectT.anchoredPosition.y);
					break;
				case Type.PositionY:
					rectT.anchoredPosition = new Vector2(rectT.anchoredPosition.x, (float)val);
					break;
				case Type.RotationZ:
					transform.localEulerAngles = new Vector3(transform.localEulerAngles.x, transform.localEulerAngles.y, (float)val);
					break;
				case Type.ScaleX:
					transform.localScale = new Vector3((float)val, transform.localScale.y, transform.localScale.z);
					break;
				case Type.ScaleY:
					transform.localScale = new Vector3(transform.localScale.x, (float)val, transform.localScale.z);
					break;
				case Type.Width:
					rectT.sizeDelta = new Vector2((float)val, rectT.sizeDelta.y);
					break;
				case Type.Height:
					rectT.sizeDelta = new Vector2(rectT.sizeDelta.x, (float)val);
					break;
				case Type.Alpha:
					canvasGroup.alpha = (float)val;
					break;
				case Type.Color:
					graphic.color = (Color)val;
					break;
			}
		}

		private void DestroyAnimation()
		{
			isDestroyed = true;

			Destroy(this);

			if (canvasGroupAdded)
			{
				Destroy(canvasGroup);
			}
		}

		#endregion

		#region Static Play Methods

		public static WordNexus_UIAnimation PositionX(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.PositionX, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation PositionX(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.PositionX, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation PositionY(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.PositionY, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation PositionY(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.PositionY, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation ScaleX(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.ScaleX, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation ScaleX(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.ScaleX, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation ScaleY(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.ScaleY, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation ScaleY(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.ScaleY, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation RotationZ(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.RotationZ, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation RotationZ(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.RotationZ, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation Width(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.Width, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation Width(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.Width, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation Height(RectTransform rectT, float from, float to, float duration)
		{
			return CreateAnimation(Type.Height, rectT.gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation Height(RectTransform rectT, float to, float duration)
		{
			return CreateAnimation(Type.Height, rectT.gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation Alpha(GameObject gameObject, float to, float duration)
		{
			return CreateAnimation(Type.Alpha, gameObject, true, 0, to, duration);
		}

		public static WordNexus_UIAnimation Alpha(GameObject gameObject, float from, float to, float duration)
		{
			return CreateAnimation(Type.Alpha, gameObject, false, from, to, duration);
		}

		public static WordNexus_UIAnimation Color(Graphic graphic, Color to, float duration)
		{
			return CreateColorAnimation(graphic.gameObject, true, UnityEngine.Color.white, to, duration);
		}

		public static WordNexus_UIAnimation Color(Graphic graphic, Color from, Color to, float duration)
		{
			return CreateColorAnimation(graphic.gameObject, false, from, to, duration);
		}

		private static WordNexus_UIAnimation CreateAnimation(Type type, GameObject gameObject, bool useCurrentFrom, float from, float to, float duration)
		{
			WordNexus_UIAnimation uIAnimation = CreateUIAnimation(gameObject, type, duration, useCurrentFrom);

			if (!useCurrentFrom)
			{
				uIAnimation.fromValue = from;
			}

			uIAnimation.toValue = to;

			return uIAnimation;
		}

		private static WordNexus_UIAnimation CreateColorAnimation(GameObject gameObject, bool useCurrentFrom, Color from, Color to, float duration)
		{
			WordNexus_UIAnimation uIAnimation = CreateUIAnimation(gameObject, Type.Color, duration, useCurrentFrom);

			if (!useCurrentFrom)
			{
				uIAnimation.fromColor = from;
			}

			uIAnimation.toColor = to;

			return uIAnimation;
		}

		private static WordNexus_UIAnimation CreateUIAnimation(GameObject gameObject, Type type, float duration, bool useCurrentFrom)
		{
			WordNexus_UIAnimation uIAnimation = GetUIAnimation(gameObject, type);

			uIAnimation.duration = duration;
			uIAnimation.useCurrentFrom = useCurrentFrom;
			uIAnimation.destroyOnFinish = true;

			return uIAnimation;
		}

		private static WordNexus_UIAnimation GetUIAnimation(GameObject gameObject, Type type)
		{
			WordNexus_UIAnimation[] uIAnimations = gameObject.GetComponents<WordNexus_UIAnimation>();
			WordNexus_UIAnimation uIAnimation = null;

			for (int i = 0; i < uIAnimations.Length; i++)
			{

				if (uIAnimations[i] != null && !uIAnimations[i].isDestroyed && uIAnimations[i].type == type)
				{
					uIAnimation = uIAnimations[i];

					break;
				}
			}

			if (uIAnimation == null)
			{
				uIAnimation = gameObject.AddComponent<WordNexus_UIAnimation>();
				uIAnimation.type = type;
			}

			return uIAnimation;
		}

		#endregion
	}
}
