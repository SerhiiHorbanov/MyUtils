#pragma once
#include <array>
#include "CollectionToTextSerialization.h"

namespace My
{
    namespace MySerialization
    {
        template <typename ArrayElementType, int ArrayLength>
        std::string SerializeArray
        (
            std::array<ArrayElementType, ArrayLength> array,
            std::function<std::string(ArrayElementType)> ConvertArrayElementToString,
            std::string join = " -> "
        )
        {
            return SerializeCollection<std::array<ArrayElementType, ArrayLength>, ArrayElementType>
            (
                array,
                array.size(),
                [](std::array<ArrayElementType, ArrayLength> array, int index) -> ArrayElementType { return array[index]; },
                ConvertArrayElementToString,
                join
            );
        }
    }
}