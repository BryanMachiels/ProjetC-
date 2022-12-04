#ifndef BOSS_H
#define BOSS_H
#include "Player.h"
#include <string>

using namespace std;

class Boss
{
    public:
        Boss(string name="Boss", int  health = 50);
        virtual ~Boss();
        Boss(const Boss& other);
        Boss& operator=(const Boss& other);
        int getHealth();
        void setHealth(int h);
        void act(Player* p);

    protected:
        string name;
        int health;
};

#endif // BOSS_H
