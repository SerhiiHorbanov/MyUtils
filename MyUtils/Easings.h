#pragma once
namespace MyUtils
{
    namespace MyEasings
    {
        float Linear(const const float x, const const float start, const const float end);
        float LinearFromZeroToOne(const float x, const float start, const float end);

        float easeInSine(const float x);
        float easeOutSine(const float x);
        float easeInOutSine(const float x);

        float easeInQuad(const float x);
        float easeOutQuad(const float x);
        float easeInOutQuad(const float x);

        float easeInCubic(const float x);
        float easeOutCubic(const float x);
        float easeInOutCubic(const float x);

        float easeInQuart(const float x);
        float easeOutQuart(const float x);
        float easeInOutQuart(const float x);

        float easeInQuint(const float x);
        float easeOutQuint(const float x);
        float easeInOutQuint(const float x);

        float easeInExpo(const float x);
        float easeOutExpo(const float x);
        float easeInOutExpo(const float x);

        float easeInPow(const float x, const float pow);
        float easeOutPow(const float x, const float pow);
        float easeInOutPow(const float x, const float pow);

        float easeInCirc(const float x);
        float easeOutCirc(const float x);
        float easeInOutCirc(const float x);

        float easeInBack(const float x, const float c1 = 1.70158);
        float easeOutBack(const float x, const float c1 = 1.70158);
        float easeInOutBack(const float x, const float c1 = 1.70158);

        float easeInElastic(const float x);
        float easeOutElastic(const float x);
        float easeInOutElastic(const float x);

        float easeInBounce(const float x);
        float easeOutBounce(const float x);
        float easeInOutBounce(const float x);
    }
}