/*
 * Bank.cpp
 *
 *  Created on: 30 Oct 2019
 *      Author: Evren
 */

#include "Bank.hpp"

Bank::Bank(): IBank()
{
	// TODO Auto-generated constructor stub

}

Bank::~Bank()
{
	// TODO Auto-generated destructor stub
}

IBank::IBank()
{
	// TODO Auto-generated constructor stub

}

IBank::~IBank()
{
	// TODO Auto-generated destructor stub
}

void Bank::recieveInvoice(ull_t id, std::string bankAccountNumber, float amount)
{
}

DataTypes::InvoiceStatus Bank::checkInvoiceStatus(ull_t id)
{
}

