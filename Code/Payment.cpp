/*
 * Payment.cpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#include "Payment.hpp"
#include "Bank.hpp"

/*static*/ std::unique_ptr<IBank> Payment::bank = std::make_unique<Bank>();
/*static*/ std::shared_ptr<IDataBaseConnector> Payment::DBCon = std::make_shared<DataBaseConnector>();

Payment::Payment(): IPayment()
{
	// TODO Auto-generated constructor stub

}

Payment::~Payment()
{
	// TODO Auto-generated destructor stub
}

IPayment::IPayment()
{
	// TODO Auto-generated constructor stub

}

IPayment::~IPayment()
{
	// TODO Auto-generated destructor stub
}

void Payment::sendInvoice(DataTypes::Reservation& reservation)
{
}

DataTypes::OpenPayment Payment::reservationToInvoice(
		DataTypes::Reservation& reservation)
{

}

short Payment::mainThread()
{
}
