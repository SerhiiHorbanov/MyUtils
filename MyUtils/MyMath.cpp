#include "MyMath.h"

#pragma region 2DDistanceCalculations
/// <summary>
/// distance squared between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float MyUtils::MyMath::DistanceSquared(float X1, float Y1, float X2, float Y2)
{
    float xDifference = X1 - X2;
    float yDifference = Y1 - Y2;

    float xDifferenceSquared = xDifference * xDifference;
    float yDifferenceSquared = yDifference * yDifference;

    return xDifferenceSquared + yDifferenceSquared;
}
/// <summary>
/// distance squared between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float MyUtils::MyMath::DistSq(const float X1, const float Y1, const float X2, const float Y2)
{
    return DistanceSquared(X1, Y1, X2, Y2);
}
/// <summary>
/// distance between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float MyUtils::MyMath::Distance(const float X1, const float Y1, const float X2, const float Y2)
{
    return std::sqrtf(DistanceSquared(X1, Y1, X2, Y2));
}
/// <summary>
/// distance between two points with coords (X1, Y1) and (X2, Y2)
/// </summary>
float MyUtils::MyMath::Dist(const float X1, const float Y1, const float X2, const float Y2)
{
    return Distance(X1, Y1, X2, Y2);
}
#pragma endregion

#pragma region 3DDistanceCalculations
/// <summary>
/// distance squared between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float MyUtils::MyMath::DistanceSquared3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
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
/// distance squared between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float MyUtils::MyMath::DistSq3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
{
    return DistanceSquared3D(X1, Y1, Z1, X2, Y2, Z2);
}
/// <summary>
/// distance between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float MyUtils::MyMath::Distance3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
{
    return std::sqrtf(DistanceSquared3D(X1, Y1, Z1, X2, Y2, Z2));
}
/// <summary>
/// distance between two points with coords (X1, Y1, Z1) and (X2, Y2, Z2)
/// </summary>
float MyUtils::MyMath::Dist3D(const float X1, const float Y1, const float Z1, const float X2, const float Y2, const float Z2)
{
    return Distance3D(X1, Y1, Z1, X2, Y2, Z2);
}
#pragma endregion
