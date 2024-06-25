#include <Aristotle/ApplicationContext.hpp>
#include <string>
#include <memory>
#include <map>

namespace Aristotle::core
{
    ApplicationContext &ApplicationContext::getIstance()
    {
        if (!istance)
        {
            istance = new ApplicationContext();
        }
        return *istance;
    }

    void ApplicationContext::RegisterBean(const std::string &id, std::any &&bean)
    {
        this->beans[id] = bean;
    }

    std::any ApplicationContext::GetBean(const std::string &id)
    {
        return this->beans[id];
    }
}