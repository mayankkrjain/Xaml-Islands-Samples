//
// Declaration of the App class.
//

#pragma once

#include "App.g.h"

namespace winrt::Contoso::Xaml::implementation
{
    #include "App.base.h"

    class App : public AppT2<App>
    {
    public:
        App();
        ~App();
    };
}

namespace winrt::Contoso::Xaml::factory_implementation
{
    class App : public AppT<App, implementation::App>
    {
    };
}
