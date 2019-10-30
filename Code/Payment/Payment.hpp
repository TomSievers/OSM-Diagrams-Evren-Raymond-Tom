/*
 * Payment.hpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#ifndef PAYMENT_HPP_
#define PAYMENT_HPP_
#include "../DataTypes.hpp"
#include "Bank.hpp"
#include "../DatabaseConnector/IDataBaseConnector.hpp"
#include <memory>

class __declspec(dllexport) IPayment
{
public:
	IPayment();
	virtual ~IPayment();
	virtual void sendInvoice(DataTypes::Reservation& reservation) = 0;
	virtual DataTypes::OpenPayment reservationToInvoice(DataTypes::Reservation& reservation) = 0;
};

class Payment : public IPayment
{
private:
	std::vector<DataTypes::OpenPayment> handlingPayments;
	static std::unique_ptr<IBank> bank;
	static std::shared_ptr<IDataBaseConnector> DBCon;
public:
	__declspec(dllexport) Payment();
	virtual __declspec(dllexport) ~Payment();
	void sendInvoice(DataTypes::Reservation& reservation);
	DataTypes::OpenPayment reservationToInvoice(DataTypes::Reservation& reservation);
	short mainThread();
};

#endif /* PAYMENT_HPP_ */
