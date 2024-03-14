#pragma once
namespace MyUtils
{
    namespace MyMath
    {
        const double Pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;// :gdnormal:
        /// <summary>
        /// to convert angles to radians you can just multiply angles by ANGLES_TO_RADIANS_MULTIPLIER
        /// </summary>
        const double ANGLES_TO_RADIANS_MULTIPLIER = 180 / Pi;
        /// <summary>
        /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
        /// </summary>
        const float RADIANS_TO_ANGLES_MULTIPLIER = Pi / 180;

        inline float fromAnglesToRadians(float angles);
        inline float ToRadians(float angles);

        inline float fromRadiansToAngles(float radians);
        inline float ToAngles(float radians);
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float distance(float X1, float Y1, float X2, float Y2);
        /// <summary>
        /// distance between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float dist(float X1, float Y1, float X2, float Y2);
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        float distanceSquared(float X1, float Y1, float X2, float Y2);
        /// <summary>
        /// distance squared between two points with coords (X1, Y1) and (X2, Y2)
        /// </summary>
        inline float distSq(float X1, float Y1, float X2, float Y2);
    }
}