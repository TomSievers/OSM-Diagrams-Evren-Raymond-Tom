#ifndef CARD_HPP
#define CARD_HPP
#include <string>

typedef unsigned long long ull_t;

class Card
{
private:
    ull_t id;
public:
    Card(std::string& signature) : id(stoi(signature)){}
    ~Card(){}
    ull_t getId(){return id;}
};



#endif // !CARD_HPP
