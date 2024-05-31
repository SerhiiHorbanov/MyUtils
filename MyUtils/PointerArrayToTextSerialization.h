#pragma once
#include "CollectionToTextSerialization.h"

namespace MyUtils
{
    namespace MySerialization
    {
        template <typename ArrayElementType>
        std::string SerializePointerArray
        (
            ArrayElementType* array,
            int elementsAmount,
            std::function<std::string(ArrayElementType)> ConvertCollectionElementToString,
            std::string join = " -> "
        )
        {
            return SerializeCollection<std::vector<VectorElementType>, VectorElementType>
            (
                array,
                elementsAmount,
                [](ArrayElementType* array, int index) -> ArrayElementType { return array[index]; },
                ConvertCollectionElementToString,
                join
            );
        }
    }
}