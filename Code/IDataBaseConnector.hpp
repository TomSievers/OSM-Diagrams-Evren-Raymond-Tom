/*
 * IDataBaseConnector.hpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#ifndef IDATABASECONNECTOR_HPP_
#define IDATABASECONNECTOR_HPP_
#include "DataTypes.hpp"

class IDataBaseConnector
{
public:
	IDataBaseConnector();
	virtual ~IDataBaseConnector();
	virtual DataTypes::User& getUser(ull_t id) = 0;
	virtual std::vector<std::shared_ptr<DataTypes::User>> getUser() = 0;
	virtual DataTypes::User& getUserFromCard(ull_t cardId) = 0;
	virtual void addUser(DataTypes::User& user) = 0;
	virtual void editUser(DataTypes::User& user) = 0;
	virtual void deleteUser(DataTypes::User& user) = 0;
	virtual DataTypes::Reservation& getReservation(ull_t id) = 0;
	virtual std::vector<std::shared_ptr<DataTypes::Reservation>> getReservation() = 0;
	virtual DataTypes::Reservation& getActiveReservationForCar(ull_t carId) = 0;
	virtual void addReservation(DataTypes::Reservation& reservation) = 0;
	virtual void editReservation(DataTypes::Reservation& reservation) = 0;
	virtual void deleteReservation(DataTypes::Reservation& reservation) = 0;
	virtual DataTypes::CarDetails& getCar(ull_t id) = 0;
	virtual std::vector<std::shared_ptr<DataTypes::CarDetails>> getCar() = 0;
	virtual void addCar(DataTypes::CarDetails& car) = 0;
	virtual void editCar(DataTypes::CarDetails& car) = 0;
	virtual void deleteCar(DataTypes::CarDetails& car) = 0;
	virtual DataTypes::OpenPayment& getOpenPayment(ull_t id) = 0;
	virtual std::vector<std::shared_ptr<DataTypes::OpenPayment>> getOpenPayment() = 0;
	virtual void addOpenPayment(DataTypes::OpenPayment& openPayment) = 0;
	virtual void editOpenPayment(DataTypes::OpenPayment& openPayment) = 0;
	virtual void deleteOpenPayment(DataTypes::OpenPayment& openPayment) = 0;
};

#endif /* IDATABASECONNECTOR_HPP_ */
