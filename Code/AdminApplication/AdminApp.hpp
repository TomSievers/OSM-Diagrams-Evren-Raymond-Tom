#ifndef ADMINAPP_HPP
#define ADMINAPP_HPP
#include "../Application.hpp"

class AdminApplication : public Application
{
private:
	std::unique_ptr<IAdminSession> session_ptr;
    bool editUser(DataTypes::User& updatedUser);
    short mainThread();
    bool creatAdmin(std::string& username, std::string& password);
    bool editCar(DataTypes::CarDetails& updatedCar);
public:
    AdminApplication(/* args */);
    virtual ~AdminApplication();
};

#endif