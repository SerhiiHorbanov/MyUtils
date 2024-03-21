#include "MyMath.h"
#include "MyVector2i.h"
#include "MyVector2f.h"
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
inline void MyUtils::MyMath::MyVector2i::setLength(float newLength)
{
    float length = getLength();
    x = x / length * newLength;
    y = y / length * newLength;
}
MyVector2f MyUtils::MyMath::MyVector2i::normal()
{
    float length = getLength();
    return MyVector2f(x / length, y / length);
}
#pragma endregion

#pragma region VectorCalculations
inline float MyVector2i::dotProduct(MyVector2i firstVector, MyVector2i secondVector)
{
    return (firstVector.x * secondVector.x) + (firstVector.y * secondVector.y);
}
inline float MyUtils::MyMath::MyVector2i::dotProduct(MyVector2i firstVector, MyVector2f secondVector)
{
    return (firstVector.x * secondVector.x) + (firstVector.y * secondVector.y);
}
inline float MyVector2i::dot(MyVector2i firstVector, MyVector2i secondVector)
{
    return dotProduct(firstVector, secondVector);
}

inline float MyUtils::MyMath::MyVector2i::dot(MyVector2i firstVector, MyVector2f secondVector)
{
    return dotProduct(firstVector, secondVector);
}
#pragma endregion

#pragma region DistanceCalculation
inline float MyVector2i::distanceTo(MyVector2i otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyUtils::MyMath::MyVector2i::distanceTo(MyVector2f otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyVector2i::distanceTo(int otherX, int otherY)
{
    return distance(x, y, otherX, otherY);
}

inline float MyUtils::MyMath::MyVector2i::distanceTo(float otherX, float otherY)
{
    return distance(x, y, otherX, otherY);
}

inline float MyVector2i::distanceSquaredTo(MyVector2i otherVector)
{
    return distanceSquared(x, y, otherVector.x, otherVector.y);
}

inline float MyUtils::MyMath::MyVector2i::distanceSquaredTo(MyVector2f otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyVector2i::distanceSquaredTo(int otherX, int otherY)
{
    return distanceSquared(x, y, otherX, otherY);
}
inline float MyUtils::MyMath::MyVector2i::distanceSquaredTo(float otherX, float otherY)
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
inline MyVector2i::operator MyVector2f()
{
    return MyVector2f(x, y);
}
#pragma endregion