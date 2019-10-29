#ifndef GPS_HPP
#define GPS_HPP
#include "Position.hpp"
class IPositional
{
public:
    virtual Position getPosition() = 0;
};

class GPS : public IPositional
{
private:
    /* data */
public:
    GPS(/* args */);
    ~GPS();
};



#endif // !GPS_HPP
