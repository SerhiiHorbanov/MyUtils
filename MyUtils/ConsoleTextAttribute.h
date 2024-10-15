#pragma once
#include <Windows.h>

namespace My
{
    namespace ConsoleUtils
    {
        struct ConsoleTextAttribute
        {
        public:
            enum Color : char
            {
                Black = 0,          //0000
                Blue = 1,           //0001
                Green = 2,          //0010
                Cyan = 3,           //0011
                Aqua = 3,           //0011
                Red = 4,            //0100
                Purple = 5,         //0101
                Yellow = 6,         //0110
                Gray = 8,           //1000
                LightGray = 7,      //0111
                LightBlue = 9,      //1001
                LightGreen = 10,    //1010
                LightCyan = 11,     //1011
                LightAqua = 11,     //1011
                LightRed = 12,      //1100
                LightPurple = 13,   //1101
                LightYellow = 14,   //1110
                White = 15,         //1111
            };

            ConsoleTextAttribute
            (
                Color foreGroundColor = LightGray, Color backGroundColor = Black, 
                bool topEdge = false, bool bottomEdge = false, bool rightEdge = false, bool leftEdge = false, 
                bool invertColors = false
            )
            {
                SetForeGroundColor(foreGroundColor);
                SetBackGroundColor(backGroundColor);

                SetTopEdge(topEdge);
                SetBottomEdge(bottomEdge);
                SetRightEdge(rightEdge);
                SetLeftEdge(leftEdge);

                SetInvertColors(invertColors);
            }

            void SetForeGroundColor(Color color);
            Color GetForeGroundColor();
            void SetBackGroundColor(Color color);
            Color GetBackGroundColor();

            void SetFG(Color color);
            Color GetFG(Color);
            void SetBG(Color color);
            Color GetBG(Color);

            void SetTopEdge(bool enabled);
            bool GetTopEdge();
            void SetBottomEdge(bool enabled);
            bool GetBottomEdge();
            void SetRightEdge(bool enabled);
            bool GetRightEdge();
            void SetLeftEdge(bool enabled);
            bool GetLeftEdge();

            void SetInvertColors(bool enabled);
            bool GetInvertColors();

            void Reset();

            void Apply();
        private:
            int _textAttribute = _standard;

            static constexpr int _standard = 7;// 7 is just black background with light gray text

        #pragma region Masks                                                     
            static constexpr int _foreGroundColorMask = 0b00000000000000000000000000001111;
            static constexpr int _backGroundColorMask = 0b00000000000000000000000011110000;

            static constexpr int _topEdgeMask =         0b00000000000000000000010000000000;
            static constexpr int _bottomEdgeMask =      0b00000000000000001000000000000000;
            static constexpr int _rightEdgeMask =       0b00000000000000000001000000000000;
            static constexpr int _leftEdgeMask =        0b00000000000000000000100000000000;
            static constexpr int _invertColorsMask =    0b00000000000000000100000000000000;
        #pragma region InvertedMasks    
                                                                                        //base2 representation:
            static constexpr int _invertedForeGroundColorMask = ~_foreGroundColorMask;  //0b11111111111111111111111111110000
            static constexpr int _invertedBackGroundColorMask = ~_backGroundColorMask;  //0b11111111111111111111111100001111
            static constexpr int _invertedTopEdgeMask = ~_topEdgeMask;                  //0b11111111111111111111101111111111
            static constexpr int _invertedBottomEdgeMask = ~_bottomEdgeMask;            //0b11111111111111110111111111111111
            static constexpr int _invertedRightEdgeMask = ~_rightEdgeMask;              //0b11111111111111111110111111111111
            static constexpr int _invertedLeftEdgeMask = ~_leftEdgeMask;                //0b11111111111111111111011111111111
            static constexpr int _invertedInvertColorsMask = ~_invertColorsMask;        //0b11111111111111111011111111111111
        #pragma endregion
        #pragma endregion
        };
    }
}
