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

//Surcharge de l'op�rateur
Game& Game::operator=(const Game& rhs)
{
    if (this == &rhs) return *this;

    return *this;
}

//Mets � jour le jeu en appelant les m�thodes n�cessaires
void Game::update()
{
    //pollEvents();


}

/*//Permet d'afficher l'image de fond du jeu, le h�ro, les plateformes, l'image de l'alarme � la fin du jeu et les ennemies
void Game::render()
{
    this->window->clear();

    background.Render(this->window);

    this->window->display();
}

//fermer la fen�tre si on appuie sur escape ou qu'on suitte le jeu
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


