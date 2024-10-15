#pragma once
#include <string>
#include <functional>

namespace My
{
    namespace MySerialization
    {
        template <typename CollectionType, typename CollectionElementType>
        std::string SerializeCollection
        (
            CollectionType collection,
            int elementsAmount,
            std::function<CollectionElementType(CollectionType, int)> getElementFunction,
            std::function<std::string(CollectionElementType)> ConvertCollectionElementToString,
            std::string join = " -> "
        )
        {
            if (elementsAmount == 0)
                return "";

            std::string result = ConvertCollectionElementToString(getElementFunction(collection, 0));
            for (int i = 1; i < elementsAmount; i++)
            {
                result += join + ConvertCollectionElementToString(getElementFunction(collection, i));
            }

            return result;
        }
    }
}