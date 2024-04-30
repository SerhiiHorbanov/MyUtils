#pragma once
#include "Constants.h"

namespace MyUtils
{
    namespace MyMath
    {
        namespace AngleUtils
        {
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
        }
    }
}