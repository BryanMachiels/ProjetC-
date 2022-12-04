#include "Player.h"
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

Player::Player(string name, int  health)
{
        name = name;
        setHealthP(health);
        //cards.push_back(new Card("Soin","Soigne au minum 2 Hp au maxi"))
}

Player::~Player()
{

}

Player::Player(const Player& other)
{
    this->name = other.name;
    this->health = other.health;
}

Player& Player::operator=(const Player& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
        this->name = rhs.name;
        this->health = rhs.health;
    return *this;
}

void Player::useCard()
{


}

void Player::setHealthP(int h)
{
    health = h;
}

int Player::getHealthP()
{
    return health;
}


