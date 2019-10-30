#include "UserSession.hpp"
UserSession::UserSession(/* args */): IAdminSession(), Session()
{
}

UserSession::~UserSession()
{
}

DataTypes::User& UserSession::getUser(ull_t userId){}
bool UserSession::updateUser(DataTypes::User& updateUser){}
std::vector<DataTypes::CarDetails>& UserSession::searchCar(std::string& searchQuery){}
bool UserSession::updateCar(DataTypes::CarDetails& updatedCar){}
ull_t UserSession::getUserId(){}
