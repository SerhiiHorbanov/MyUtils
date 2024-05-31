#pragma once
#include <vector>
#include "CollectionToTextSerialization.h"

namespace MyUtils
{
    namespace MySerialization
    {
        template <typename VectorElementType>
        std::string SerializeVector
        (
            std::vector<VectorElementType> vector,
            std::function<std::string(VectorElementType)> ConvertCollectionElementToString,
            std::string join = " -> "
        )
        {
            return SerializeCollection<std::vector<VectorElementType>, VectorElementType>
            (
                vector,
                vector.size(),
                [](std::vector<VectorElementType> vector, int index) -> VectorElementType { return vector[index]; },
                ConvertCollectionElementToString,
                join
            );
        }
    }
}