#include "Game.h"

Game::Game()
{
    //ctor
    //this->initWindow();
    //this->initVariables();

}

Game::~Game()
{
    //dtor
    //delete(this->window);
    //delete(this->player);
    //delete(this->boss);
}

//Constructeur de copie
Game::Game(const Game& other)
{
    //copy ctor
}

//Surcharge de l'opérateur
Game& Game::operator=(const Game& rhs)
{
    if (this == &rhs) return *this;

    return *this;
}

//Mets à jour le jeu en appelant les méthodes nécessaires
void Game::update()
{
    //pollEvents();


}

/*//Permet d'afficher l'image de fond du jeu, le héro, les plateformes, l'image de l'alarme à la fin du jeu et les ennemies
void Game::render()
{
    this->window->clear();

    background.Render(this->window);

    this->window->display();
}

//fermer la fenêtre si on appuie sur escape ou qu'on suitte le jeu
void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev))
    {
        if (ev.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            this->window->close();
    }
}

//Initialise les variables
void Game::initVariables()
{
    this->window=nullptr;
}*/


