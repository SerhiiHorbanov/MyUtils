#pragma once
#include "MyMath.h"

namespace MyUtils
{
    namespace MyMath
    {
        struct MyVector2i
        {
        public:
            int x;
            int y;

#pragma region ConstructorsAndFactoryFunctions
            MyVector2i(int x = 0, int y = 0) :
                x(x),
                y(y)
            {}

            static MyVector2i CalculateVectorByAngleAndLength(float angle, float length = 0);
#pragma endregion


#pragma region Length
            inline float getLength();
            inline float length();
            inline float len();
            inline float getMagnitude();
            inline float magnitude();
            inline float getLengthSquared();
            inline float lengthSquared();
            inline float lenSquared();
            inline float getMagnitudeSquared();
            inline float magnitudeSquared();
#pragma endregion

#pragma region DistanceCalculation
            inline float distanceTo(MyVector2i otherVector);
            inline float distanceTo(int otherX, int otherY);
            inline float distanceSquaredTo(MyVector2i otherVector);
            inline float distanceSquaredTo(int otherX, int otherY);
#pragma endregion

#pragma region Operations
            inline MyVector2i operator+(MyVector2i otherVector)
            {
                return MyVector2i(x + otherVector.x, y + otherVector.y);
            }
            inline MyVector2i operator-(MyVector2i otherVector)
            {
                return MyVector2i(x - otherVector.x, y - otherVector.y);
            }
            inline MyVector2i operator*(MyVector2i otherVector)
            {
                return MyVector2i(x * otherVector.x, y * otherVector.y);
            }
            inline MyVector2i operator*(int multiplier)
            {
                return MyVector2i(x * multiplier, y * multiplier);
            }
            inline MyVector2i operator/(MyVector2i otherVector)
            {
                return MyVector2i(x / otherVector.x, y / otherVector.y);
            }
            inline MyVector2i operator/(int divider)
            {
                return MyVector2i(x / divider, y / divider);
            }
            inline bool operator==(MyVector2i otherVector)
            {
                return x == otherVector.x && y == otherVector.y;
            }
            inline bool operator!=(MyVector2i otherVector)
            {
                return !(x == otherVector.x && y == otherVector.y);
            }
#pragma endregion

        };
    }
}

