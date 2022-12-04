#include "Card.h"

Card::Card(string name, string description):name(name),description(description)
{
    //ctor
}

Card::~Card()
{

}

Card::Card(const Card& other)
{
    //copy ctor
}

Card& Card::operator=(const Card& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string Card::str()const
{
    return  name + "-" + description;


}

string Card::getName()const
{
    return name;
}

string Card::getDescription()const
{
    return description;
}

int Card::UseCard()
{

    srand(time(0));
    int r = rand()%11;
    if(r < 6) return 2;
    if(r >= 6 && r< 8)return 4;
    if(r <= 10) return 8;
}

