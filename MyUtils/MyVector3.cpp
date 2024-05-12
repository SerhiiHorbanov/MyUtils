#include <string>
#include "MyVector3.h"
#include "MyVector2.h"
#include "MyDistanceCalculation.h"

namespace MyUtils
{
    namespace MyMath
    {
        template <typename T>
        std::string MyVector3<T>::ToString()
        {
            return "MyVector3(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
        }

        template <typename T>
        template <typename U>
        MyVector3<T>::operator MyVector3<U>()
        {
            return MyVector3<U>(static_cast<U>(x), static_cast<U>(y), static_cast<U>(z));
        }
        template <typename T>
        template <typename U>
        MyVector3<T>::operator MyVector2<U>()
        {
            return MyVector2<U>(static_cast<U>(x), static_cast<U>(y));
        }
        template <typename T>
        template <typename U>
        MyVector3<T>::operator std::pair<std::pair<U, U>, U>()
        {
            return std::pair<std::pair(U, U), U>(std::pair(U, U)(static_cast<U>(x), static_cast<U>(y)), static_cast<U>(z));
        }

        template <typename T>
        template <typename U>
        float MyVector3<T>::DistanceTo(const MyVector3<U>& other) const
        {
            return Distance3D(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(other.x), static_cast<float>(other.y), static_cast<float>(other.z));
        }
        template <typename T>
        template <typename U>
        float MyVector3<T>::DistanceTo(U x2, U y2, U z2) const
        {
            return Distance3D(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(x2), static_cast<float>(y2), static_cast<float>(z2));
        }

        template <typename T>
        template <typename U>
        float MyVector3<T>::DistanceSquaredTo(const MyVector3<U>& other) const
        {
            return DistanceSquared3D(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(other.x), static_cast<float>(other.y), static_cast<float>(other.z));
        }
        template <typename T>
        template <typename U>
        float MyVector3<T>::DistanceSquaredTo(U x2, U y2, U z2) const
        {
            return DistanceSquared3D(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z), static_cast<float>(x2), static_cast<float>(y2), static_cast<float>(z2));
        }

        template <typename T>
        float MyVector3<T>::GetLength() const
        {
            return Distance3D(static_cast<float>(x), static_cast<float>(y), static_cast<float>(z));
        }
        template <typename T>
        float MyVector3<T>::Length() const
        {
            return GetLength();
        }
        template <typename T>
        float MyVector3<T>::Len() const
        {
            return GetLength();
        }

        template <typename T>
        float MyVector3<T>::GetLengthSquared() const
        {
            return DistanceSquared3D(static_cast<float>(x), static_cast<float>(y)), static_cast<float>(z);
        }
        template <typename T>
        float MyVector3<T>::LengthSquared() const
        {
            return GetLengthSquared();
        }
        template <typename T>
        float MyVector3<T>::LenSquared() const
        {
            return GetLengthSquared();
        }

        template <typename T>
        MyVector3<T> MyVector3<T>::Normal() const
        {
            float length = GetLength();
            return MyVector2<T>(this) / length;
        }
        template <typename T>
        MyVector3<T>& MyVector3<T>::Normalize()
        {
            *this = Normal();
            return *this;
        }

        template <typename T>
        void MyVector3<T>::SetLength(float length)
        {
            Normalize();
            *this *= length;
        }
        template <typename T>
        void MyVector3<T>::SetLen(float length)
        {
            SetLength();
        }

        template <typename T>
        template <typename U>
        float MyVector3<T>::Dot(const MyVector3<U>& right)
        {
            return DotProduct(*this, right);
        }

        template <typename T>
        MyVector3<T> operator -(const MyVector3<T>& right)
        {
            return MyVector3<T>(-right.x, -right.y, -right.z);
        }

        template <typename T>
        MyVector3<T> operator +(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left.x + right.x, left.y + right.y, left.z + right.z);
        }
        template <typename T>
        MyVector3<T> operator -(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left.x - right.x, left.y - right.y, left.z - right.z);
        }

        template <typename T>
        MyVector3<T> operator *(const MyVector3<T>& left, T right)
        {
            return MyVector3<T>(left.x * right, left.y * right, left.z * right);
        }
        template <typename T>
        MyVector3<T> operator *(T left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left * right.x, left * right.y, left * right.z);
        }
        template <typename T>
        MyVector3<T> operator *(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left.x * right.x, left.y * right.y, left.z * right.z);
        }

        template <typename T>
        MyVector3<T> operator /(const MyVector3<T>& left, T right)
        {
            return MyVector3<T>(left.x / right, left.y / right, left.z / right);
        }
        template <typename T>
        MyVector3<T> operator /(T left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left / right.x, left / right.y, left / right.z);
        }
        template <typename T>
        MyVector3<T> operator /(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return MyVector3<T>(left.x / right.x, left.y / right.y, left.z / right.z);
        }

        template <typename T>
        MyVector3<T>& operator +=(MyVector3<T>& left, const MyVector3<T>& right)
        {
            left = left + right;
            return left;
        }
        template <typename T>
        MyVector3<T>& operator -=(MyVector3<T>& left, const MyVector3<T>& right)
        {
            left = left - right;
            return left;
        }

        template <typename T>
        MyVector3<T>& operator *=(MyVector3<T>& left, const MyVector3<T>& right)
        {
            left = left * right;
            return left;
        }
        template <typename T>
        MyVector3<T>& operator *=(MyVector3<T>& left, T right)
        {
            left = left * right;
            return left;
        }

        template <typename T>
        MyVector3<T>& operator /=(MyVector3<T>& left, const MyVector3<T>& right)
        {
            left = left / right;
            return left;
        }
        template <typename T>
        MyVector3<T>& operator /=(MyVector3<T>& left, T right)
        {
            left = left / right;
            return left;
        }

        template <typename T>
        bool operator ==(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return (left.x == right.x) && (left.y == right.y) && (left.z == right.z);
        }
        template <typename T>
        bool operator !=(const MyVector3<T>& left, const MyVector3<T>& right)
        {
            return !(left == right);
        }

        template<typename T, typename U>
        float DotProduct(const MyVector3<T>& left, const MyVector3<U>& right)
        {
            return (left.x * right.x) + (left.y * right.y) + (left.z * right.z);
        }
        template<typename T, typename U>
        float Dot(const MyVector3<T>& left, const MyVector3<U>& right)
        {
            return DotProduct(left, right);
        }
    }
}