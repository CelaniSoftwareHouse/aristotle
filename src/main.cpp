#include <iostream>
#include <Aristotle/ApplicationContext.hpp>

Aristotle::core::ApplicationContext* Aristotle::core::ApplicationContext::istance = nullptr;

int main()
{
    auto & appContext = Aristotle::core::ApplicationContext::getIstance();
    appContext.RegisterBean("1",5);
    std::cout << std::any_cast<int>(appContext.GetBean("1")) << std::endl;
    return 0;
}