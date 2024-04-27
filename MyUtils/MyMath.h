#pragma once
#include <cmath>

namespace MyUtils
{
    namespace MyMath
    {
#pragma region Constants
        constexpr double dPi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;// :gdnormal:
        constexpr double dTwoPi = dPi * 2;
        constexpr double dTao = dTwoPi;

        constexpr float Pi = dPi;
        constexpr float TwoPi = dPi * 2;
        constexpr float Tao = dTwoPi;

        constexpr int COMPLETE_ANGLE = 360;
        constexpr int STRAIGH_ANGLE = 180;
        constexpr int RIGHT_ANGLE = 90;

        /// <summary>
        /// to convert angles to radians you can just multiply angles by ANGLES_TO_RADIANS_MULTIPLIER
        /// </summary>
        constexpr float DEGREES_TO_RADIANS_MULTIPLIER = COMPLETE_ANGLE / dTwoPi;
        /// <summary>
        /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
        /// </summary>
        constexpr float RADIANS_TO_DEGREES_MULTIPLIER = dTwoPi / COMPLETE_ANGLE;
        /// <summary>
        /// to convert angles to radians you can just multiply angles by ANGLES_TO_RADIANS_MULTIPLIER
        /// </summary>
        constexpr double dDEGREES_TO_RADIANS_MULTIPLIER = COMPLETE_ANGLE / dTwoPi;
        /// <summary>
        /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
        /// </summary>
        constexpr double dRADIANS_TO_DEGREES_MULTIPLIER = dTwoPi / COMPLETE_ANGLE;
#pragma endregion

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