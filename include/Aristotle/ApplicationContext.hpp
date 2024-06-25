#ifndef ApplicationContext_file
#define ApplicationContext_file

#include <string>
#include <map>

namespace Aristotle::core
{

    class Bean {};

    class ApplicationContext
    {
        public:

            ApplicationContext(const ApplicationContext&) = delete;
            ApplicationContext(ApplicationContext&&) = delete;
            ApplicationContext& operator=(const ApplicationContext&) = delete;
            ApplicationContext& operator=(ApplicationContext&&) = delete;

            static ApplicationContext & getIstance();
            void RegisterBean(const std::string & id, Bean & bean);
            Bean GetBean(const std::string &id);

        private:
            std::map<std::string, Bean> beans;

            ApplicationContext() {}
            ~ApplicationContext() {}

            static ApplicationContext* istance;
    };


}

#endif