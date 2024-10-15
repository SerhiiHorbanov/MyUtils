#include "MyVector2.h"
#include "Angle.h"

namespace My
{
	namespace Math
	{
		/// <summary>
		/// Calculates MyVector2 from it's angle and length
		/// </summary>
		/// <returns>Vector with coordinates 
		///x = cos(angle) * length,
		///y = sin(angle) * length
		///</returns>
		template <typename T>
		MyVector2<T> PolarToCartesian(float length, Angle angle)
		{
			float x = cos(angle.Radians()) * length;
			float y = sin(angle.Radians()) * length;
			return MyVector2<T>(x, y);
		}
	}
}