/*
 * ICloseCommunication.h
 *
 *  Created on: 29.10.2019
 *      Author: helta
 */

#ifndef ICLOSECOMMUNICATION_HPP_
#define ICLOSECOMMUNICATION_HPP_
#include <string>

class ICloseCommunication
{
public:
	ICloseCommunication();
	virtual ~ICloseCommunication();
	virtual bool isObjectPresent() = 0;
	virtual std::string& readSignature() = 0;
};

class RFID : public ICloseCommunication
{
public:
	RFID();
	virtual ~RFID();
	bool isObjectPresent();
	std::string& readSignature();
};

#endif /* ICLOSECOMMUNICATION_HPP_ */
