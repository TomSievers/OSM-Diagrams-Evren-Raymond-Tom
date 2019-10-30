#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include "DataTypes.hpp"
#include "DatabaseConnector/UserSession.hpp"
#include <string>
#include <memory>
class Application
{
private:

protected:
    short login(std::string& email, std::string& password);
    virtual bool editUser(DataTypes::User& updatedUser) = 0;
    virtual short mainThread() = 0;
public:
    Application(/* args */);
    virtual ~Application();
    

};

#endif // !APPLICATION_HPP
