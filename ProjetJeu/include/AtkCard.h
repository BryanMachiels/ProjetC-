#ifndef ATKCARD_H
#define ATKCARD_H
#include "Card.h"

class AtkCard : public Card
{
    public:
        AtkCard(string name="carte attaque", string description="cette carte attaque",int attack=2);
        virtual ~AtkCard();
        AtkCard(const AtkCard& other);
        AtkCard& operator=(const AtkCard& other);

        string str()const;
        int useCard();

    protected:

    private:
        int attack;
};

#endif // ATKCARD_H
