#pragma once
#include <vector>
#include <functional>

namespace MyUtils
{
    template <class... CallBackArguments>
    struct Observable
    {
    public:
        std::vector<std::function<void(CallBackArguments...)>> callbacks;
        
        void Notify(CallBackArguments... args);
        void operator ()(CallBackArguments... args);

        void AddObserver(std::function<void(CallBackArguments...)> newObserver);
    };

    template <typename CallBackArguments>
    void operator +=(Observable<CallBackArguments>& observable, std::function<void(CallBackArguments)> newObserver)
    {
        observable.AddObserver(newObserver);
    }
}