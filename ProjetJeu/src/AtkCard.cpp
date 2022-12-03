#include "AtkCard.h"

AtkCard::AtkCard(string name, string description, int attack):Card(name,description),attack(attack)
{
    //ctor
}

AtkCard::~AtkCard()
{
    //dtor
}

AtkCard::AtkCard(const AtkCard& other)
{
    //copy ctor
}

AtkCard& AtkCard::operator=(const AtkCard& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

string AtkCard::str()const
{
    return Card::str() +" "+ std::to_string(attack);
}

int AtkCard::useCard()
{

    srand(time(0));
    int r = rand()%11;
    if(r < 6) return - attack;
    if(r >= 6 && r< 8)return - attack*1.5;
    if(r <= 10) return - attack*2;


}
