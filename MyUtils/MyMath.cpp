#include "MyMath.h"
#include <cmath>

inline float MyUtils::MyMath::fromAnglesToRadians(float angles)
{
    return angles * ANGLES_TO_RADIANS_MULTIPLIER;
}

float MyUtils::MyMath::ToRadians(float angles)
{
    fromAnglesToRadians(angles);
}

inline float MyUtils::MyMath::fromRadiansToAngles(float radians)
{
    return radians * RADIANS_TO_ANGLES_MULTIPLIER;
}

float MyUtils::MyMath::ToAngles(float radians)
{
    fromRadiansToAngles(radians);
}

float MyUtils::MyMath::distance(float X1, float Y1, float X2, float Y2)
{
    return std::sqrtf(distanceSquared(X1, Y1, X2, Y2));
}
float MyUtils::MyMath::dist(float X1, float Y1, float X2, float Y2)
{
    return distance(X1, Y1, X2, Y2);
}
float MyUtils::MyMath::distanceSquared(float X1, float Y1, float X2, float Y2)
{
    float xDifference = X1 - X2;
    float yDifference = Y1 - Y2;

    float xDifferenceSquared = xDifference * xDifference;
    float yDifferenceSquared = yDifference * yDifference;

    return xDifferenceSquared + yDifferenceSquared;
}
float MyUtils::MyMath::distSq(float X1, float Y1, float X2, float Y2)
{
    return distanceSquared(X1, Y1, X2, Y2);
}
