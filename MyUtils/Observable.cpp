#include "Observable.h"

namespace MyUtils
{
    template <typename... CallBackArguments>
    void Observable<CallBackArguments...>::Notify(CallBackArguments... args)
    {
        for(Callback& callback : callbacks)
            callback(args...);
    }

    template <typename... CallBackArguments>
    void Observable<CallBackArguments...>::operator ()(CallBackArguments... args)
    {
        Notify(args...);
    }

    template <typename... CallBackArguments>
    void Observable<CallBackArguments...>::AddObserver(Callback newObserver)
    {
        callbacks.push_back(newObserver);
    }
}