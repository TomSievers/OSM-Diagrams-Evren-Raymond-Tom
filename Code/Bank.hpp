/*
 * Bank.hpp
 *
 *  Created on: 30 Oct 2019
 *      Author: Evren
 */

#ifndef BANK_HPP_
#define BANK_HPP_

#include "DataTypes.hpp"

class IBank
{
public:
	IBank();
	virtual ~IBank();
	virtual void recieveInvoice(ull_t id, std::string bankAccountNumber, float amount) = 0;
	virtual DataTypes::InvoiceStatus checkInvoiceStatus(ull_t id) = 0;
};

class Bank: public IBank
{
public:
	Bank();
	virtual ~Bank();
	void recieveInvoice(ull_t id, std::string bankAccountNumber, float amount);
	DataTypes::InvoiceStatus checkInvoiceStatus(ull_t id);
};

#endif /* BANK_HPP_ */
