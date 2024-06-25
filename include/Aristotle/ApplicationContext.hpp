#ifndef ApplicationContext_file
#define ApplicationContext_file

#include <string>
#include <memory>
#include <map>
#include <any>

namespace Aristotle::core
{

    class ApplicationContext
    {
        public:

            ApplicationContext(const ApplicationContext&) = delete;
            ApplicationContext(ApplicationContext&&) = delete;
            ApplicationContext& operator=(const ApplicationContext&) = delete;
            ApplicationContext& operator=(ApplicationContext&&) = delete;

            static ApplicationContext & getIstance();
            void RegisterBean(const std::string & id, std::any && bean);
            std::any GetBean(const std::string &id);

        private:
            std::map<std::string, std::any> beans;

            ApplicationContext() {}
            ~ApplicationContext() {}

            static ApplicationContext* istance;
    };


}

#endif