#pragma once
#include <string>

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

            std::string ToString();

            template <typename U>
            explicit inline MyVector2(const MyVector2<U>& vector) :
                x(static_cast<T>(vector.x)),
                y(static_cast<T>(vector.y))
            {
            }

            /// <summary>
            /// Calculates MyVector2 from it's angle and length
            /// </summary>
            /// <returns>Vector with coordinates 
            ///x = cos(angle) * length,
            ///y = sin(angle) * length
            ///</returns>
            static MyVector2<T> PolarToCartesian(float length, float angleRadians);

            template <typename U>
            inline float DistanceTo(const MyVector2<U>& otherVector)
            {
                return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(otherVector.x), static_cast<float>(otherVector.y));
            }
            template <typename U>
            inline float DistanceTo(U x2, U y2)
            {
                return distance(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
            }

            template <typename U>
            inline float DistanceSquaredTo(const MyVector2<U>& vector)
            {
                return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(vector.x), static_cast<float>(vector.y));
            }
            template <typename U>
            inline float DistanceSquaredTo(U x2, U y2)
            {
                return distanceSquared(static_cast<float>(x), static_cast<float>(y), static_cast<float>(x2), static_cast<float>(y2));
            }

            inline float GetLength()
            {
                return distance(static_cast<float>(x), static_cast<float>(y));
            }
            inline float Length()
            {
                return GetLength();
            }
            inline float Len()
            {
                return GetLength();
            }

            inline float GetLengthSquared()
            {
                return distanceSquared(static_cast<float>(x), static_cast<float>(y));
            }
            inline float LengthSquared()
            {
                return GetLengthSquared();
            }
            inline float LenSquared()
            {
                return GetLengthSquared();
            }

            template <typename U>
            inline float Dot(const MyVector2<U>& right)
            {
                return dotProduct(right);
            }
        };

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
            left.x -= right.x;
            left.y -= right.y;

            return left;
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
        inline MyVector2<T> operator *(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x * right.x, left.y * right.y);
        }

        template <typename T>
        inline MyVector2<T>& operator *=(MyVector2<T>& left, const MyVector2<T>& right)
        {
            left.x *= right.x;
            left.y *= right.y;
            return left;
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

        template <typename T>
        inline MyVector2<T> operator /(const MyVector2<T>& left, const MyVector2<T>& right)
        {
            return MyVector2<T>(left.x / right.x, left.y / right.y);
        }
        template<typename T>
        inline MyVector2<T>& operator/=(MyVector2<T>& left, const MyVector2<T>& right)
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

        template <typename T, typename U>
        inline float DotProduct(const MyVector2<T>& left, const MyVector2<U>& right)
        {
            return (left.x * right.x) + (left.y * right.y);
        }

        template <typename T, typename U>
        inline float Dot(const MyVector2<T>& left, const MyVector2<U>& right)
        {
            return DotProduct(left, right);
        }

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