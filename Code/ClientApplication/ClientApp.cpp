#include "ClientApp.hpp"

ClientApplication::ClientApplication(/* args */){}
ClientApplication::~ClientApplication(){}

bool ClientApplication::editUser(DataTypes::User& updatedUser){}
short ClientApplication::mainThread(){}
bool ClientApplication::registerUser(std::string& name, std::string& address, std::string& email, std::string& bankAccountNumber){}
bool ClientApplication::setSubscription(DataTypes::Subscription newSub){}
bool ClientApplication::makeReservation(ull_t carId, ull_t userId, ull_t startTime, ull_t endTime){}
void ClientApplication::displayMessage(std::string& message){}