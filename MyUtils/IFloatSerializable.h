#pragma once

namespace My
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