#include "MyVector2i.h"
#include <cmath>

using namespace MyUtils::MyMath;

#pragma region FactoryMethods
inline MyVector2i MyVector2i::CalculateVectorByAngleAndLength(float angle, float length)
{
    float angleCos = cos(angle);
    float angleSin = sin(angle);
    int x = angleCos * length;
    int y = angleSin * length;
    return MyVector2i(x, y);
}
#pragma endregion

#pragma region Length
inline float MyVector2i::getLength()
{
    return distance(x, y);
}

inline float MyVector2i::length()
{
    return getLength();
}

inline float MyVector2i::len()
{
    return getLength();
}

inline float MyVector2i::getMagnitude()
{
    return getLength();
}

inline float MyVector2i::magnitude()
{
    return getLength();
}

inline float MyVector2i::getLengthSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2i::lengthSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2i::lenSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2i::getMagnitudeSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2i::magnitudeSquared() 
{
    return distanceSquared(x, y);
}
#pragma endregion

#pragma region DistanceCalculation
inline float MyVector2i::distanceTo(MyVector2i otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyVector2i::distanceTo(int otherX, int otherY)
{
    return distance(x, y, otherX, otherY);
}

inline float MyVector2i::distanceSquaredTo(MyVector2i otherVector)
{
    return distanceSquared(x, y, otherVector.x, otherVector.y);
}

inline float MyVector2i::distanceSquaredTo(int otherX, int otherY)
{
    return distanceSquared(x, y, otherX, otherY);
}
#pragma endregion

#pragma region Operations
inline MyVector2i operator+(MyVector2i firstVector, MyVector2i secondVector)
{
    return MyVector2i(firstVector.x + secondVector.x, firstVector.y + secondVector.y);
}
inline MyVector2i operator-(MyVector2i firstVector, MyVector2i secondVector)
{
    return MyVector2i(firstVector.x - secondVector.x, firstVector.y - secondVector.y);
}
inline MyVector2i operator*(MyVector2i firstVector, MyVector2i secondVector)
{
    return MyVector2i(firstVector.x * secondVector.x, firstVector.y * secondVector.y);
}
inline MyVector2i operator/(MyVector2i firstVector, MyVector2i secondVector)
{
    return MyVector2i(firstVector.x / secondVector.x, firstVector.y / secondVector.y);
}
inline MyVector2i operator==(MyVector2i firstVector, MyVector2i secondVector)
{
    return firstVector.x == secondVector.x && firstVector.y == secondVector.y;
}
inline MyVector2i operator!=(MyVector2i firstVector, MyVector2i secondVector)
{
    return firstVector.x != secondVector.x || firstVector.y != secondVector.y;
}
#pragma endregion