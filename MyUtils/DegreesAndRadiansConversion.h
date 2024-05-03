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
            constexpr float DEGREES_TO_RADIANS_MULTIPLIER = COMPLETE_ANGLE / dTWO_PI;
            /// <summary>
            /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
            /// </summary>
            constexpr float RADIANS_TO_DEGREES_MULTIPLIER = dTWO_PI / COMPLETE_ANGLE;
            /// <summary>
            /// to convert angles to radians you can just multiply angles by ANGLES_TO_RADIANS_MULTIPLIER
            /// </summary>
            constexpr double dDEGREES_TO_RADIANS_MULTIPLIER = COMPLETE_ANGLE / dTWO_PI;
            /// <summary>
            /// to convert radians to angles you can just multiply radians by RADIANS_TO_ANGLES_MULTIPLIER
            /// </summary>
            constexpr double dRADIANS_TO_DEGREES_MULTIPLIER = dTWO_PI / COMPLETE_ANGLE;

            inline float FromDegreesToRadians(float degrees)
            {
                return degrees * DEGREES_TO_RADIANS_MULTIPLIER;
            }
            inline float ToRadians(float degrees)
            {
                FromDegreesToRadians(degrees);
            }

            inline float FromRadiansToDegrees(float radians)
            {
                return radians * RADIANS_TO_DEGREES_MULTIPLIER;
            }
            inline float ToDegrees(float radians)
            {
                FromRadiansToDegrees(radians);
            }
        }
    }
}