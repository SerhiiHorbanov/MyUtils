#include <string>
#include "MyVector2.h"
#include "MyVector3.h"
#include "DistanceCalculation.h"

namespace My
{
    namespace Math
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
        template <typename T>
        template <typename U>
        MyVector2<T>::operator MyVector3<U>()
        {
            return MyVector3<U>(static_cast<U>(x), static_cast<U>(y), 0);
        }
        template <typename T>
        template <typename U>
        MyVector2<T>::operator std::pair<U, U>()
        {
            return std::pair<U, U>(static_cast<U>(x), static_cast<U>(y));
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceTo(const MyVector2<U>& other) const
        {
            return Distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(other.x), static_cast<float>(other.y));
        }
        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceTo(U x2, U y2) const
        {
            return Distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceSquaredTo(const MyVector2<U>& other) const
        {
            return DistanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(other.x), static_cast<float>(other.y));
        }
        template <typename T>
        template <typename U>
        float MyVector2<T>::DistanceSquaredTo(U x2, U y2) const
        {
            return DistanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template <typename T>
        float MyVector2<T>::GetLength() const
        {
            return Distance(static_cast<float>(x), static_cast<float>(y));
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
            return DistanceSquared(static_cast<float>(x), static_cast<float>(y));
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

        template <typename T>
        MyVector2<T> MyVector2<T>::Normal() const
        {
            float length = GetLength();
            return MyVector2<T>(this) / length;
        }
        template <typename T>
        MyVector2<T>& MyVector2<T>::Normalize()
        {
            *this = Normal();
            return *this;
        }

        template <typename T>
        void MyVector2<T>::SetLength(float length)
        {
            Normalize();
            *this *= length;
        }
        template <typename T>
        void MyVector2<T>::SetLen(float length)
        {
            SetLength(length);
        }

        template <typename T>
        template <typename U>
        float MyVector2<T>::Dot(const MyVector2<U>& right)
        {
            return DotProduct(*this, right);
        }

        template <typename T>
        MyVector2<T> operator -(const MyVector2<T>& right)
        {
            return MyVector2<T>(-right.x, -right.y);
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
            return MyVector2<T>(left * right.x, left * right.y);
        }
        template <typename T>
        MyVector2<T> operator *(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x * right.x, left.y * right.y);
        }

        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, T right)
        {
            return MyVector2<T>(left.x / right, left.y / right);
        }
        template <typename T>
        MyVector2<T> operator /(T left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left / right.x, left / right.y);
        }
        template <typename T>
        MyVector2<T> operator /(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x / right.x, left.y / right.y);
        }

        template <typename T>
        MyVector2<T>& operator +=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left = left + right;
            return left;
        }
        template <typename T>
        MyVector2<T>& operator -=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left = left - right;
            return left;
        }

        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left = left * right;
            return left;
        }
        template <typename T>
        MyVector2<T>& operator *=(MyVector2<T>& left, T right)
        {
            left = left * right;
            return left;
        }

        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left = left / right;
            return left;
        }
        template <typename T>
        MyVector2<T>& operator /=(MyVector2<T>& left, T right)
        {
            left = left / right;
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

        template<typename T, typename U>
        float DotProduct(const MyVector2<T>& left, const MyVector2<U>& right)
        {
            return (left.x * right.x) + (left.y * right.y);
        }
        template<typename T, typename U>
        float Dot(const MyVector2<T>& left, const MyVector2<U>& right)
        {
            return DotProduct(left, right);
        }
    }
}