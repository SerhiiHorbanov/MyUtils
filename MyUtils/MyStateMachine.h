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

            inline void handle()
            {
                _state->handle(*this);
            }

            inline void setState(MyState *newState)
            {
                delete _state;
                _state = newState;
            }
            inline void setStateWithoutDeletingOld(MyState* newState)
            {
                _state = newState;
            }
            inline void getState(MyState* newState)
            {
                _state = newState;
            }

            inline bool hasState()
            {
                return _state != nullptr;
            }
        private:
            MyState *_state;
        };
    }
}