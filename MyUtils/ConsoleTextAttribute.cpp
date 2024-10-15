#include "ConsoleTextAttribute.h"
namespace My
{
    namespace ConsoleUtils
    {
        void ConsoleTextAttribute::SetForeGroundColor(Color color)
        {
            _textAttribute &= _invertedForeGroundColorMask;
            _textAttribute += color;
        }
        ConsoleTextAttribute::Color ConsoleTextAttribute::GetForeGroundColor()
        {
            return (Color)(_textAttribute & _foreGroundColorMask);
        }
        void ConsoleTextAttribute::SetBackGroundColor(Color color)
        {
            _textAttribute &= _invertedBackGroundColorMask;
            _textAttribute += color << 4;
        }
        ConsoleTextAttribute::Color ConsoleTextAttribute::GetBackGroundColor()
        {
            return (Color)(_textAttribute & _backGroundColorMask);
        }

        void ConsoleTextAttribute::SetFG(Color color)
        {
            SetForeGroundColor(color);
        }
        ConsoleTextAttribute::Color ConsoleTextAttribute::GetFG(Color)
        {
            return GetForeGroundColor();
        }
        void ConsoleTextAttribute::SetBG(Color color)
        {
            SetBackGroundColor(color);
        }
        ConsoleTextAttribute::Color ConsoleTextAttribute::GetBG(Color)
        {
            return GetBackGroundColor();
        }

        void ConsoleTextAttribute::SetTopEdge(bool enabled)
        {
            _textAttribute &= _invertedTopEdgeMask;
            if (enabled)
                _textAttribute += _topEdgeMask;
        }
        bool ConsoleTextAttribute::GetTopEdge()
        {
            return (_textAttribute & _topEdgeMask) != 0;
        }
        void ConsoleTextAttribute::SetBottomEdge(bool enabled)
        {
            _textAttribute &= _invertedBottomEdgeMask;
            if (enabled)
                _textAttribute += _bottomEdgeMask;
        }
        bool ConsoleTextAttribute::GetBottomEdge()
        {
            return (_textAttribute & _bottomEdgeMask) != 0;
        }
        void ConsoleTextAttribute::SetRightEdge(bool enabled)
        {
            _textAttribute &= _invertedTopEdgeMask;
            if (enabled)
                _textAttribute += _topEdgeMask;
        }
        bool ConsoleTextAttribute::GetRightEdge()
        {
            return (_textAttribute & _rightEdgeMask) != 0;
        }
        void ConsoleTextAttribute::SetLeftEdge(bool enabled)
        {
            _textAttribute &= _invertedLeftEdgeMask;
            if (enabled)
                _textAttribute += _leftEdgeMask;
        }
        bool ConsoleTextAttribute::GetLeftEdge()
        {
            return (_textAttribute & _leftEdgeMask) != 0;
        }

        void ConsoleTextAttribute::SetInvertColors(bool enabled)
        {
            _textAttribute &= _invertedInvertColorsMask;
            if (enabled)
                _textAttribute += _invertColorsMask;
        }
        bool ConsoleTextAttribute::GetInvertColors()
        {
            return (_textAttribute & _invertColorsMask) != 0;
        }

        void ConsoleTextAttribute::Reset()
        {
            _textAttribute = _standard;
        }

        void ConsoleTextAttribute::Apply()
        {
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//this NEEDS to be optimized. i want to store it statically or something like that, so i don't have to get it every Apply()
            SetConsoleTextAttribute(handle, _textAttribute);
        }
    }
}