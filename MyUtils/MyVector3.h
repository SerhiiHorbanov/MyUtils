#pragma once
#include <string>

namespace My
{
    namespace Math
    {
        template <typename T>
        struct MyVector2;

        template <typename T>
        struct MyVector3
        {
        public:
            T x;
            T y;
            T z;

            template <typename T>
            MyVector3() :
                x(0),
                y(0),
                z(0)
            {}

            template <typename T>
            MyVector3(T X, T Y, T Z) :
                x(X),
                y(Y),
                z(Z)
            {}

            template <typename U>
            explicit operator MyVector3<U>();
            template <typename U>
            explicit operator MyVector2<U>();
            template <typename U>
            explicit operator std::pair<std::pair<U, U>, U>();

            std::string ToString();

            template <typename U>
            float DistanceTo(const MyVector3<U>& other) const;
            template <typename U>
            float DistanceTo(U x2, U y2, U z2) const;

            template <typename U>
            float DistanceSquaredTo(const MyVector3<U>& other) const;
            template <typename U>
            float DistanceSquaredTo(U x2, U y2, U z2) const;

            float GetLength() const;
            float Length() const;
            float Len() const;

            float GetLengthSquared() const;
            float LengthSquared() const;
            float LenSquared() const;

            MyVector3<T> Normal() const;
            MyVector3<T>& Normalize();

            void SetLength(float length);
            void SetLen(float length);

            template <typename U>
            float Dot(const MyVector3<U>& right);
        };

        template <typename T>
        MyVector3<T> operator -(const MyVector3<T>& right);

        template <typename T>
        MyVector3<T> operator +(const MyVector3<T>& left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T> operator -(const MyVector3<T>& left, const MyVector3<T>& right);

        template <typename T>
        MyVector3<T> operator *(const MyVector3<T>& left, T right);
        template <typename T>
        MyVector3<T> operator *(T left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T> operator *(const MyVector3<T>& left, const MyVector3<T>& right);

        template <typename T>
        MyVector3<T> operator /(const MyVector3<T>& left, T right);
        template <typename T>
        MyVector3<T> operator /(T left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T> operator /(const MyVector3<T>& left, const MyVector3<T>& right);

        template <typename T>
        MyVector3<T>& operator +=(MyVector3<T>& left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T>& operator -=(MyVector3<T>& left, const MyVector3<T>& right);

        template <typename T>
        MyVector3<T>& operator *=(MyVector3<T>& left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T>& operator *=(MyVector3<T>& left, T right);

        template <typename T>
        MyVector3<T>& operator /=(MyVector3<T>& left, const MyVector3<T>& right);
        template <typename T>
        MyVector3<T>& operator /=(MyVector3<T>& left, T right);

        template <typename T>
        bool operator ==(const MyVector3<T>& left, const MyVector3<T>& right);
        template <typename T>
        bool operator !=(const MyVector3<T>& left, const MyVector3<T>& right);

        template <typename T, typename U>
        float DotProduct(const MyVector3<T>& left, const MyVector3<U>& right);

        template <typename T, typename U>
        float Dot(const MyVector3<T>& left, const MyVector3<U>& right);

        typedef MyVector3<int>            MyVector3i;
        typedef MyVector3<long>           MyVector3l;
        typedef MyVector3<short>          MyVector3s;
        typedef MyVector3<unsigned int>   MyVector3u;
        typedef MyVector3<unsigned long>  MyVector3ul;
        typedef MyVector3<unsigned short> MyVector3us;
        typedef MyVector3<double>         MyVector3d;
        typedef MyVector3<float>          MyVector3f;
    }
}