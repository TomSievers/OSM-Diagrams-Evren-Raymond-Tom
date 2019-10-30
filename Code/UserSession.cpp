#include "UserSession.hpp"
UserSession::UserSession(/* args */): IAdminSession(), Session()
{
}

UserSession::~UserSession()
{
}

IAdminSession::IAdminSession(): IClientSession()
{

}
IAdminSession::~IAdminSession()
{

}
IClientSession::IClientSession()
{

}
IClientSession::~IClientSession()
{

}
