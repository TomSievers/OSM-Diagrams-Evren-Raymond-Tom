#ifndef USERSESSION_HPP
#define USERSESSION_HPP
#include "../DataTypes.hpp"
#include "Session.hpp"
#include <vector>
#include "AdminSession.hpp"

class UserSession : public IAdminSession, public Session
{
private:
    ull_t userId;
public:
    __declspec(dllexport) UserSession(/* args */);
    virtual __declspec(dllexport) ~UserSession();
    DataTypes::User& getUser(ull_t userId);
    bool updateUser(DataTypes::User& updateUser);
    std::vector<DataTypes::CarDetails>& searchCar(std::string& searchQuery);
    bool updateCar(DataTypes::CarDetails& updatedCar);
    ull_t getUserId();
};



#endif // !USERSESSION_HPP
