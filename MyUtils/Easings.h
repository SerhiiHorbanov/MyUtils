#pragma once
#include <string>

namespace MyUtils
{
    namespace MyEasings
    {
        float Linear(const float x, const float start = 0, const float end = 1);
        float LinearFromZeroToOne(const float x, const float start = 0, const float end = 1);

        float EaseInSine(const float x);
        float EaseOutSine(const float x);
        float EaseInOutSine(const float x);

        float EaseInQuad(const float x);
        float EaseOutQuad(const float x);
        float EaseInOutQuad(const float x);

        float EaseInCubic(const float x);
        float EaseOutCubic(const float x);
        float EaseInOutCubic(const float x);

        float EaseInQuart(const float x);
        float EaseOutQuart(const float x);
        float EaseInOutQuart(const float x);

        float EaseInQuint(const float x);
        float EaseOutQuint(const float x);
        float EaseInOutQuint(const float x);

        float EaseInExpo(const float x);
        float EaseOutExpo(const float x);
        float EaseInOutExpo(const float x);

        float EaseInPow(const float x, const float pow);
        float EaseOutPow(const float x, const float pow);
        float EaseInOutPow(const float x, const float pow);

        float EaseInCirc(const float x);
        float EaseOutCirc(const float x);
        float EaseInOutCirc(const float x);

        float EaseInBack(const float x);
        float EaseOutBack(const float x);
        float EaseInOutBack(const float x);
        float EaseInBack(const float x, const float c1);
        float EaseOutBack(const float x, const float c1);
        float EaseInOutBack(const float x, const float c1);

        float EaseInElastic(const float x);
        float EaseOutElastic(const float x);
        float EaseInOutElastic(const float x);

        float EaseInBounce(const float x);
        float EaseOutBounce(const float x);
        float EaseInOutBounce(const float x);

        float (*const EasingFunctionsPointersWithOneParam[30])(float) =
        {
            EaseInSine, EaseOutSine, EaseInOutSine,
            EaseInQuad, EaseOutQuad, EaseInOutQuad,
            EaseInCubic, EaseOutCubic, EaseInOutCubic,
            EaseInQuart, EaseOutQuart, EaseInOutQuart,
            EaseInQuint, EaseOutQuint, EaseInOutQuint,
            EaseInExpo, EaseOutExpo, EaseInOutExpo,
            EaseInCirc, EaseOutCirc, EaseInOutCirc,
            EaseInBack, EaseOutBack, EaseInOutBack,
            EaseInElastic, EaseOutElastic, EaseInOutElastic,
            EaseInBounce, EaseOutBounce, EaseInOutBounce,
        };

        const std::string EasingFunctionsWithOneParamNames[30] =
        {
            "EaseInSine", "EaseOutSine", "EaseInOutSine",
            "EaseInQuad", "EaseOutQuad", "EaseInOutQuad",
            "EaseInCubic", "EaseOutCubic", "EaseInOutCubic",
            "EaseInQuart", "EaseOutQuart", "EaseInOutQuart",
            "EaseInQuint", "EaseOutQuint", "EaseInOutQuint",
            "EaseInExpo", "EaseOutExpo", "EaseInOutExpo",
            "EaseInCirc", "EaseOutCirc", "EaseInOutCirc",
            "EaseInBack", "EaseOutBack", "EaseInOutBack",
            "EaseInElastic", "EaseOutElastic", "EaseInOutElastic",
            "EaseInBounce", "EaseOutBounce", "EaseInOutBounce",
        };

        std::string GetEasingFunctionNameByPointer(float (*const function)(float), const std::string defaultName = "");

        float (*GetEasingFunctionByName(const std::string name, float (*defaultFunction)(float) = EaseInOutQuad))(float);//function that returns pointer to a function
    }
}