#pragma once

namespace MyUtils
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