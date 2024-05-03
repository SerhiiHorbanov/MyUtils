#pragma once
namespace MyUtils
{
    namespace MyStateSystem
    {
        class MyStateMachine;

        class MyState
        {
        public:
            virtual void Handle(MyStateMachine& machine) = 0;
        };
    }
}
