#ifndef CARMODULE_HPP
#define CARMODULE_HPP
#include "../DataTypes.hpp"
#include "../DatabaseConnector/CarSession.hpp"
#include "../GPS_Tracker/GPS.hpp"
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

