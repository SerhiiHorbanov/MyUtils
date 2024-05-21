#pragma once

//i wanna make a macro for that can define those ISomethingSerializable interfaces

#include <string>
namespace MyUtils
{
    namespace MySerialization
    {
        struct IStringSerializable
        {
        public:
            virtual std::string ToString() = 0;
        };
    }
}