#ifndef _APP_SERVICE_HPP_
#define _APP_SERVICE_HPP_

#include <core/materials/service.hpp>
#include <core/materials/module.hpp>
#include <types/name.type.hpp>
#include <shared.hpp>

namespace Wasp
{
    class AppService : public Service
    {
    public:
        virtual void init() override
        {
            // std::cout << "App Service Initialized!" << std::endl;
            this->m_initialized = true;
        };
        virtual void run() override
        {
            this->m_running = true;
            // std::cout << "App Service Running...." << std::endl;
        };
        virtual ~AppService() override{};
        AppService(const Wasp::Types::TName &name) : Service(name){};

    private:
    };

    // AppService Global Initialization!
    namespace Bootstrap
    {
        const auto appService = std::make_shared<Wasp::AppService>("APPService");
    };

};

#endif // !_APP_SERVICE_HPP_
