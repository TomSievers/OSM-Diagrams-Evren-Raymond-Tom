#ifndef CLIENTSESSION_HPP
#define CLIENTSESSION_HPP
#include "../DataTypes.hpp"

class __declspec(dllexport) IClientSession
{
public:
    IClientSession(/* args */){};
    virtual ~IClientSession(){};
    virtual DataTypes::User& getUser(ull_t userId) = 0;
    virtual bool updateUser(DataTypes::User& updateUser) = 0;
    virtual std::vector<DataTypes::CarDetails>& searchCar(std::string& searchQuery) = 0;
    virtual ull_t getUserId() = 0;
};

#endif // !CLIENTSESSION_HPP

