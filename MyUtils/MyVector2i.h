#pragma once

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
            inline float getLengthSquared();
            inline float lengthSquared();
            inline float lenSquared();

            inline void setLength(float newLength);
            void normal();
            inline void normalize();
#pragma endregion

#pragma region VectorCalculations
            static inline float dotProduct(MyVector2i firstVector, MyVector2i secondVector);
            static inline float dot(MyVector2i firstVector, MyVector2i secondVector);
#pragma endregion

#pragma region DistanceCalculation
            inline float distanceTo(MyVector2i otherVector);
            inline float distanceTo(int otherX, int otherY);
            inline float distanceSquaredTo(MyVector2i otherVector);
            inline float distanceSquaredTo(int otherX, int otherY);
#pragma endregion
        };
    }
}

