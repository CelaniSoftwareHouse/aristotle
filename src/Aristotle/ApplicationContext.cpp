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

    void ApplicationContext::RegisterBean(const std::string &id, Bean &bean)
    {
        this->beans[id] = bean;
    }

    Bean ApplicationContext::GetBean(const std::string &id)
    {
        return this->beans[id];
    }
}