#pragma once
#include <string>

namespace My
{
    namespace Math
    {
        template <typename T>
        struct MyVector3;

        template <typename T>
        struct MyVector2
        {
        public:
            T x;
            T y;

            template <typename T>
            MyVector2() :
                x(0),
                y(0)
            {}

            template <typename T>
            MyVector2(T X, T Y) :
                x(X),
                y(Y)
            {}

            template <typename U>
            explicit operator MyVector2<U>();
            template <typename U>
            explicit operator MyVector3<U>();
            template <typename U>
            explicit operator std::pair<U, U>();

            std::string ToString();

            template <typename U>
            float DistanceTo(const MyVector2<U>& other) const;
            template <typename U>
            float DistanceTo(U x2, U y2) const;

            template <typename U>
            float DistanceSquaredTo(const MyVector2<U>& other) const;
            template <typename U>
            float DistanceSquaredTo(U x2, U y2) const;

            float GetLength() const;
            float Length() const;
            float Len() const;

            float GetLengthSquared() const;
            float LengthSquared() const;
            float LenSquared() const;

            MyVector2<T> Normal() const;
            MyVector2<T>& Normalize();

            void SetLength(float length);
            void SetLen(float length);

            template <typename U>
            float Dot(const MyVector2<U>& right);
        };

        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator +(const MyVector2<T>& left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, T right);
        template <typename T>
        MyVector2<T> operator *(T left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, T right);
        template <typename T>
        MyVector2<T> operator /(T left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator +=(MyVector2<T>& left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T>& operator -=(MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, T right);

        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, const MyVector2<T>& right);
        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, T right);

        template <typename T>
        bool operator ==(const MyVector2<T>& left, const MyVector2<T>& right);
        template <typename T>
        bool operator !=(const MyVector2<T>& left, const MyVector2<T>& right);

        template <typename T, typename U>
        float DotProduct(const MyVector2<T>& left, const MyVector2<U>& right);

        template <typename T, typename U>
        float Dot(const MyVector2<T>& left, const MyVector2<U>& right);

        typedef MyVector2<int>            MyVector2i;
        typedef MyVector2<long>           MyVector2l;
        typedef MyVector2<short>          MyVector2s;
        typedef MyVector2<unsigned int>   MyVector2u;
        typedef MyVector2<unsigned long>  MyVector2ul;
        typedef MyVector2<unsigned short> MyVector2us;
        typedef MyVector2<double>         MyVector2d;
        typedef MyVector2<float>          MyVector2f;
    }
}