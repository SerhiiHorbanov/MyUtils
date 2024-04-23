#pragma once
namespace MyUtils
{
    namespace MyStateSystem
    {
        class MyStateMachine;

        class MyState
        {
        public:
            virtual void handle(MyStateMachine& machine) = 0;
        };
    }
}
