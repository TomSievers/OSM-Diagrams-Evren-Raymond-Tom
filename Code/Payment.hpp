/*
 * Payment.hpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#ifndef PAYMENT_HPP_
#define PAYMENT_HPP_
#include "DataTypes.hpp"

class IPayment
{
public:
	IPayment();
	virtual ~IPayment();
	virtual void sendInvoice(DataTypes::Reservation& reservation) = 0;
	virtual DataTypes::OpenPayment reservationToInvoice(DataTypes::Reservation& reservation) = 0;
};

class IBank
{
public:
	IBank();
	virtual ~IBank();
	virtual void recieveInvoice(ull_t id, std::string bankAccountNumber, float amount) = 0;
	virtual DataTypes::InvoiceStatus checkInvoiceStatus(ull_t id) = 0;
};

class Payment : public IPayment
{
private:
	std::vector<DataTypes::OpenPayment> handlingPayments;
	IBank bank;
public:
	Payment();
	virtual ~Payment();
	void sendInvoice(DataTypes::Reservation& reservation);
	DataTypes::OpenPayment reservationToInvoice(DataTypes::Reservation& reservation);
	short mainThread();
};

#endif /* PAYMENT_HPP_ */
