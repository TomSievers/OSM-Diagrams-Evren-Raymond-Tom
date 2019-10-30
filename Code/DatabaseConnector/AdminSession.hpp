#ifndef ADMINSESSION_HPP
#define ADMINSESSION_HPP
#include "../DataTypes.hpp"
#include "ClientSession.hpp"

class __declspec(dllexport) IAdminSession : public IClientSession
{
public:
    IAdminSession() : IClientSession() {}
    virtual ~IAdminSession(){}
    virtual bool updateCar(DataTypes::CarDetails& updatedCar) = 0;
};

#endif