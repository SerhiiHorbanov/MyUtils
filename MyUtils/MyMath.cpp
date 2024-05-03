#include "MyMath.h"
#include <cmath>

float MyUtils::MyMath::DistanceSquared(float X1, float Y1, float X2, float Y2)
{
    float xDifference = X1 - X2;
    float yDifference = Y1 - Y2;

    float xDifferenceSquared = xDifference * xDifference;
    float yDifferenceSquared = yDifference * yDifference;

    return xDifferenceSquared + yDifferenceSquared;
}