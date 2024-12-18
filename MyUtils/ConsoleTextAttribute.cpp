#include "ConsoleTextAttribute.h"
namespace My
{
    namespace ConsoleUtils
    {                                   
        constexpr uint32_t DefaultAttribute = (uint32_t)ConsoleColor::LightGray;

        constexpr uint32_t BackGroundColorShift = 4;

        constexpr uint32_t ForeGroundColorMask   = 0b00000000000000000000000000001111;
        constexpr uint32_t BackGroundColorMask   = 0b00000000000000000000000011110000;

        constexpr uint32_t TopEdgeMask           = 0b00000000000000000000010000000000;
        constexpr uint32_t BottomEdgeMask        = 0b00000000000000001000000000000000;
        constexpr uint32_t LeftEdgeMask          = 0b00000000000000000000100000000000;
        constexpr uint32_t RightEdgeMask         = 0b00000000000000000001000000000000;
        constexpr uint32_t InvertColorsMask      = 0b00000000000000000100000000000000;

        constexpr uint32_t InvertedForeGroundColorMask = ~ForeGroundColorMask;  //0b11111111111111111111111111110000
        constexpr uint32_t InvertedBackGroundColorMask = ~BackGroundColorMask;  //0b11111111111111111111111100001111
        constexpr uint32_t InvertedTopEdgeMask = ~TopEdgeMask;                  //0b11111111111111111111101111111111
        constexpr uint32_t InvertedBottomEdgeMask = ~BottomEdgeMask;            //0b11111111111111110111111111111111
        constexpr uint32_t InvertedRightEdgeMask = ~RightEdgeMask;              //0b11111111111111111110111111111111
        constexpr uint32_t InvertedLeftEdgeMask = ~LeftEdgeMask;                //0b11111111111111111111011111111111
        constexpr uint32_t InvertedInvertColorsMask = ~InvertColorsMask;        //0b11111111111111111011111111111111

        void ConsoleTextAttribute::InitializeSTDHandle()
        {
            handle = GetStdHandle(STD_OUTPUT_HANDLE);
        }

        void ConsoleTextAttribute::SetForeGroundColor(ConsoleColor color)
        {
            _textAttribute &= InvertedForeGroundColorMask;
            _textAttribute += (uint32_t)color;
        }
        ConsoleColor ConsoleTextAttribute::GetForeGroundColor()
        {
            return (ConsoleColor)(_textAttribute & ForeGroundColorMask);
        }
        void ConsoleTextAttribute::SetBackGroundColor(ConsoleColor color)
        {
            _textAttribute &= InvertedBackGroundColorMask;
            _textAttribute += (uint32_t)color << 4;
        }
        ConsoleColor ConsoleTextAttribute::GetBackGroundColor()
        {
            return (ConsoleColor)(_textAttribute & BackGroundColorMask);
        }

        void ConsoleTextAttribute::SetTopEdge(bool enabled)
        {
            _textAttribute &= InvertedTopEdgeMask;
            _textAttribute += TopEdgeMask * enabled;
        }
        bool ConsoleTextAttribute::GetTopEdge()
        {
            return _textAttribute & TopEdgeMask;
        }
        void ConsoleTextAttribute::SetBottomEdge(bool enabled)
        {
            _textAttribute &= InvertedBottomEdgeMask;
            _textAttribute += BottomEdgeMask * enabled;
        }
        bool ConsoleTextAttribute::GetBottomEdge()
        {
            return (_textAttribute & BottomEdgeMask) != 0;
        }
        void ConsoleTextAttribute::SetRightEdge(bool enabled)
        {
            _textAttribute &= InvertedTopEdgeMask;
            _textAttribute += TopEdgeMask * enabled;
        }
        bool ConsoleTextAttribute::GetRightEdge()
        {
            return _textAttribute & RightEdgeMask;
        }
        void ConsoleTextAttribute::SetLeftEdge(bool enabled)
        {
            _textAttribute &= InvertedLeftEdgeMask;
            _textAttribute += LeftEdgeMask * enabled;
        }
        bool ConsoleTextAttribute::GetLeftEdge()
        {
            return _textAttribute & LeftEdgeMask;
        }

        void ConsoleTextAttribute::SetInvertColors(bool enabled)
        {
            _textAttribute &= InvertedInvertColorsMask;
            _textAttribute += InvertColorsMask * enabled;
        }
        bool ConsoleTextAttribute::GetInvertColors()
        {
            return _textAttribute & InvertColorsMask;
        }

        void ConsoleTextAttribute::Reset()
        {
            _textAttribute = DefaultAttribute;
        }

        void ConsoleTextAttribute::Apply()
        {
            SetConsoleTextAttribute(handle, _textAttribute);
        }
    }
}