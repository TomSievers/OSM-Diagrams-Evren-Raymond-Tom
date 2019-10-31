#ifndef CARSESSION_HPP
#define CARSESSION_HPP
#include "../Position.hpp"
#include "../DataTypes.hpp"
#include "Session.hpp"
class __declspec(dllexport) ICarSession
{
    public:
	ICarSession();
	virtual ~ICarSession();
    virtual ull_t getReservedCardId(ull_t id) = 0;
    virtual void updatePosition(Position currentPosition) = 0;
    virtual void updateCarStatus(DataTypes::CarStatus status) = 0;
    virtual void carBlinkSetup(void (*blinkOn)(void), void(*blinkOff)(void)) = 0;
};

class CarSession : public ICarSession, public Session
{
private:
    ull_t carId;
public:
    __declspec(dllexport) CarSession(/* args */);
    virtual __declspec(dllexport) ~CarSession();
    ull_t getCarId();
    void (*blinkSignalOn)(void);
    void (*blinkSignalOff)(void);
};


#endif // !CARSESSION_HPP
