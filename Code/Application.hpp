#ifndef APPLICATION_HPP
#define APPLICATION_HPP
#include "DataTypes.hpp"
#include "UserSession.hpp"
#include <string>
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

class ClientApplication : public Application
{
private:
    IClientSession session;
    bool editUser(DataTypes::User& updatedUser);
    short mainThread();
    bool registerUser(std::string& name, std::string& address, std::string& email, std::string& bankAccountNumber);
    bool setSubscription(DataTypes::Subscription newSub);
    bool makeReservation(ull_t carId, ull_t userId, ull_t startTime, ull_t endTime);
    void displayMessage(std::string& message);
public:
    ClientApplication(/* args */);
    virtual ~ClientApplication();
};

class AdminApplication : public Application
{
private:
    IAdminSession session;
    bool editUser(DataTypes::User& updatedUser);
    short mainThread();
    bool creatAdmin(std::string& username, std::string& password);
    bool editCar(DataTypes::CarDetails& updatedCar);
public:
    AdminApplication(/* args */);
    virtual ~AdminApplication();
};


#endif // !APPLICATION_HPP