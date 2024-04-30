#pragma once
namespace MyUtils
{
    namespace MyMath
    {
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
    }
}