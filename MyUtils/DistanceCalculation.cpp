#include "DistanceCalculation.h"

/// <summary>
/// distance squared between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float My::Math::DistanceSquared(float X1, float Y1, float X2, float Y2)
{
    float xDifference = X1 - X2;
    float yDifference = Y1 - Y2;

    float xDifferenceSquared = xDifference * xDifference;
    float yDifferenceSquared = yDifference * yDifference;

    return xDifferenceSquared + yDifferenceSquared;
}
/// <summary>
/// distance between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float My::Math::Distance(const float X1, const float Y1, const float X2, const float Y2)
{
    return std::sqrtf(DistanceSquared(X1, Y1, X2, Y2));
}

/// <summary>
/// distance squared between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float My::Math::DistanceSquared3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
{
    const float xDifference = X1 - X2;
    const float yDifference = Y1 - Y2;
    const float zDifference = Y1 - Y2;

    const float xDifferenceSquared = xDifference * xDifference;
    const float yDifferenceSquared = yDifference * yDifference;
    const float zDifferenceSquared = zDifference * zDifference;

    return xDifferenceSquared + yDifferenceSquared + zDifferenceSquared;
}
/// <summary>
/// distance between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float My::Math::Distance3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
{
    return std::sqrtf(DistanceSquared3D(X1, Y1, Z1, X2, Y2, Z2));
}