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
    }
}