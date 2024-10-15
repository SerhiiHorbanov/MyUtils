#pragma once
#include <vector>
#include <functional>

namespace My
{
    template <typename... CallBackArguments>
    struct Observable
    {
    public:
        using Callback = std::function<void(CallBackArguments...)>;
        
        std::vector<Callback> callbacks;
        
        void Notify(CallBackArguments... args);
        void operator ()(CallBackArguments... args);

        void AddObserver(Callback newObserver);
    };
}