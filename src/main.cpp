#include <iostream>
#include <Aristotle/ApplicationContext.hpp>

Aristotle::core::ApplicationContext* Aristotle::core::ApplicationContext::istance = nullptr;

int main()
{
    auto & appContext = Aristotle::core::ApplicationContext::getIstance();
    return 0;
}