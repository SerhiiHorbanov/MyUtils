#pragma once
#include <cmath>
#include "Constants.h"
#include "DegreesAndRadiansConversion.h"

namespace MyUtils
{
    namespace MyMath
    {
        namespace AngleUtils
        {
            /// <summary>
            /// wrapper struct for float. made just for abstraction and to make a clear division between radians angles and degree angles.
            /// </summary>
            struct Angle
            {
            public:
                Angle(float degrees) :
                    _degrees(degrees)
                {}

#pragma region GettersAndSetters
    #pragma region Degrees
                inline float GetDegrees() const
                {
                    return _degrees;
                }
                inline float Degrees() const
                {
                    return _degrees;
                }
                inline float GetDeg() const
                {
                    return _degrees;
                }
                inline float Deg() const
                {
                    return _degrees;
                }

                inline void SetDegrees(const float newValue)
                {
                    _degrees = newValue;
                }
                inline void SetDeg(const float newValue)
                {
                    _degrees = newValue;
                }
    #pragma endregion

    #pragma region Radians
                inline float GetRadians() const
                {
                    return FromDegreesToRadians(_degrees);
                }
                inline float Radians() const
                {
                    return FromDegreesToRadians(_degrees);
                }
                inline float GetRad() const
                {
                    return FromDegreesToRadians(_degrees);
                }
                inline float Rad() const
                {
                    return FromDegreesToRadians(_degrees);
                }

                inline void SetRadians(const float newValue)
                {
                    _degrees = FromRadiansToDegrees(newValue);
                }
                inline void SetRad(const float newValue)
                {
                    _degrees = FromRadiansToDegrees(newValue);
                }
    #pragma endregion
#pragma endregion

#pragma region AbsoluteMethods
                inline Angle Abs() const
                {
                    float absDegrees = _degrees > 0 ? _degrees : -_degrees;
                    return std::fmod(absDegrees, 360.0f);
                }
                inline float AbsDegrees() const
                {
                    return Abs().Degrees();
                }
                inline float AbsDeg() const
                {
                    return Abs().Degrees();
                }
#pragma endregion



                explicit inline operator float()
                {
                    return _degrees;
                }

            private:
                float _degrees;
            };

#pragma region Angle-AngleOperations
            inline Angle operator +(const Angle left, const Angle right)
            {
                return left.Degrees() + right.Degrees();
            }
            inline Angle operator -(const Angle left, const Angle right)
            {
                return left.Degrees() - right.Degrees();
            }
            inline Angle operator +=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() + right.Degrees());
                return left;
            }
            inline Angle operator -=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() - right.Degrees());
                return left;
            }

            inline Angle operator *(const Angle left, const Angle right)
            {
                return left.Degrees() * right.Degrees();
            }
            inline Angle operator /(const Angle left, const Angle right)
            {
                return left.Degrees() / right.Degrees();
            }
            inline Angle operator *=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() * right.Degrees());
                return left;
            }
            inline Angle operator /=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() / right.Degrees());
                return left;
            }

            inline bool operator == (const Angle left, const Angle right)
            {
                return left.AbsDegrees() == right.AbsDegrees();
            }
            inline bool operator != (const Angle left, const Angle right)
            {
                return left.Degrees() != right.Degrees();
            }
#pragma endregion

#pragma region Angle-FloatOperations
            inline Angle operator +(const Angle left, const float right)
            {
                return left.Degrees() + right;
            }
            inline Angle operator -(const Angle left, const float right)
            {
                return left.Degrees() - right;
            }
            inline Angle operator +=(Angle& left, const float right)
            {
                left.SetDegrees(left.Degrees() + right);
                return left;
            }
            inline Angle operator -=(Angle& left, const float right)
            {
                left.SetDegrees(left.Degrees() - right);
                return left;
            }

            inline Angle operator *(const Angle left, const float right)
            {
                return left.Degrees() * right;
            }
            inline Angle operator /(const Angle left, const float right)
            {
                return left.Degrees() / right;
            }
            inline Angle operator *=(Angle& left, const float right)
            {
                left.SetDegrees(left.Degrees() * right);
                return left;
            }
            inline Angle operator /=(Angle& left, const float right)
            {
                left.SetDegrees(left.Degrees() / right);
                return left;
            }

            inline bool operator == (const Angle left, const float right)
            {
                return left.Degrees() == right;
            }
            inline bool operator != (const Angle left, const float right)
            {
                return left.Degrees() != right;
            }
#pragma endregion

#pragma region Float-AngleOperations
            inline Angle operator +(const float left, const Angle right)
            {
                return left + right.Degrees();
            }
            inline Angle operator -(const float left, const Angle right)
            {
                return left - right.Degrees();
            }
            inline Angle operator +=(float& left, const Angle right)
            {
                left += right.Degrees();
                return left;
            }
            inline Angle operator -=(float& left, const Angle right)
            {
                left -= right.Degrees();
                return left;
            }

            inline Angle operator *(const float left, const Angle right)
            {
                return left * right.Degrees();
            }
            inline Angle operator /(const float left, const Angle right)
            {
                return left / right.Degrees();
            }
            inline Angle operator *=(float& left, const Angle right)
            {
                left *= right.Degrees();
                return left;
            }
            inline Angle operator /=(float& left, const Angle right)
            {
                left /= right.Degrees();
                return left;
            }

            inline bool operator == (const float left, const Angle right)
            {
                return left == right.Degrees();
            }
            inline bool operator != (const float left, const Angle right)
            {
                return left != right.Degrees();
            }
#pragma endregion
        }
    }
}
