#ifndef POLE_HPP
#define POLE_HPP
#include "DataTypes.hpp"
#include "PoleSession.hpp"
#include "Card.hpp"
#include "ICloseCommunication.hpp"
#include <string>
#include <memory>
class Pole
{
private:
    ull_t id, blinkTimer = 300;
    std::unique_ptr<IPoleSession> session_ptr;
    std::shared_ptr<ICloseCommunication> communication_ptr;
public:
    Pole(/* args */);
    virtual ~Pole();
    short mainThread();
    void blinkSingalOn();
    void blinkSignalOff();
    void displayMessage(std::string& message);
};

#endif // !POLE_HPP
