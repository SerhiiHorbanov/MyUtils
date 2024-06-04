#include "Angle.h"

namespace MyUtils
{
    namespace MyMath
    {
        namespace AngleUtils
        {
            float Angle::GetDegrees() const
            {
                return _degrees;
            }
            float Angle::Degrees() const
            {
                return _degrees;
            }
            float Angle::GetDeg() const
            {
                return _degrees;
            }
            float Angle::Deg() const
            {
                return _degrees;
            }
            void Angle::SetDegrees(const float newValue)
            {
                _degrees = newValue;
            }
            void Angle::SetDeg(const float newValue)
            {
                _degrees = newValue;
            }
            float Angle::GetRadians() const
            {
                return FromDegreesToRadians(_degrees);
            }
            float Angle::Radians() const
            {
                return FromDegreesToRadians(_degrees);
            }
            float Angle::GetRad() const
            {
                return FromDegreesToRadians(_degrees);
            }
            float Angle::Rad() const
            {
                return FromDegreesToRadians(_degrees);
            }
            void Angle::SetRadians(const float newValue)
            {
                _degrees = FromRadiansToDegrees(newValue);
            }
            void Angle::SetRad(const float newValue)
            {
                _degrees = FromRadiansToDegrees(newValue);
            }

            /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
            Angle Angle::Absolute() const
            {
                float limited360 = std::fmod(_degrees, 360.0f);
                float absDegrees = limited360 > 0 ? limited360 : limited360 + 360;
                return absDegrees;
            }
            Angle Angle::Abs() const
            {
                float limited360 = std::fmod(_degrees, 360.0f);
                float absDegrees = limited360 > 0 ? limited360 : limited360 + 360;
                return absDegrees;
            }
            /// <summary>
            /// Makes the angle between 0 and 360
            /// </summary>
            /// <returns>Reference to this</returns>
            Angle& Angle::MakeAbsolute()
            {
                _degrees = AbsoluteDegrees();
                return *this;
            }

            /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
            float Angle::AbsoluteDegrees() const
            {
                return Absolute().Degrees();
            }

            /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
            float Angle::AbsDeg() const
            {
                return Absolute().Degrees();
            }

            /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
            float Angle::AbsoluteRadians() const
            {
                return Absolute().Radians();
            }

            /// <returns>Angle that is the same but is between 0 and 360 degrees</returns>
            float Angle::AbsRad() const
            {
                return Absolute().Radians();
            }

            Angle Angle::Opposite() const
            {
                return Angle(_degrees - 180);
            }
            Angle& Angle::MakeOpposite()
            {
                _degrees = Opposite().Degrees();
                return *this;
            }

            Angle operator +(const Angle left, const Angle right)
            {
                return left.Degrees() + right.Degrees();
            }
            Angle operator -(const Angle left, const Angle right)
            {
                return left.Degrees() - right.Degrees();
            }
            Angle operator +=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() + right.Degrees());
                return left;
            }
            Angle operator -=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() - right.Degrees());
                return left;
            }

            Angle operator *(const Angle left, const Angle right)
            {
                return left.Degrees() * right.Degrees();
            }
            Angle operator /(const Angle left, const Angle right)
            {
                return left.Degrees() / right.Degrees();
            }
            Angle operator *=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() * right.Degrees());
                return left;
            }
            Angle operator /=(Angle& left, const Angle right)
            {
                left.SetDegrees(left.Degrees() / right.Degrees());
                return left;
            }

            bool operator ==(const Angle left, const Angle right)
            {
                return left.AbsoluteDegrees() == right.AbsoluteDegrees();
            }
            bool operator !=(const Angle left, const Angle right)
            {
                return left.Degrees() != right.Degrees();
            }

            /// <summary>
            /// function for comparing two angles. for example for something like Difference(Angle(90.0, 90.01) smaller than 1
            /// </summary>
            /// <returns>Absolute value of left - right</returns>
            float Difference(const Angle left, const Angle right)
            {
                float idkHowToCallThisVariableDontKillMe = (float)(left - right);
                return idkHowToCallThisVariableDontKillMe > 0 ? idkHowToCallThisVariableDontKillMe : -idkHowToCallThisVariableDontKillMe;
            }
            bool DifferenceIsLessThan(const Angle left, const Angle right, const float maxDifference)
            {
                float idkHowToCallThisVariableDontKillMe = (float)(left - right);
                float idkHowToCallThisVariableDontKillMePART2 = idkHowToCallThisVariableDontKillMe > 0 ? idkHowToCallThisVariableDontKillMe : -idkHowToCallThisVariableDontKillMe;
                return idkHowToCallThisVariableDontKillMePART2 < maxDifference;
            }
        }
    }
}

