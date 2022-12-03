#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Background.h"
#include "Constante.h"
#include "Options.h"
#include "Game.h"
#include "Player.h"
#include "Boss.h"

#include <iostream>

using namespace std;
using namespace sf;
int main()
{

    Player* p1 = new Player("Bart",150);

    Boss* b1 = new Boss("megaMechant",170);

    cout << p1->getHealthP() << "\n";

    cout << b1->getHealth() << "\n";

    b1->act(p1);

    cout << p1->getHealthP() << "\n";

    return 0;
}


