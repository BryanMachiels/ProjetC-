#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

class Player
{
    public:
        Player(string name="Joueur", int  health = 50);
        virtual ~Player();
        Player(const Player& other);
        Player& operator=(const Player& other);
        int getHealthP();
        void setHealthP(int h);
        void useCard();

    private:
        string name;
        int health;
        //vector<Card*> cards;
};

#endif // PLAYER_H
