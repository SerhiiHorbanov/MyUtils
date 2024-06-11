#include "MyRectangle.h"
#include "MyDistanceCalculation.h"

namespace MyUtils
{
    namespace MyMath
    {
        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetRight() const
        {
            return _rightTop.x;
        }
        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetLeft() const
        {
            return _leftBottom.x;
        }
        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetTop() const
        {
            return _rightTop.y;
        }
        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetBottom() const
        {
            return _leftBottom;
        }
        template<typename NumberType>
        MyVector2<NumberType> MyRectangle<NumberType>::GetRightTop() const
        {
            return _rightTop;
        }
        template<typename NumberType>
        MyVector2<NumberType> MyRectangle<NumberType>::GetRightBottom() const
        {
            return MyVector2<NumberType>(_rightTop.x, _leftBottom.y);
        }
        template<typename NumberType>
        MyVector2<NumberType> MyRectangle<NumberType>::GetLeftTop() const
        {
            return MyVector2<NumberType>(_leftBottom.x, _rightTop.y);
        }
        template<typename NumberType>
        MyVector2<NumberType> MyRectangle<NumberType>::GetLeftBottom() const
        {
            return _leftBottom;
        }

        template<typename NumberType>
        MyVector2f MyRectangle<NumberType>::GetRightLineCenter() const
        {
            return MyVector2f(_rightTop.x, GetCenterY());
        }
        template<typename NumberType>
        MyVector2f MyRectangle<NumberType>::GetLeftLineCenter() const
        {
            return MyVector2f(_leftBottom.x, GetCenterY());
        }
        template<typename NumberType>
        MyVector2f MyRectangle<NumberType>::GetTopLineCenter() const
        {
            return MyVector2f(GetCenterX(), _rightTop.y);
        }
        template<typename NumberType>
        MyVector2f MyRectangle<NumberType>::GetBottomLineCenter()const
        {
            return MyVector2f(GetCenterX(), _leftBottom.y);
        }

        template<typename NumberType>
        float MyRectangle<NumberType>::GetCenterX() const
        {
            return static_cast<float>(_rightTop.x + _leftBottom.x) / 2;
        }
        template<typename NumberType>
        float MyRectangle<NumberType>::GetCenterY() const
        {
            return static_cast<float>(_rightTop.y + _leftBottom.y) / 2;
        }
        template<typename NumberType>
        MyVector2f MyRectangle<NumberType>::GetCenter() const
        {
            return MyVector2f(GetCenterX(), GetCenterY());
        }

        template<typename NumberType>
        std::array<MyVector2<NumberType>, 4> MyRectangle<NumberType>::GetCorners() const
        {
            return std::array<MyVector2<NumberType>, 4> {GetRightTop(), GetRightBottom(), GetLeftBottom(), GetLeftTop()};
        }

        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetWidth() const
        {
            return _rightTop.x - _leftBottom.x;
        }
        template<typename NumberType>
        NumberType MyRectangle<NumberType>::GetHeight() const
        {
            return _rightTop.y - _leftBottom.y;
        }

        template<typename NumberType>
        float MyRectangle<NumberType>::GetDiagonalLength() const
        {
            return _rightTop.DistanceTo(_leftBottom);
        }
        template<typename NumberType>
        float MyRectangle<NumberType>::GetDiagonalLengthSquared() const
        {
            return _rightTop.DistanceSquaredTo(_leftBottom);
        }

        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::SetRight(const NumberType newRight)
        {
            _rightTop.x = newRight;
            return *this;
        }
        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::SetLeft(const NumberType newLeft)
        {
            _leftBottom.x = newLeft;
            return *this;
        }
        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::SetTop(const NumberType newTop)
        {
            _rightTop.y = newTop;
            return *this;
        }
        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::SetBottom(const NumberType newBotttom)
        {
            _leftBottom.y = newBotttom;
            return *this;
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetRightTop(const MyVector2<NumberType> newRightTop)
        {
            _rightTop = newRightTop;
            return *this;
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetRightBottom(const MyVector2<NumberType> newRightBottom)
        {
            _rightTop.x = newRightBottom.x;
            _leftBottom.y = newRightBottom.y;
            return *this;
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetLeftTop(const MyVector2<NumberType> newLeftTop)
        {
            _leftBottom.x = newLeftTop.x;
            _rightTop.y = newLeftTop.y;
            return *this;
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetLeftBottom(const MyVector2<NumberType> newLeftBotttom)
        {
            _leftBottom = newLeftBotttom;
            return *this;
        }
        
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetCenterX(float newCenterX) const
        {
            float centerX = GetCenterX();
            MoveX(-centerX);
            MoveX(newCenterX);
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetCenterY(float newCenterY) const
        {
            float centerY = GetCenterY();
            MoveY(-centerY);
            MoveY(newCenterY);
        }
        template<typename NumberType>
        MyVector2<NumberType>& MyRectangle<NumberType>::SetCenter(MyVector2f newCenter) const
        {
            SetCenterX(newCenter.x);
            SetCenterY(newCenter.y);
        }

        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::MoveX(const NumberType moveX)
        {
            _rightTop.x += moveX;
            _leftBottom.x += moveX;
        }
        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::MoveY(const NumberType moveY)
        {
            _rightTop.y += moveY;
            _leftBottom.y += moveY;
        }
        template<typename NumberType>
        MyRectangle<NumberType>& MyRectangle<NumberType>::Move(const MyVector2<NumberType> move)
        {
            MoveX(move.x);
            MoveX(move.y);
        }
    }
}