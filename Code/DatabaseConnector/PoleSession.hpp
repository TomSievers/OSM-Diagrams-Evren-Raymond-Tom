#ifndef POLESESSION_HPP
#define POLESESSION_HPP
#include "../DataTypes.hpp"
#include "Session.hpp"
#include "../Payment/Payment.hpp"
#include <memory>

class __declspec(dllexport) IPoleSession
{
public:
    IPoleSession();
    virtual ~IPoleSession();
    virtual bool hasReservation(ull_t cardId) = 0;
    virtual void checkIn(ull_t cardId) = 0;
    virtual void checkOut(ull_t cardId) = 0;
    virtual bool hasCarInUse(ull_t cardId) = 0;
    virtual bool carIsOnOriginalPosition(ull_t cardId) = 0;
    virtual void poleBlinkSetup(void (*blinkOn)(void), void(*blinkOff)(void)) = 0;
};

class PoleSession : public IPoleSession, public Session
{
private:
    ull_t poleId;
    static std::shared_ptr<IPayment> payment;
public:
    __declspec(dllexport) PoleSession(/* args */);
    virtual __declspec(dllexport) ~PoleSession();
    ull_t getPoleId();
    void (*blinkSignalOn)(void);
    void (*blinkSignalOff)(void);
};

#endif // !POLESESSION_HPP
