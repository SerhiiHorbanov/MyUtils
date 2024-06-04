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
            /// wrapper struct for float. made mostly for abstraction and to make a clear division between radians and degrees.
            /// </summary>
            struct Angle
            {
            public:
                Angle(float degrees) :
                    _degrees(degrees)
                {}

                float GetDegrees() const;
                float Degrees() const;
                float GetDeg() const;
                float Deg() const;

                void SetDegrees(const float newValue);
                void SetDeg(const float newValue);

                float GetRadians() const;
                float Radians() const;
                float GetRad() const;
                float Rad() const;

                void SetRadians(const float newValue);
                void SetRad(const float newValue);

                Angle Absolute() const;
                Angle Abs() const;
                Angle& MakeAbsolute();

                float AbsoluteDegrees() const;
                float AbsDeg() const;
                float AbsoluteRadians() const;
                float AbsRad() const;

                Angle Opposite() const;
                Angle& MakeOpposite();

                explicit operator float()
                {
                    MakeAbsolute();
                    return _degrees;
                }

            private:
                float _degrees;
            };

            Angle operator +(const Angle left, const Angle right);
            Angle operator -(const Angle left, const Angle right);
            Angle operator +=(Angle& left, const Angle right);
            Angle operator -=(Angle& left, const Angle right);

            Angle operator *(const Angle left, const Angle right);
            Angle operator /(const Angle left, const Angle right);
            Angle operator *=(Angle& left, const Angle right);
            Angle operator /=(Angle& left, const Angle right);

            bool operator ==(const Angle left, const Angle right);
            bool operator !=(const Angle left, const Angle right);

            float Difference(const Angle left, const Angle right);
            bool DifferenceIsLessThan(const Angle left, const Angle right, const float maxDifference);
        }
    }
}
