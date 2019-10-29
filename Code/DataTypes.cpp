#include "DataTypes.hpp"
using namespace DataTypes;

bool Reservation::isCheckedIn() const
{
	return checkedIn;
}

void Reservation::setCheckedIn(bool checkedIn)
{
	this->checkedIn = checkedIn;
}

bool Reservation::isCompleted() const
{
	return completed;
}

void Reservation::setCompleted(bool completed)
{
	this->completed = completed;
}

ull_t Reservation::getEndMileage() const
{
	return endMileage;
}

void Reservation::setEndMileage(ull_t endMileage)
{
	this->endMileage = endMileage;
}

ull_t Reservation::getEndTime() const
{
	return endTime;
}

ull_t Reservation::getId() const
{
	return id;
}

const Position& Reservation::getPickupPosition() const
{
	return pickupPosition;
}

void Reservation::setPickupPosition(
		const Position &pickupPosition)
{
	this->pickupPosition = pickupPosition;
}

ull_t Reservation::getStartMileage() const
{
	return startMileage;
}

void Reservation::setStartMileage(ull_t startMileage)
{
	this->startMileage = startMileage;
}

Subscription DataTypes::Reservation::getSubscription() const
{
	return subscription;
}

ull_t Reservation::getStartTime() const
{
	return startTime;
}

const std::string& CarDetails::getBrand() const
{
	return brand;
}

const std::string& CarDetails::getExtras() const
{
	return extras;
}

void CarDetails::setExtras(const std::string &extras)
{
	this->extras = extras;
}

ull_t CarDetails::getId() const
{
	return id;
}

const std::string& CarDetails::getLicensePlate() const
{
	return licensePlate;
}

short CarDetails::getNoDoors() const
{
	return noDoors;
}

void CarDetails::setNoDoors(short noDoors)
{
	this->noDoors = noDoors;
}

short CarDetails::getNoSeats() const
{
	return noSeats;
}

void CarDetails::setNoSeats(short noSeats)
{
	this->noSeats = noSeats;
}

const Position& CarDetails::getPosition() const
{
	return position;
}

void CarDetails::setPosition(const Position &position)
{
	this->position = position;
}

bool DataTypes::User::isAccountActive() const
{
	return accountActive;
}

void DataTypes::User::setAccountActive(bool accountActive = true)
{
	this->accountActive = accountActive;
}

const Card& DataTypes::User::getCard() const
{
	return card;
}

const std::vector<OpenPayment_ptr>& DataTypes::User::getOpenPayments() const
{
	return openPayments;
}

const std::vector<Reservation_ptr>& DataTypes::User::getReservations() const
{
	return reservations;
}

Subscription DataTypes::User::getSubscription() const
{
	return subscription;
}

void DataTypes::User::setSubscription(Subscription subscription)
{
	this->subscription = subscription;
}
