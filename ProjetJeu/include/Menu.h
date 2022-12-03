#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>

#include <iostream>

#define MAX_NUMBER_OF_CHOICES 3

using namespace std;
class Menu
{
    public:
        Menu(float widht, float height);
        virtual ~Menu();
        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        int getPressedItem();


    protected:

    private:
        int selectedItem;
        //sf::Font font; Police d'écriture
        sf:: Text menu[MAX_NUMBER_OF_CHOICES];
};

#endif // MENU_H
