#ifndef POLE_HPP
#define POLE_HPP
#include "DataTypes.hpp"
#include "PoleSession.hpp"
#include "Card.hpp"
#include "ICloseCommunication.hpp"
#include <string>
class Pole
{
private:
    ull_t id, blinkTimer = 300;
    IPoleSession session;
    ICloseCommunication communication;
public:
    Pole(/* args */);
    virtual ~Pole();
    short mainThread();
    void blinkSingalOn();
    void blinkSignalOff();
    void displayMessage(std::string& message);
};

#endif // !POLE_HPP
