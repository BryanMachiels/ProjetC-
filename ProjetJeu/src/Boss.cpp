#include "Boss.h"
#include "Player.h"
#include <string>
#include <random>


using namespace std;

Boss::Boss(string name, int  health)
{
    name = name;
    setHealth(health);
}

Boss::~Boss()
{

}

Boss::Boss(const Boss& other)
{
    //copy ctor
}

Boss& Boss::operator=(const Boss& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int Boss::getHealth()
{
    return health;
}


void Boss::setHealth(int h)
{
    health = h;
}

void Boss::act(Player* p)
{


     p->setHealthP(p->getHealthP() - 10);
     /*int nRand = 1;

     if(getHealth() < getHealth()/5)
     {
         //génération d'un nombre aléatoire entre 1 et 2
         nRand = 1 + (int)((float)rand() * (2-1+1) / (RAND_MAX-1));

         if(nRand == 2)
         {
            setHealth(getHealth()+10);
         }
         else
         {
            setHealth(getHealth()-25);
         }

     }
     else
     {
        p.setHealth(p.getHealth()-10);
     }*/
}

