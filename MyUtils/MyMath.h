#pragma once
#include <cmath>

namespace MyUtils
{
    namespace MyMath
    {
#pragma region Constants
        const double Pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;// :gdnormal:
        const double TwoPi = Pi * 2;
        const double Tao = TwoPi;

        const int COMPLETE_ANGLE = 360;
        const int STRAIGH_ANGLE = 180;
        const int RIGHT_ANGLE = 90;

        /// <summary>
        /// to convert angles to radians you can just multiply angles by ANGLES_TO_RADIANS_MULTIPLIER
        /// </summary>
        const double ANGLES_TO_RADIANS_MULTIPLIER = STRAIGH_ANGLE / Pi;
        /// <summary>
        /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
        /// </summary>
        const double RADIANS_TO_ANGLES_MULTIPLIER = Pi / STRAIGH_ANGLE;
#pragma endregion

#pragma region AnglesAndRadiansConversion
        inline float fromAnglesToRadians(float angles)
        {
            return angles * ANGLES_TO_RADIANS_MULTIPLIER;
        }
        inline float ToRadians(float angles)
        {
            fromAnglesToRadians(angles);
        }

        inline float fromRadiansToAngles(float radians)
        {
            return radians * RADIANS_TO_ANGLES_MULTIPLIER;
        }
        inline float ToAngles(float radians)
        {
            fromRadiansToAngles(radians);
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