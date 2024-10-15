#pragma once
#include <cmath>

namespace My
{
    namespace Math
    {
        float DistanceSquared(const float X1, const float Y1, const float X2 = 0, const float Y2 = 0);
        float Distance(const float X1, const float Y1, const float X2 = 0, const float Y2 = 0);
        
        float DistanceSquared3D(const float X1, const float Y1, const float Z1, const float X2 = 0, const float Y2 = 0, const float Z2 = 0);
        float Distance3D(const float X1, const float Y1, const float Z1, const float X2 = 0, const float Y2 = 0, const float Z2 = 0);
    }
}