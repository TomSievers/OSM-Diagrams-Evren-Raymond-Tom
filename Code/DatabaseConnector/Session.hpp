#ifndef SESSION_HPP
#define SESSION_HPP
#include "../DataTypes.hpp"

class Session
{
private:
    ull_t id;
public:
    ull_t getSessionId();
    Session(/* args */);
    ~Session();
};




#endif // !SESSION_HPP
