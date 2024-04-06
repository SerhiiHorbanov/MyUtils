#include "Easings.h"
#include <cmath>
#include "MyMath.h"

using namespace MyUtils::MyMath;
using namespace std;
namespace MyUtils
{
    namespace MyEasings
    {
        float Linear(const const float x, const const float start, const const float end)
        {
            return LinearFromZeroToOne(x, start, end);
        }
        float LinearFromZeroToOne(const float x, const float start, const float end)
        {
            return (x - start) / (end - start);
        }
        float easeInSine(const float x)
        {
            return 1 - cos((x * Pi) / 2);
        }
        float easeOutSine(const float x)
        {
            return sin((x * Pi) / 2);
        }
        float easeInOutSine(const float x)
        {
            return -(cos(Pi * x) - 1) / 2;
        }
        float easeInQuad(const float x)
        {
            return x * x;
        }
        float easeOutQuad(const float x)
        {
            return 1 - ((1 - x) * (1 - x));
        }
        float easeInOutQuad(const float x)
        {
            return x < 0.5 ? 2 * x * x : 1 - pow(-2 * x + 2, 2) / 2;
        }
        float easeInCubic(const float x)
        {
            return x * x * x;
        }
        float easeOutCubic(const float x)
        {
            return 1 - pow(1 - x, 3);
        }
        float easeInOutCubic(const float x)
        {
            return x < 0.5 ? 4 * x * x * x : 1 - pow(-2 * x + 2, 3) / 2;
        }
        float easeInQuart(const float x)
        {
            return x * x * x * x;
        }
        float easeOutQuart(const float x)
        {
            return 1 - pow(1 - x, 4);
        }
        float easeInOutQuart(const float x)
        {
            return x < 0.5 ? 8 * x * x * x * x : 1 - pow(-2 * x + 2, 4) / 2;
        }
        float easeInQuint(const float x)
        {
            return x * x * x * x * x;
        }
        float easeOutQuint(const float x)
        {
            return 1 - pow(1 - x, 5);
        }
        float easeInOutQuint(const float x)
        {
            return x < 0.5 ? 16 * x * x * x * x * x : 1 - pow(-2 * x + 2, 5) / 2;
        }
        float easeInExpo(const float x)
        {
            return x == 0 ? 0 : pow(2, 10 * x - 10);
        }
        float easeOutExpo(const float x)
        {
            return x == 1 ? 1 : 1 - pow(2, -10 * x);
        }
        float easeInOutExpo(const float x)
        {
            return x == 0
                ? 0
                : x == 1
                ? 1
                : x < 0.5 ? pow(2, 20 * x - 10) / 2
                : (2 - pow(2, -20 * x + 10)) / 2;
        }
        float easeInPow(const float x, const float power)
        {
            return pow(x, power);
        }
        float easeOutPow(const float x, const float power)
        {
            return 1 - pow(1 - x, power);
        }
        float easeInOutPow(const float x, const float power)
        {
            return x < 0.5 ? pow(2, power) * pow(x, power) : 1 - pow(-2 * x + 2, power) / 2;
        }
        float easeInCirc(const float x)
        {
            return 1 - sqrt(1 - pow(x, 2));
        }
        float easeOutCirc(const float x)
        {
            return sqrt(1 - pow(x - 1, 2));
        }
        float easeInOutCirc(const float x)
        {
            return x < 0.5
                ? (1 - sqrt(1 - pow(2 * x, 2))) / 2
                : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
        }
        float easeInBack(const float x, const float c1 = 1.70158)
        {
            const const float c3 = c1 + 1;

            return c3 * x * x * x - c1 * x * x;
        }
        float easeOutBack(const float x, const float c1 = 1.70158)
        {
            const const float c3 = c1 + 1;

            return 1 + c3 * pow(x - 1, 3) + c1 * pow(x - 1, 2);
        }
        float easeInOutBack(const float x, const float c1 = 1.70158)
        {
            const float c2 = c1 * 1.525;

            return x < 0.5
                ? (pow(2 * x, 2) * ((c2 + 1) * 2 * x - c2)) / 2
                : (pow(2 * x - 2, 2) * ((c2 + 1) * (x * 2 - 2) + c2) + 2) / 2;
        }
        float easeInElastic(const float x)
        {
            const float c4 = (2 * Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : -pow(2, 10 * x - 10) * sin((x * 10 - 10.75) * c4);
        }
        float easeOutElastic(const float x)
        {
            const float c4 = (2 * Pi) / 3;

            return x == 0
                ? 0
                : x == 1
                ? 1
                : pow(2, -10 * x) * sin((x * 10 - 0.75) * c4) + 1;
        }
        float easeInOutElastic(const float x)
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
        float easeInBounce(const float x)
        {
            return 1 - easeOutBounce(1 - x);
        }
        float easeOutBounce(const float x)
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
        float easeInOutBounce(const float x)
        {
            return x < 0.5
                ? (1 - easeOutBounce(1 - 2 * x)) / 2
                : (1 + easeOutBounce(2 * x - 1)) / 2;
        }
    }
}