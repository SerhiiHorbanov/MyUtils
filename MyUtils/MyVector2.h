#pragma once

namespace MyUtils
{
    namespace MyMath
    {
        template <typename T>
        struct MyVector2
        {
        public:
            T x;
            T y;

            template <typename T>
            inline MyVector2() :
                x(0),
                y(0)
            {}

            template <typename T>
            inline MyVector2(T X, T Y) :
                x(X),
                y(Y)
            {}

            template <typename U>
            MyVector2(const MyVector2<U>& vector);

            template <typename U>
            float distanceTo(const MyVector2<U>& vector);
            template <typename U>
            float distanceTo(U x2, U y2);

            template <typename U>
            float distanceSquaredTo(const MyVector2<U>& vector);
            template <typename U>
            float distanceSquaredTo(U x2, U y2);

            inline float getLength();
            inline float length();
            inline float len();

            inline float getLengthSquared();
            inline float lengthSquared();
            inline float lenSquared();
        };

        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator +=(MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator -=(MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator +(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& left, const MyVector2<T>& right);


        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, T right);

        template <typename T>
        MyVector2<T> operator *(T left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, T right);

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, T right);

        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, T right);


        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, const MyVector2<T>& right);


        template <typename T>
        bool operator ==(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        bool operator !=(const MyVector2<T>& left, const MyVector2<T>& right);

        typedef MyVector2<int>          MyVector2i;
        typedef MyVector2<unsigned int> MyVector2u;
        typedef MyVector2<double>       MyVector2d;
        typedef MyVector2<float>        MyVector2f;
    }
}