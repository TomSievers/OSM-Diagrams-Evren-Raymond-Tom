#ifndef CLIENTAPP_HPP
#define CLIENTAPP_HPP
#include "../Application.hpp"

class ClientApplication : public Application
{
private:
    std::unique_ptr<IClientSession> session_ptr;
    DataTypes::CarDetails currentCar;
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

#endif