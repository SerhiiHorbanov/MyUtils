#include "Easings.h"
#include <cmath>
#include "MyMath.h"
#include "Constants.h"

using namespace MyUtils::MyMath;
using namespace std;
namespace MyUtils
{
    namespace MyEasings
    {
        /// <returns>(x - start) / (end - start) </returns>
        float Linear(const const float x, const const float start, const const float end)
        {
            return LinearFromZeroToOne(x, start, end);
        }
        /// <returns>(x - start) / (end - start) </returns>
        float LinearFromZeroToOne(const float x, const float start, const float end)
        {
            return (x - start) / (end - start);
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInSine
        /// </summary>
        /// <returns>1 - cos((x * Pi) / 2)</returns>
        float EaseInSine(const float x)
        {
            return 1 - cos((x * Pi) / 2);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutSine
        /// </summary>
        /// <returns>sin((x * Pi) / 2)</returns>
        float EaseOutSine(const float x)
        {
            return sin((x * Pi) / 2);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeInOutSine
        /// </summary>
        float EaseInOutSine(const float x)
        {
            return -(cos(Pi * x) - 1) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInQuad
        /// </summary>
        /// <returns>x * x</returns>
        float EaseInQuad(const float x)
        {
            return x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuad
        /// </summary>
        /// <returns>1 - ((1 - x) * (1 - x))</returns>
        float EaseOutQuad(const float x)
        {
            return 1 - ((1 - x) * (1 - x));
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuad
        /// </summary>
        float EaseInOutQuad(const float x)
        {
            return x < 0.5 ? 2 * x * x : 1 - pow(-2 * x + 2, 2) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInCubic
        /// </summary>
        /// <returns>x * x * x</returns>
        float EaseInCubic(const float x)
        {
            return x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutCubic
        /// </summary>
        /// <returns>1 - pow(1 - x, 3)</returns>
        float EaseOutCubic(const float x)
        {
            return 1 - pow(1 - x, 3);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutCubic
        /// </summary>
        float EaseInOutCubic(const float x)
        {
            return x < 0.5 ? 4 * x * x * x : 1 - pow(-2 * x + 2, 3) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInQuart
        /// </summary>
        /// <returns>x * x * x * x</returns>
        float EaseInQuart(const float x)
        {
            return x * x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuart
        /// </summary>
        /// <returns>1 - pow(1 - x, 4)</returns>
        float EaseOutQuart(const float x)
        {
            return 1 - pow(1 - x, 4);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuart
        /// </summary>
        float EaseInOutQuart(const float x)
        {
            return x < 0.5 ? 8 * x * x * x * x : 1 - pow(-2 * x + 2, 4) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInQuint
        /// </summary>
        /// <returns>x * x * x * x * x</returns>
        float EaseInQuint(const float x)
        {
            return x * x * x * x * x;
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutQuint
        /// </summary>
        /// <returns>1 - pow(1 - x, 5)</returns>
        float EaseOutQuint(const float x)
        {
            return 1 - pow(1 - x, 5);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutQuint
        /// </summary>
        float EaseInOutQuint(const float x)
        {
            return x < 0.5 ? 16 * x * x * x * x * x : 1 - pow(-2 * x + 2, 5) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInExpo
        /// </summary>
        /// <returns>x == 0 ? 0 : pow(2, 10 * x - 10)</returns>
        float EaseInExpo(const float x)
        {
            return x == 0 ? 0 : pow(2, 10 * x - 10);
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutExpo
        /// </summary>
        /// <returns>x == 1 ? 1 : 1 - pow(2, -10 * x)</returns>
        float EaseOutExpo(const float x)
        {
            return x == 1 ? 1 : 1 - pow(2, -10 * x);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutExpo
        /// </summary>
        float EaseInOutExpo(const float x)
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
        float EaseInPow(const float x, const float power)
        {
            return pow(x, power);
        }
        /// <summary>
        /// does the same thig what easeOutQuad or easeOutCubic or easeOutQuart or easeOutQuint do but with any power of the function
        /// </summary>
        /// <returns>1 - pow(1 - x, power)</returns>
        float EaseOutPow(const float x, const float power)
        {
            return 1 - pow(1 - x, power);
        }
        /// <summary>
        /// a complex easing function. does the same thig what easeInOutQuad or easeInOutCubic or easeInOutQuart or easeInOutQuint do but with any power of the function
        /// </summary>
        float EaseInOutPow(const float x, const float power)
        {
            return x < 0.5 ? pow(2, power) * pow(x, power) : 1 - pow(-2 * x + 2, power) / 2;
        }

        /// <summary>
        /// visual reference: https://easings.net/#easeInCirc
        /// </summary>
        /// <returns>1 - sqrt(1 - pow(x, 2))</returns>
        float EaseInCirc(const float x)
        {
            return 1 - sqrt(1 - pow(x, 2));
        }
        /// <summary>
        /// visual reference: https://easings.net/#easeOutCirc
        /// </summary>
        /// <returns>sqrt(1 - pow(x - 1, 2))</returns>
        float EaseOutCirc(const float x)
        {
            return sqrt(1 - pow(x - 1, 2));
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutCirc
        /// </summary>
        float EaseInOutCirc(const float x)
        {
            return x < 0.5
                ? (1 - sqrt(1 - pow(2 * x, 2))) / 2
                : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
        }

        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInBack
        /// </summary>
        float EaseInBack(const float x)
        {
            return EaseInBack(x, 1.70158);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutBack
        /// </summary>
        float EaseOutBack(const float x)
        {
            return EaseOutBack(x, 1.70158);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutBack
        /// </summary>
        float EaseInOutBack(const float x)
        {
            return EaseInOutBack(x, 1.70158);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInBack
        /// </summary>
        float EaseInBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return c3 * x * x * x - c1 * x * x;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutBack
        /// </summary>
        float EaseOutBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return 1 + c3 * pow(x - 1, 3) + c1 * pow(x - 1, 2);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutBack
        /// </summary>
        float EaseInOutBack(const float x, const float c1)
        {
            const float c2 = c1 * 1.525;

            return x < 0.5
                ? (pow(2 * x, 2) * ((c2 + 1) * 2 * x - c2)) / 2
                : (pow(2 * x - 2, 2) * ((c2 + 1) * (x * 2 - 2) + c2) + 2) / 2;
        }

        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInElastic
        /// </summary>
        float EaseInElastic(const float x)
        {
            const float c4 = (2 * Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : -pow(2, 10 * x - 10) * sin((x * 10 - 10.75) * c4);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutElastic
        /// </summary>
        float EaseOutElastic(const float x)
        {
            const float c4 = (2 * Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInOutElastic
        /// </summary>
        float EaseInOutElastic(const float x)
        {
            const float c5 = (2 * Pi) / 4.5;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5
                ? -(pow(2, 20 * x - 10) * sin((20 * x - 11.125) * c5)) / 2
                : (pow(2, -20 * x + 10) * sin((20 * x - 11.125) * c5)) / 2 + 1;
        }

        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeInBounce
        /// </summary>
        float EaseInBounce(const float x)
        {
            return 1 - EaseOutBounce(1 - x);
        }
        /// <summary>
        /// a complex easing function. reference: https://easings.net/#easeOutBounce
        /// </summary>
        float EaseOutBounce(const float x)
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
        /// a complex easing function. reference: https://easings.net/#easeInOutBounce
        /// </summary>
        float EaseInOutBounce(const float x)
        {
            return x < 0.5
                ? (1 - EaseOutBounce(1 - 2 * x)) / 2
                : (1 + EaseOutBounce(2 * x - 1)) / 2;
        }

        std::string GetEasingFunctionNameByPointer(float(* const function)(float), const std::string defaultName)
        {
            for (int i = 0; i < 30; i++)
            {
                if (function == EasingFunctionsPointersWithOneParam[i])
                {
                    return EasingFunctionsWithOneParamNames[i];
                }
            }
            return defaultName;

        }

        float (*GetEasingFunctionByName(const std::string name, float (*defaultFunction)(float)))(float)
        {
            for (int i = 0; i < 30; i++)
            {
                if (name == EasingFunctionsWithOneParamNames[i])
                {
                    return EasingFunctionsPointersWithOneParam[i];
                }
            }
            return defaultFunction;
        }
    }
}