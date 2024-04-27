#include <string>
#include "MyVector2.h"

namespace MyUtils
{
    namespace MyMath
    {
        template <typename T>
        std::string MyVector2<T>::ToString()
        {
            return "MyVector2(" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }

        template<typename T>
        static MyVector2<T> MyVector2<T>::PolarToCartesian(float length, float angleRadians)
        {
            float x = cos(angleRadians) * length;
            float y = sin(angleRadians) * length;
            return MyVector2<T>(x, y);
        }
    }
}