#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SFML/Graphics.hpp>
#include "Constante.h"

//Classe pour le d�cors derri�re le jeu, pour les diff�rentes situations

class Background
{
    public:
        Background();
        void Render(sf::RenderWindow *window);
        void drawMenu(sf::RenderWindow* window);
        void drawGameOver(sf::RenderWindow* window);
        void drawGameEnd(sf::RenderWindow* window);


    private:


        sf::Texture bgText;
        sf::RectangleShape bgShape;
        sf::Vector2f bgSize;
        sf::Sprite bgSprite;


};

#endif // BACKGROUND_H
