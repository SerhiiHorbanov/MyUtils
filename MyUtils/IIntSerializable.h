#pragma once

namespace My
{
    namespace MySerialization
    {
        struct IIntSerializable
        {
        public:
            virtual int ToInt() = 0;
        };
    }
}