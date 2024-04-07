#include "MyVector2.h"
#include "MyMath.h"

namespace MyUtils
{
    namespace MyMath
    {
        template <typename T>
        template <typename U>
        inline MyVector2<T>::MyVector2(const MyVector2<U>& vector) :
            x(static_cast<T>(vector.x)),
            y(static_cast<T>(vector.y))
        {
        }

        template<typename T>
        template<typename U>
        inline float MyVector2<T>::distanceTo(const MyVector2<U>& otherVector)
        {
            return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(otherVector.x), static_cast<float>(otherVector.y));
        }

        template<typename T>
        template<typename U>
        float MyVector2<T>::distanceTo(const U x2, const U y2)
        {
            return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template<typename T>
        template<typename U>
        float MyVector2<T>::distanceSquaredTo(const MyVector2<U>& vector)
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(vector.x), static_cast<float>(vector.y));
        }

        template<typename T>
        template<typename U>
        float MyVector2<T>::distanceSquaredTo(U x2, U y2)
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
        }

        template<typename T>
        inline float MyVector2<T>::getLength()
        {
            return distance(static_cast<float>(x), static_cast<float>(y));
        }

        template<typename T>
        float MyVector2<T>::length()
        {
            return getLength();
        }

        template<typename T>
        float MyVector2<T>::len()
        {
            return getLength();
        }

        template<typename T>
        inline float MyVector2<T>::getLengthSquared()
        {
            return distanceSquared(static_cast<float>(x), static_cast<float>(y));
        }

        template<typename T>
        inline float MyVector2<T>::lengthSquared()
        {
            return getLengthSquared();
        }

        template<typename T>
        inline float MyVector2<T>::lenSquared()
        {
            return getLengthSquared();
        }

        template <typename T>
        inline MyVector2<T> operator -(const MyVector2<T>& right)
        {
            return MyVector2<T>(-right.x, -right.y);
        }

        template <typename T>
        inline MyVector2<T>& operator +=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x += right.x;
            left.y += right.y;

            return left;
        }

        template <typename T>
        inline MyVector2<T>& operator -=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x -= right.x;
            left.y -= right.y;

            return left;
        }

        template <typename T>
        inline MyVector2<T> operator +(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x + right.x, left.y + right.y);
        }

        template <typename T>
        inline MyVector2<T> operator -(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x - right.x, left.y - right.y);
        }

        template <typename T>
        inline MyVector2<T> operator *(const MyVector2<T>& left, T right)
        {
            return MyVector2<T>(left.x * right, left.y * right);
        }

        template <typename T>
        inline MyVector2<T> operator *(T left, const MyVector2<T>& right)
        {
            return MyVector2<T>(right.x * left, right.y * left);
        }

        template <typename T>
        inline MyVector2<T>& operator *=(MyVector2<T>& left, T right)
        {
            left.x *= right;
            left.y *= right;

            return left;
        }

        template <typename T>
        inline MyVector2<T> operator /(const MyVector2<T>& left, T right)
        {
            return MyVector2<T>(left.x / right, left.y / right);
        }

        template <typename T>
        inline MyVector2<T>& operator /=(MyVector2<T>& left, T right)
        {
            left.x /= right;
            left.y /= right;

            return left;
        }

        template<typename T>
        MyVector2<T> operator*(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x * right.x, left.y * right.y);
        }

        template<typename T>
        MyVector2<T> operator*=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x *= right.x;
            left.y *= right.y;
            return left;
        }

        template<typename T>
        MyVector2<T> operator/(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x / right.x, left.y / right.y);
        }

        template<typename T>
        MyVector2<T>& operator/=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x /= right.x;
            left.y /= right.y;
            return left;
        }

        template <typename T>
        inline bool operator ==(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return (left.x == right.x) && (left.y == right.y);
        }

        template <typename T>
        inline bool operator !=(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return (left.x != right.x) || (left.y != right.y);
        }
    }
}