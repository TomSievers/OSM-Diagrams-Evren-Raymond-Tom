#ifndef GPS_HPP
#define GPS_HPP
#include "../Position.hpp"
class __declspec(dllexport) IPositional
{
public:
    IPositional();
    virtual ~IPositional();
    virtual Position getPosition() = 0;
};

class GPS : public IPositional
{
private:
    double latitude, longitude, altitude;
public:
    __declspec(dllexport) GPS(/* args */);
    virtual __declspec(dllexport) ~GPS();
    Position getPosition();
};



#endif // !GPS_HPP
