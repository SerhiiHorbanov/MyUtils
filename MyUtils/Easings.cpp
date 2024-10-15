#include <cmath>
#include "Constants.h"
#include "Easings.h"

namespace My
{
    namespace Math
    {
        float EaseInSine(const float x)
        {
            return 1 - cos((x * Math::PI) / 2);
        }
        float EaseOutSine(const float x)
        {
            return sin((x * Math::PI) / 2);
        }
        float EaseInOutSine(const float x)
        {
            return -(cos(Math::PI * x) - 1) / 2;
        }

        float EaseInQuad(const float x)
        {
            return x * x;
        }
        float EaseOutQuad(const float x)
        {
            return 1 - ((1 - x) * (1 - x));
        }
        float EaseInOutQuad(const float x)
        {
            return x < 0.5 ? 2 * x * x : 1 - pow(-2 * x + 2, 2) / 2;
        }

        float EaseInCubic(const float x)
        {
            return x * x * x;
        }
        float EaseOutCubic(const float x)
        {
            return 1 - pow(1 - x, 3);
        }
        float EaseInOutCubic(const float x)
        {
            return x < 0.5 ? 4 * x * x * x : 1 - pow(-2 * x + 2, 3) / 2;
        }

        float EaseInQuart(const float x)
        {
            return x * x * x * x;
        }
        float EaseOutQuart(const float x)
        {
            return 1 - pow(1 - x, 4);
        }
        float EaseInOutQuart(const float x)
        {
            return x < 0.5 ? 8 * x * x * x * x : 1 - pow(-2 * x + 2, 4) / 2;
        }

        float EaseInQuint(const float x)
        {
            return x * x * x * x * x;
        }
        float EaseOutQuint(const float x)
        {
            return 1 - pow(1 - x, 5);
        }
        float EaseInOutQuint(const float x)
        {
            return x < 0.5 ? 16 * x * x * x * x * x : 1 - pow(-2 * x + 2, 5) / 2;
        }

        float EaseInExpo(const float x)
        {
            return x == 0 ? 0 : pow(2, 10 * x - 10);
        }
        float EaseOutExpo(const float x)
        {
            return x == 1 ? 1 : 1 - pow(2, -10 * x);
        }
        float EaseInOutExpo(const float x)
        {
            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5 ? pow(2, 20 * x - 10) / 2
                : (2 - pow(2, -20 * x + 10)) / 2;
        }

        float EaseInPow(const float x, const float power)
        {
            return pow(x, power);
        }
        float EaseOutPow(const float x, const float power)
        {
            return 1 - pow(1 - x, power);
        }
        float EaseInOutPow(const float x, const float power)
        {
            return x < 0.5 ? pow(2, power) * pow(x, power) : 1 - pow(-2 * x + 2, power) / 2;
        }
        
        float EaseInCirc(const float x)
        {
            return 1 - sqrt(1 - pow(x, 2));
        }
        float EaseOutCirc(const float x)
        {
            return sqrt(1 - pow(x - 1, 2));
        }
        float EaseInOutCirc(const float x)
        {
            return x < 0.5
                ? (1 - sqrt(1 - pow(2 * x, 2))) / 2
                : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
        }

        float EaseInBack(const float x)
        {
            return EaseInBack(x, 1.70158);
        }
        float EaseOutBack(const float x)
        {
            return EaseOutBack(x, 1.70158);
        }
        float EaseInOutBack(const float x)
        {
            return EaseInOutBack(x, 1.70158);
        }
        float EaseInBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return c3 * x * x * x - c1 * x * x;
        }
        float EaseOutBack(const float x, const float c1)
        {
            const const float c3 = c1 + 1;

            return 1 + c3 * pow(x - 1, 3) + c1 * pow(x - 1, 2);
        }
        float EaseInOutBack(const float x, const float c1)
        {
            const float c2 = c1 * 1.525;

            return x < 0.5
                ? (pow(2 * x, 2) * ((c2 + 1) * 2 * x - c2)) / 2
                : (pow(2 * x - 2, 2) * ((c2 + 1) * (x * 2 - 2) + c2) + 2) / 2;
        }

        float EaseInElastic(const float x)
        {
            const float c4 = (2 * Math::PI) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : -pow(2, 10 * x - 10) * sin((x * 10 - 10.75) * c4);
        }
        float EaseOutElastic(const float x)
        {
            const float c4 = (2 * Math::PI) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
        }
        float EaseInOutElastic(const float x)
        {
            const float c5 = (2 * Math::PI) / 4.5;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5
                ? -(pow(2, 20 * x - 10) * sin((20 * x - 11.125) * c5)) / 2
                : (pow(2, -20 * x + 10) * sin((20 * x - 11.125) * c5)) / 2 + 1;
        }

        float EaseInBounce(const float x)
        {
            return 1 - EaseOutBounce(1 - x);
        }
        float EaseOutBounce(const float x)
        {
            const float n1 = 7.5625;
            const float d1 = 2.75;

            if (x < 1 / d1) 
                return n1 * x * x;
            else if (x < 2 / d1) 
                return n1 * ((x - 1.5) / d1) * (x - 1.5) + 0.75;
            else if (x < 2.5 / d1) 
                return n1 * ((x - 2.25) / d1) * (x - 2.25) + 0.9375;
            else 
                return n1 * ((x - 2.625) / d1) * (x - 2.625) + 0.984375;
        }
        float EaseInOutBounce(const float x)
        {
            return x < 0.5
                ? (1 - EaseOutBounce(1 - 2 * x)) / 2
                : (1 + EaseOutBounce(2 * x - 1)) / 2;
        }
    }
}