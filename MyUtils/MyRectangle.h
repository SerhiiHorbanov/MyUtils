#pragma once
#include "MyVector2.h"

namespace MyUtils
{
    namespace MyMath
    {
        template<typename NumberType>
        struct MyRectangle
        {
        public:
            MyRectangle() :
                _rightTop(),
                _leftBottom()
            {}

            MyRectangle(NumberType right, NumberType left, NumberType top, NumberType bottom) :
                _rightTop(MyVector2<NumberType>(right, top)),
                _leftBottom(MyVector2<NumberType>(left, bottom))
            {}

            MyRectangle(MyVector2<NumberType> rightTop, MyVector2<NumberType> leftBottom) :
                _rightTop(rightTop),
                _leftBottom(leftBottom)
            {}

            NumberType GetRight() const;
            NumberType GetLeft() const;
            NumberType GetTop() const;
            NumberType GetBottom() const;

            MyVector2<NumberType> GetRightTop() const;
            MyVector2<NumberType> GetRightBottom() const;
            MyVector2<NumberType> GetLeftTop() const;
            MyVector2<NumberType> GetLeftBottom() const;

            MyVector2f GetRightLineCenter() const;
            MyVector2f GetLeftLineCenter() const;
            MyVector2f GetTopLineCenter() const;
            MyVector2f GetBottomLineCenter() const;

            float GetCenterX() const;
            float GetCenterY() const;
            MyVector2f GetCenter() const;

            std::array<MyVector2<NumberType>, 4> GetCorners() const;

            NumberType GetWidth() const;
            NumberType GetHeight() const;

            float GetDiagonalLength() const;
            float GetDiagonalLengthSquared() const;

            MyRectangle<NumberType>& SetRight(const NumberType newRight);
            MyRectangle<NumberType>& SetLeft(const NumberType newLeft);
            MyRectangle<NumberType>& SetTop(const NumberType newTop);
            MyRectangle<NumberType>& SetBottom(const NumberType newBotttom);

            MyVector2<NumberType>& SetRightTop(const MyVector2<NumberType> newRightTop);
            MyVector2<NumberType>& SetRightBottom(const MyVector2<NumberType> newRightBottom);
            MyVector2<NumberType>& SetLeftTop(const MyVector2<NumberType> newLeftTop);
            MyVector2<NumberType>& SetLeftBottom(const MyVector2<NumberType> newLeftBotttom);

            MyVector2<NumberType>& SetCenterX(float newCenterX) const;
            MyVector2<NumberType>& SetCenterY(float newCenterY) const;
            MyVector2<NumberType>& SetCenter(MyVector2f newCenter) const;

            MyRectangle<NumberType>& MoveX(const NumberType moveX);
            MyRectangle<NumberType>& MoveY(const NumberType moveY);
            MyRectangle<NumberType>& Move(const MyVector2<NumberType> move);
            
            // you can uncomment these lines for some properties, but they can create some confusion so i commented them
            // __declspec(property(get = GetRight, put = SetRight)) NumberType right;
            // __declspec(property(get = GetLeft, put = SetLeft)) NumberType left;
            // __declspec(property(get = GetTop, put = SetTop)) NumberType top;
            // __declspec(property(get = GetBottom, put = SetBottom)) NumberType bottom;

            // __declspec(property(get = GetRightTop, put = SetRightTop)) MyVector2<NumberType> rightTop;
            // __declspec(property(get = GetRightBottom, put = SetRightBottom)) MyVector2<NumberType> rightBottom;
            // __declspec(property(get = GetLeftTop, put = SetLeftTop)) MyVector2<NumberType> leftTop;
            // __declspec(property(get = GetLeftBottom, put = SetLeftBottom)) MyVector2<NumberType> leftBottom;

        private:
            MyVector2<NumberType> _rightTop;
            MyVector2<NumberType> _leftBottom;
        };
    }
}

