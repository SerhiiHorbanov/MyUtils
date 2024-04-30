#pragma once
#include <cmath>

namespace MyUtils
{
    namespace MyMath
    {
#pragma region DegreesAndRadiansConversion
        inline float fromDegreesToRadians(float degrees)
        {
            return degrees * DEGREES_TO_RADIANS_MULTIPLIER;
        }
        inline float ToRadians(float degrees)
        {
            fromDegreesToRadians(degrees);
        }

        inline float fromRadiansToDegrees(float radians)
        {
            return radians * RADIANS_TO_DEGREES_MULTIPLIER;
        }
        inline float ToDegrees(float radians)
        {
            fromRadiansToDegrees(radians);
        }
#pragma endregion

#pragma region DistanceCalculation
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        float distanceSquared(float X1, float Y1, float X2 = 0, float Y2 = 0);
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float distSq(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return distanceSquared(X1, Y1, X2, Y2);
        }
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float distance(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return std::sqrtf(distanceSquared(X1, Y1, X2, Y2));
        }
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float dist(float X1, float Y1, float X2 = 0, float Y2 = 0)
        {
            return distance(X1, Y1, X2, Y2);
        }
#pragma endregion
    }
}