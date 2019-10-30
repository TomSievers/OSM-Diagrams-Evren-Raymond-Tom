/*
 * ICloseCommunication.cpp
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#include "ICloseCommunication.hpp"

ICloseCommunication::ICloseCommunication()
{
	// TODO Auto-generated constructor stub

}

ICloseCommunication::~ICloseCommunication()
{
	// TODO Auto-generated destructor stub
}

RFID::RFID() : ICloseCommunication()
{
}

RFID::~RFID()
{
}

bool RFID::isObjectPresent()
{
}

std::string& RFID::readSignature()
{
}
