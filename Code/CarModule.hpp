#ifndef CARMODULE_HPP
#define CARMODULE_HPP
#include "DataTypes.hpp"
#include "CarSession.hpp"
#include "GPS.hpp"
#include <memory>
class CarModule
{
private:
    ull_t blinkTimer = 300;
    std::unique_ptr<ICarSession> session;
    std::unique_ptr<IPositional> GPS;
public:
    CarModule();
    ~CarModule();
    void mainThread();
    void blinkSignalOn();
    void blinkSignalOff();
};

#endif // !CARMODULE_HPP

