#ifndef USERSESSION_HPP
#define USERSESSION_HPP
#include "DataTypes.hpp"
#include "Session.hpp"
#include <vector>
class IClientSession
{
public:
    IClientSession(/* args */);
    virtual ~IClientSession();
    virtual DataTypes::User& getUser(ull_t userId) = 0;
    virtual bool updateUser(DataTypes::User& updateUser) = 0;
    virtual std::vector<DataTypes::CarDetails>& searchCar(std::string& searchQuery) = 0;
};

class IAdminSession : public IClientSession
{
public:
    IAdminSession();
    virtual ~IAdminSession();
    virtual bool updateCar(DataTypes::CarDetails& updatedCar) = 0;
};

class UserSession : public IAdminSession, public Session
{
private:
    ull_t userId;
public:
    ull_t getUserId();
    UserSession(/* args */);
    virtual ~UserSession();
};



#endif // !USERSESSION_HPP
