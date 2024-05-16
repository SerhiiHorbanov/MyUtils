#include "MyConsoleTextAttribute.h"
namespace MyUtils
{
    namespace MyConsoleUtils
    {
        void MyConsoleTextAttribute::SetForeGroundColor(Color color)
        {
            _textAttribute &= _invertedForeGroundColorMask;
            _textAttribute += color;
        }
        MyConsoleTextAttribute::Color MyConsoleTextAttribute::GetForeGroundColor()
        {
            return (Color)(_textAttribute & _foreGroundColorMask);
        }
        void MyConsoleTextAttribute::SetBackGroundColor(Color color)
        {
            _textAttribute &= _invertedBackGroundColorMask;
            _textAttribute += color << 4;
        }
        MyConsoleTextAttribute::Color MyConsoleTextAttribute::GetBackGroundColor()
        {
            return (Color)(_textAttribute & _backGroundColorMask);
        }

        void MyConsoleTextAttribute::SetFG(Color color)
        {
            SetForeGroundColor(color);
        }
        MyConsoleTextAttribute::Color MyConsoleTextAttribute::GetFG(Color)
        {
            return GetForeGroundColor();
        }
        void MyConsoleTextAttribute::SetBG(Color color)
        {
            SetBackGroundColor(color);
        }
        MyConsoleTextAttribute::Color MyConsoleTextAttribute::GetBG(Color)
        {
            return GetBackGroundColor();
        }

        void MyConsoleTextAttribute::SetTopEdge(bool enabled)
        {
            _textAttribute &= _invertedTopEdgeMask;
            if (enabled)
                _textAttribute += _topEdgeMask;
        }
        bool MyConsoleTextAttribute::GetTopEdge()
        {
            return (_textAttribute & _topEdgeMask) != 0;
        }
        void MyConsoleTextAttribute::SetBottomEdge(bool enabled)
        {
            _textAttribute &= _invertedBottomEdgeMask;
            if (enabled)
                _textAttribute += _bottomEdgeMask;
        }
        bool MyConsoleTextAttribute::GetBottomEdge()
        {
            return (_textAttribute & _bottomEdgeMask) != 0;
        }
        void MyConsoleTextAttribute::SetRightEdge(bool enabled)
        {
            _textAttribute &= _invertedTopEdgeMask;
            if (enabled)
                _textAttribute += _topEdgeMask;
        }
        bool MyConsoleTextAttribute::GetRightEdge()
        {
            return (_textAttribute & _rightEdgeMask) != 0;
        }
        void MyConsoleTextAttribute::SetLeftEdge(bool enabled)
        {
            _textAttribute &= _invertedLeftEdgeMask;
            if (enabled)
                _textAttribute += _leftEdgeMask;
        }
        bool MyConsoleTextAttribute::GetLeftEdge()
        {
            return (_textAttribute & _leftEdgeMask) != 0;
        }

        void MyConsoleTextAttribute::SetInvertColors(bool enabled)
        {
            _textAttribute &= _invertedInvertColorsMask;
            if (enabled)
                _textAttribute += _invertColorsMask;
        }
        bool MyConsoleTextAttribute::GetInvertColors()
        {
            return (_textAttribute & _invertColorsMask) != 0;
        }

        void MyConsoleTextAttribute::Reset()
        {
            _textAttribute = _standard;
        }

        void MyConsoleTextAttribute::Apply()
        {
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//this NEEDS to be optimized. i want to store it statically or something like that, so i don't have to get it every Apply()
            SetConsoleTextAttribute(handle, _textAttribute);
        }
    }
}