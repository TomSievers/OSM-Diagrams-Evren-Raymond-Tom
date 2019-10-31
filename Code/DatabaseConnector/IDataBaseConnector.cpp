/*
 * IDataBaseConnector.cpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#include "IDataBaseConnector.hpp"

IDataBaseConnector::IDataBaseConnector()
{
	// TODO Auto-generated constructor stub

}

IDataBaseConnector::~IDataBaseConnector()
{
	// TODO Auto-generated destructor stub
}

DataBaseConnector::DataBaseConnector(): IDataBaseConnector()
{
	// TODO Auto-generated constructor stub

}

DataBaseConnector::~DataBaseConnector()
{
	// TODO Auto-generated destructor stub
}

DataTypes::User& DataBaseConnector::getUser(ull_t id){}
std::vector<std::shared_ptr<DataTypes::User>> DataBaseConnector::getUser(){}
DataTypes::User& DataBaseConnector::getUserFromCard(ull_t cardId){}
void DataBaseConnector::addUser(DataTypes::User& user){}
void DataBaseConnector::editUser(DataTypes::User& user){}
void DataBaseConnector::deleteUser(DataTypes::User& user){}
DataTypes::Reservation& DataBaseConnector::getReservation(ull_t id){}
std::vector<std::shared_ptr<DataTypes::Reservation>> DataBaseConnector::getReservation(){}
DataTypes::Reservation& DataBaseConnector::getActiveReservationForCar(ull_t carId){}
void DataBaseConnector::addReservation(DataTypes::Reservation& reservation){}
void DataBaseConnector::editReservation(DataTypes::Reservation& reservation){}
void DataBaseConnector::deleteReservation(DataTypes::Reservation& reservation){}
DataTypes::CarDetails& DataBaseConnector::getCar(ull_t id){}
std::vector<std::shared_ptr<DataTypes::CarDetails>> DataBaseConnector::getCar(){}
void DataBaseConnector::addCar(DataTypes::CarDetails& car){}
void DataBaseConnector::editCar(DataTypes::CarDetails& car){}
void DataBaseConnector::deleteCar(DataTypes::CarDetails& car){}
DataTypes::OpenPayment& DataBaseConnector::getOpenPayment(ull_t id){}
std::vector<std::shared_ptr<DataTypes::OpenPayment>> DataBaseConnector::getOpenPayment(){}
void DataBaseConnector::addOpenPayment(DataTypes::OpenPayment& openPayment){}
void DataBaseConnector::editOpenPayment(DataTypes::OpenPayment& openPayment){}
void DataBaseConnector::deleteOpenPayment(DataTypes::OpenPayment& openPayment){}