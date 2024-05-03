#pragma once
#include "MyState.h"

namespace MyUtils
{
    namespace MyStateSystem
    {
        class MyStateMachine
        {
        public:
            MyStateMachine(MyState* state) :
                _state(state)
            {}

            ~MyStateMachine()
            {
                delete _state;
            }

            inline void Handle()
            {
                _state->Handle(*this);
            }

            inline void SetState(MyState *newState)
            {
                delete _state;
                _state = newState;
            }
            inline void SetStateWithoutDeletingOld(MyState* newState)
            {
                _state = newState;
            }
            inline void GetState(MyState* newState)
            {
                _state = newState;
            }

            inline bool HasState()
            {
                return _state != nullptr;
            }
        private:
            MyState *_state;
        };
    }
}