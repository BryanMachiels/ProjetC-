#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Background.h"
#include "Constante.h"
#include "Options.h"

#include <SFML/Graphics.hpp>


//classe qui gère le jeu
class Game
{
    public:
        Game();
        virtual ~Game();
        Game(const Game& other);
        Game& operator=(const Game& other);

        void pollEvents(); // servira dans le CPP cocnernant la touche echap
        void update();
        void render();
        const bool running()const;

        /*void spawnBoss();
        void spawnCards();
        void addDeck();*/

    protected:

    private:
        void initWindow();
        void initVariables();
        sf::RenderWindow* window();
        sf::Event ev;
        sf::View view;
        sf::VideoMode videoMode;


        sf::Vector2f position=sf::Vector2f();
        sf::Vector2i screenDimensions=sf::Vector2i();


        //Player *player;

        Background background;
};

#endif // GAME_H
