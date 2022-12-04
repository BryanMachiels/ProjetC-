#ifndef OPTIONS_H
#define OPTIONS_H


#include "Constante.h"
#include "Background.h"
#include "Constante.h" // besoin pour la classe CPP d'options

#include <SFML/Graphics.hpp>

#include <iostream>

#define MAX_NUMBER_OF_CHOICE 5 //nombre au pif comme je sais pas encore trop

using namespace std;

class Options
{
    public:
        Options();
        virtual ~Options();
        void pollEvents();
        void update();
        void render();
        const bool running()const;
        void draw(sf::RenderWindow &window);

        void moveUp();
        void moveDown();
        int getPressendItem();

        static float volume; //static car une fois confirmé, ne va plus changer

    protected:

    private:
         int selectedItemIndex;


        void initVariables();
        void initWindow();
        sf::RenderWindow* window;
        sf::Event ev;
        sf::VideoMode videoMode;

        sf::Font font;
        sf::Text lblVolume;
        sf::Text lblBack;
        sf::Text menu[MAX_NUMBER_OF_CHOICE];
        Background background;
};

#endif // OPTIONS_H
