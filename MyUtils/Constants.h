#pragma once
namespace MyUtils
{
    namespace MyMath
    {
        constexpr double dPI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;// :gdnormal:
        constexpr double dTWO_PI = dPI * 2;
        constexpr double dTAO = dTWO_PI;

        constexpr float PI = dPI;
        constexpr float TWO_PI = dPI * 2;
        constexpr float TAO = dTWO_PI;

        constexpr int COMPLETE_ANGLE = 360;
        constexpr int STRAIGH_ANGLE = 180;
        constexpr int RIGHT_ANGLE = 90;
    }
}