#ifndef CARMODULE_HPP
#define CARMODULE_HPP
#include "DataTypes.hpp"
#include "CarSession.hpp"
#include "GPS.hpp"
class CarModule
{
private:
    ull_t blinkTimer = 300;
    ICarSession session;
    IPositional GPS;
public:
    CarModule();
    ~CarModule();
    void mainThread();
    void blinkSignalOn();
    void blinkSignalOff();
};

#endif // !CARMODULE_HPP

