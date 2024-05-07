#include <string>
#include "MyVector2.h"

namespace MyUtils
{
    namespace MyMath
    {
        template <typename T>
        std::string MyVector2<T>::ToString()
        {
            return "MyVector2(" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }

        template <typename T>
        template <typename U>
        MyVector2<T>::operator MyVector2<U>()
        {
            return MyVector2<U>(static_cast<U>(x), static_cast<U>(y));
        }
        template<typename T>
        template <typename U>
        MyVector2<T>::operator std::pair<U, U>()
        {
            return std::pair<U, U>(static_cast<U>(x), static_cast<U>(y));
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceTo(const MyVector2<U>& otherVector) const
        {
            return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(otherVector.x), static_cast<float>(otherVector.y));
        }
        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceTo(U x2, U y2) const
        {
            return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceSquaredTo(const MyVector2<U>& vector) const
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(vector.x), static_cast<float>(vector.y));
        }
        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceSquaredTo(U x2, U y2) const
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template <typename T>
        float MyVector2<T>::GetLength() const
        {
            return distance(static_cast<float>(x), static_cast<float>(y));
        }
        template <typename T>
        float MyVector2<T>::Length() const
        {
            return GetLength();
        }
        template <typename T>
        float MyVector2<T>::Len() const
        {
            return GetLength();
        }

        template <typename T>
        float MyVector2<T>::GetLengthSquared() const
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y));
        }
        template <typename T>
        float MyVector2<T>::LengthSquared() const
        {
            return GetLengthSquared();
        }
        template <typename T>
        float MyVector2<T>::LenSquared() const
        {
            return GetLengthSquared();
        }

        template<typename T>
        MyVector2<T> MyVector2<T>::Normal() const
        {
            float length = GetLength();
            return MyVector2<T>(this) / length;
        }

        template<typename T>
        MyVector2<T>& MyVector2<T>::Normalize()
        {
            float length = GetLength();
            *this /= length;
            return *this;
        }

        template<typename T>
        void MyVector2<T>::SetLength(float length)
        {
            this->Normalize();
            *this *= length;
        }

        template<typename T>
        void MyVector2<T>::SetLen(float length)
        {
            SetLength(length);
        }

        template <typename T>
        MyVector2<T>& operator -=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x -= right.x;
            left.y -= right.y;

            return left;
        }

        template <typename T>
        MyVector2<T> operator +(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x + right.x, left.y + right.y);
        }
        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x - right.x, left.y - right.y);
        }

        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, T right)
        {
            return MyVector2<T>(left.x * right, left.y * right);
        }
        template <typename T>
        MyVector2<T> operator *(T left, const MyVector2<T>& right)
        {
            return MyVector2<T>(right.x * left, right.y * left);
        }
        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x * right.x, left.y * right.y);
        }

        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x *= right.x;
            left.y *= right.y;
            return left;
        }
        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, T right)
        {
            left.x *= right;
            left.y *= right;

            return left;
        }

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, T right)
        {
            return MyVector2<T>(left.x / right, left.y / right);
        }
        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, T right)
        {
            left.x /= right;
            left.y /= right;

            return left;
        }

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x / right.x, left.y / right.y);
        }
        template <typename T>
        MyVector2<T>& operator/=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x /= right.x;
            left.y /= right.y;
            return left;
        }

        template <typename T>
        bool operator ==(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return (left.x == right.x) && (left.y == right.y);
        }
        template <typename T>
        bool operator !=(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return (left.x != right.x) || (left.y != right.y);
        }

        template <typename T>
        MyVector2<T> operator-(const MyVector2<T>& right)
        {
            return MyVector2<T>(-right.x, -right.y);
        }

        template <typename T>
        MyVector2<T>& operator +=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x += right.x;
            left.y += right.y;

            return left;
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::Dot(const MyVector2<U>& right)
        {
            return DotProduct(*this, right);
        }
    }
}