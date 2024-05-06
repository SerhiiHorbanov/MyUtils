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
            /// wrapper struct for float. made mostly for abstraction and to make a clear division between radians angles and degree angles.
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
                /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
                inline Angle Absolute() const
                {
                    float limited360 = std::fmod(_degrees, 360.0f);
                    float absDegrees = limited360 > 0 ? limited360 : limited360 + 360;
                    return absDegrees;
                }
                /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
                inline float AbsoluteDegrees() const
                {
                    return Absolute().Degrees();
                }
                /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
                inline float AbsDeg() const
                {
                    return Absolute().Degrees();
                }
                /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
                inline float AbsoluteRadians() const
                {
                    return Absolute().Radians();
                }
                /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
                inline float AbsRad() const
                {
                    return Absolute().Radians();
                }
                /// <summary>
                /// makes the angle between 0 and 360
                /// </summary>
                inline Angle& MakeAbsolute()
                {
                    _degrees = AbsoluteDegrees();
                    return *this;
                }

                inline Angle Opposite()
                {
                    return -_degrees;
                }
                inline Angle& MakeOpposite()
                {
                    _degrees = -_degrees;
                }

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
                return left.AbsoluteDegrees() == right.AbsoluteDegrees();
            }
            inline bool operator != (const Angle left, const Angle right)
            {
                return left.Degrees() != right.Degrees();
            }

            inline Angle operator -(const Angle right)
            {
                return -right.Degrees();
            }
            inline Angle operator +(const Angle right)
            {
                return right;
            }
            /// <summary>
            /// function for comparing two angles. for example for something like Difference(Angle(90.0, 90.01) smaller than 1
            /// </summary>
            /// <returns>Absolute value of left - right</returns>
            inline float Difference(const Angle left, const Angle right)
            {
                float idkHowToCallThisVariableDontKillMe = (float)(left - right);
                return idkHowToCallThisVariableDontKillMe > 0 ? idkHowToCallThisVariableDontKillMe : -idkHowToCallThisVariableDontKillMe;
            }
            inline bool DifferenceSmallerThan(const Angle left, const Angle right, const float maxDifference)
            {
                float idkHowToCallThisVariableDontKillMe = (float)(left - right);
                float idkHowToCallThisVariableDontKillMePART2 = idkHowToCallThisVariableDontKillMe > 0 ? idkHowToCallThisVariableDontKillMe : -idkHowToCallThisVariableDontKillMe;
                return idkHowToCallThisVariableDontKillMePART2 < maxDifference;
            }
#pragma endregion
        }
    }
}
