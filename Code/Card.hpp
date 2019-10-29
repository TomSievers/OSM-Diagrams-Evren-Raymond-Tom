#ifndef CARD_HPP
#define CARD_HPP
#include "DataTypes.hpp"
#include <string>
class Card
{
private:
    ull_t id;
public:
    Card(std::string& signature);
    ~Card();
    ull_t getId();
};

Card::Card(std::string& signature) : id(stoi(signature))
{
}

Card::~Card()
{
}

ull_t Card::getId()
{
    return id;
}


#endif // !CARD_HPP