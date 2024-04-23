#pragma once
#include <cmath>
#include "MyMath.h"

namespace MyUtils
{
    namespace MyEasings
    {
        /// <returns>(x - start) / (end - start) </returns>
        inline float LinearFromZeroToOne(const float x, const float start, const float end)
        {
            return (x - start) / (end - start);
        }
        /// <returns>(x - start) / (end - start) </returns>
        inline float Linear(const const float x, const const float start, const const float end)
        {
            return LinearFromZeroToOne(x, start, end);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInSine
        /// </summary>
        /// <returns>1 - cos((x * Pi) / 2)</returns>
        inline float easeInSine(const float x)
        {
            return 1 - cos((x * MyUtils::MyMath::Pi) / 2);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutSine
        /// </summary>
        /// <returns>sin((x * Pi) / 2)</returns>
        inline float easeOutSine(const float x)
        {
            return sin((x * MyUtils::MyMath::Pi) / 2);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInOutSine
        /// </summary>
        inline float easeInOutSine(const float x)
        {
            return -(cos(MyUtils::MyMath::Pi * x) - 1) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInQuad
        /// </summary>
        /// <returns>x * x</returns>
        inline float easeInQuad(const float x)
        {
            return x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuad
        /// </summary>
        /// <returns>1 - ((1 - x) * (1 - x))</returns>
        inline float easeOutQuad(const float x)
        {
            return 1 - ((1 - x) * (1 - x));
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuad
        /// </summary>
        inline float easeInOutQuad(const float x)
        {
            return x < 0.5 ? 2 * x * x : 1 - pow(-2 * x + 2, 2) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInCubic
        /// </summary>
        /// <returns>x * x * x</returns>
        inline float easeInCubic(const float x)
        {
            return x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutCubic
        /// </summary>
        /// <returns>1 - pow(1 - x, 3)</returns>
        inline float easeOutCubic(const float x)
        {
            return 1 - pow(1 - x, 3);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutCubic
        /// </summary>
        inline float easeInOutCubic(const float x)
        {
            return x < 0.5 ? 4 * x * x * x : 1 - pow(-2 * x + 2, 3) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInQuart
        /// </summary>
        /// <returns>x * x * x * x</returns>
        inline float easeInQuart(const float x)
        {
            return x * x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuart
        /// </summary>
        /// <returns>1 - pow(1 - x, 4)</returns>
        inline float easeOutQuart(const float x)
        {
            return 1 - pow(1 - x, 4);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuart
        /// </summary>
        inline float easeInOutQuart(const float x)
        {
            return x < 0.5 ? 8 * x * x * x * x : 1 - pow(-2 * x + 2, 4) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInQuint
        /// </summary>
        /// <returns>x * x * x * x * x</returns>
        inline float easeInQuint(const float x)
        {
            return x * x * x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuint
        /// </summary>
        /// <returns>1 - pow(1 - x, 5)</returns>
        inline float easeOutQuint(const float x)
        {
            return 1 - pow(1 - x, 5);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuint
        /// </summary>
        inline float easeInOutQuint(const float x)
        {
            return x < 0.5 ? 16 * x * x * x * x * x : 1 - pow(-2 * x + 2, 5) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInExpo
        /// </summary>
        /// <returns>x == 0 ? 0 : pow(2, 10 * x - 10)</returns>
        inline float easeInExpo(const float x)
        {
            return x == 0 ? 0 : pow(2, 10 * x - 10);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutExpo
        /// </summary>
        /// <returns>x == 1 ? 1 : 1 - pow(2, -10 * x)</returns>
        inline float easeOutExpo(const float x)
        {
            return x == 1 ? 1 : 1 - pow(2, -10 * x);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutExpo
        /// </summary>
        inline float easeInOutExpo(const float x)
        {
            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5 ? pow(2, 20 * x - 10) / 2
                : (2 - pow(2, -20 * x + 10)) / 2;
        }
        /// <summary>
        /// does the same thig what easeInQuad or easeInCubic or easeInQuart or easeInQuint do but with any power of the function
        /// </summary>
        /// <returns>pow(x, power)</returns>
        inline float easeInPow(const float x, const float power)
        {
            return pow(x, power);
        }
        /// <summary>
        /// does the same thig what easeOutQuad or easeOutCubic or easeOutQuart or easeOutQuint do but with any power of the function
        /// </summary>
        /// <returns>1 - pow(1 - x, power)</returns>
        inline float easeOutPow(const float x, const float power)
        {
            return 1 - pow(1 - x, power);
        }
        /// <summary>
        /// a complex easing function. does the same thig what easeInOutQuad or easeInOutCubic or easeInOutQuart or easeInOutQuint do but with any power of the function
        /// </summary>
        inline float easeInOutPow(const float x, const float power)
        {
            return x < 0.5 ? pow(2, power) * pow(x, power) : 1 - pow(-2 * x + 2, power) / 2;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInCirc
        /// </summary>
        /// <returns>1 - sqrt(1 - pow(x, 2))</returns>
        inline float easeInCirc(const float x)
        {
            return 1 - sqrt(1 - pow(x, 2));
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutCirc
        /// </summary>
        /// <returns>sqrt(1 - pow(x - 1, 2))</returns>
        inline float easeOutCirc(const float x)
        {
            return sqrt(1 - pow(x - 1, 2));
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutCirc
        /// </summary>
        inline float easeInOutCirc(const float x)
        {
            return x < 0.5
                ? (1 - sqrt(1 - pow(2 * x, 2))) / 2
                : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInBack
        /// </summary>
        inline float easeInBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return c3 * x * x * x - c1 * x * x;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutBack
        /// </summary>
        inline float easeOutBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return 1 + c3 * pow(x - 1, 3) + c1 * pow(x - 1, 2);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutBack
        /// </summary>
        inline float easeInOutBack(const float x, const float c1)
        {
            const float c2 = c1 * 1.525;

            return x < 0.5
                ? (pow(2 * x, 2) * ((c2 + 1) * 2 * x - c2)) / 2
                : (pow(2 * x - 2, 2) * ((c2 + 1) * (x * 2 - 2) + c2) + 2) / 2;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInElastic
        /// </summary>
        inline float easeInElastic(const float x)
        {
            const float c4 = (2 * MyUtils::MyMath::Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : -pow(2, 10 * x - 10) * sin((x * 10 - 10.75) * c4);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutElastic
        /// </summary>
        inline float easeOutElastic(const float x)
        {
            const float c4 = (2 * MyUtils::MyMath::Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutElastic
        /// </summary>
        inline float easeInOutElastic(const float x)
        {
            const float c5 = (2 * MyUtils::MyMath::Pi) / 4.5;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5
                ? -(pow(2, 20 * x - 10) * sin((20 * x - 11.125) * c5)) / 2
                : (pow(2, -20 * x + 10) * sin((20 * x - 11.125) * c5)) / 2 + 1;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutBounce
        /// </summary>
        inline float easeOutBounce(const float x)
        {
            const float n1 = 7.5625;
            const float d1 = 2.75;

            if (x < 1 / d1)
            {
                return n1 * x * x;
            }
            else if (x < 2 / d1)
            {
                return n1 * ((x - 1.5) / d1) * (x - 1.5) + 0.75;
            }
            else if (x < 2.5 / d1)
            {
                return n1 * ((x - 2.25) / d1) * (x - 2.25) + 0.9375;
            }
            else
            {
                return n1 * ((x - 2.625) / d1) * (x - 2.625) + 0.984375;
            }
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInBounce
        /// </summary>
        inline float easeInBounce(const float x)
        {
            return 1 - easeOutBounce(1 - x);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutBounce
        /// </summary>
        inline float easeInOutBounce(const float x)
        {
            return x < 0.5
                ? (1 - easeOutBounce(1 - 2 * x)) / 2
                : (1 + easeOutBounce(2 * x - 1)) / 2;
        }
    }
}