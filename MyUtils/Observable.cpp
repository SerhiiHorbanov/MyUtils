#include "Observable.h"

namespace MyUtils
{
    template <class... CallBackArguments>
    void Observable<CallBackArguments...>::Notify(CallBackArguments... args)
    {
        for(int i = 0; i < callbacks.size(); i++)
        {
            std::function<void(CallBackArguments...)>& callback = callbacks[i];

            callback(args...);
        }
    }

    template <class... CallBackArguments>
    void Observable<CallBackArguments...>::operator ()(CallBackArguments... args)
    {
        Notify(args);
    }

    template <class... CallBackArguments>
    void Observable<CallBackArguments...>::AddObserver(std::function<void(CallBackArguments...)> newObserver)
    {
        callbacks.push_back(newObserver);
    }
}