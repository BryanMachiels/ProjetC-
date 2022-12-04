#ifndef CARD_H
#define CARD_H
#include <string>
#include "random"
#include "time.h"

using namespace std;


class Card
{
    public:
        Card(string name="carte soin", string description="cette carte soigne");
        virtual ~Card();
        Card(const Card& other);
        Card& operator=(const Card& other);
        int UseCard();
        string str()const;


        string getName() const;
        string getDescription() const;

    protected:

    private:
        string name,description;

};

#endif // CARD_H
