/*
 * Payment.cpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#include "Payment.hpp"
#include "Bank.hpp"

/*static*/ std::unique_ptr<IBank> Payment::bank = std::make_unique<Bank>();

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

