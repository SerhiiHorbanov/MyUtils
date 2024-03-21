#include "MyMath.h"
#include "MyVector2i.h"
#include "MyVector2f.h"
#include <cmath>

using namespace MyUtils::MyMath;

#pragma region FactoryMethods
inline MyVector2f MyVector2f::CalculateVectorByAngleAndLength(float angle, float length)
{
    float angleCos = cos(angle);
    float angleSin = sin(angle);
    float x = angleCos * length;
    float y = angleSin * length;
    return MyVector2f(x, y);
}
#pragma endregion

#pragma region Length
inline float MyVector2f::getLength()
{
    return distance(x, y);
}

inline float MyVector2f::length()
{
    return getLength();
}

inline float MyVector2f::len()
{
    return getLength();
}

inline float MyVector2f::getLengthSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2f::lengthSquared()
{
    return distanceSquared(x, y);
}

inline float MyVector2f::lenSquared()
{
    return distanceSquared(x, y);
}
inline void MyUtils::MyMath::MyVector2f::setLength(float newLength)
{
    float length = getLength();
    x = x / length * newLength;
    y = y / length * newLength;
}
MyVector2f MyVector2f::normal()
{
    float length = getLength();
    return MyVector2f(x / length, y / length);
}
inline void MyUtils::MyMath::MyVector2f::normalize()
{
    float length = getLength();
    x /= length;
    y /= length;
}
#pragma endregion

#pragma region DistanceCalculation
inline float MyVector2f::distanceTo(MyVector2f otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyUtils::MyMath::MyVector2f::distanceTo(MyVector2i otherVector)
{
    return distance(x, y, otherVector.x, otherVector.y);
}

inline float MyUtils::MyMath::MyVector2f::distanceTo(float otherX, float otherY)
{
    return distance(x, y, otherX, otherY);
}

inline float MyVector2f::distanceTo(int otherX, int otherY)
{
    return distance(x, y, otherX, otherY);
}

inline float MyUtils::MyMath::MyVector2f::distanceSquaredTo(MyVector2f otherVector)
{
    return distanceSquared(x, y, otherVector.x, otherVector.y);
}

inline float MyVector2f::distanceSquaredTo(MyVector2i otherVector)
{
    return distanceSquared(x, y, otherVector.x, otherVector.y);
}

inline float MyUtils::MyMath::MyVector2f::distanceSquaredTo(float otherX, float otherY)
{
    return distanceSquared(x, y, otherX, otherY);
}

inline float MyVector2f::distanceSquaredTo(int otherX, int otherY)
{
    return distanceSquared(x, y, otherX, otherY);
}
#pragma endregion



inline float MyVector2f::dotProduct(MyVector2f firstVector, MyVector2f secondVector)
{
    return (firstVector.x * secondVector.x) + (firstVector.y * secondVector.y);
}
inline float MyUtils::MyMath::MyVector2f::dotProduct(MyVector2f firstVector, MyVector2i secondVector)
{
    return dotProduct(firstVector, secondVector);
}
inline float MyUtils::MyMath::MyVector2f::dot(MyVector2f firstVector, MyVector2f secondVector)
{
    return dotProduct(firstVector, secondVector);
}
inline float MyVector2f::dot(MyVector2f firstVector, MyVector2i secondVector)
{
    return dotProduct(firstVector, secondVector);
}

#pragma region Operations
inline MyVector2f operator+(MyVector2f firstVector, MyVector2f secondVector)
{
    return MyVector2f(firstVector.x + secondVector.x, firstVector.y + secondVector.y);
}
inline MyVector2f operator-(MyVector2f firstVector, MyVector2f secondVector)
{
    return MyVector2f(firstVector.x - secondVector.x, firstVector.y - secondVector.y);
}
inline MyVector2f operator*(MyVector2f firstVector, MyVector2f secondVector)
{
    return MyVector2f(firstVector.x * secondVector.x, firstVector.y * secondVector.y);
}
inline MyVector2f operator/(MyVector2f firstVector, MyVector2f secondVector)
{
    return MyVector2f(firstVector.x / secondVector.x, firstVector.y / secondVector.y);
}
inline MyVector2f operator==(MyVector2f firstVector, MyVector2f secondVector)
{
    return firstVector.x == secondVector.x && firstVector.y == secondVector.y;
}
inline MyVector2f operator!=(MyVector2f firstVector, MyVector2f secondVector)
{
    return firstVector.x != secondVector.x || firstVector.y != secondVector.y;
}
inline MyVector2f::operator MyVector2i()
{
    return MyVector2i(x, y);
}
#pragma endregion