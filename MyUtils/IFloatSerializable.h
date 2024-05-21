#pragma once

namespace MyUtils
{
    namespace MySerialization
    {
        struct IFloatSerializable
        {
        public:
            virtual float ToFloat() = 0;
        };
    }
}