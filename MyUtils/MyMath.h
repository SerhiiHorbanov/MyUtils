#pragma once
#include <cmath>

namespace MyUtils
{
    namespace MyMath
    {
#pragma region DistanceCalculation
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        float DistanceSquared(float X1, float Y1, float X2 = 0, float Y2 = 0);
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float DistSq(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return DistanceSquared(X1, Y1, X2, Y2);
        }
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float Distance(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return std::sqrtf(DistanceSquared(X1, Y1, X2, Y2));
        }
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float Dist(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return Distance(X1, Y1, X2, Y2);
        }
#pragma endregion
    }
}