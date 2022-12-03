#include "Options.h"

Options::Options()
{
    //ctor

    float height = WINDOW_SIZE_X;
    float width = WINDOW_SIZE_Y;
    //lblVolume.setFont(font);
    lblVolume.setFillColor(sf::Color::White);
    lblVolume.setString("Volume sound : ");

    //lblBack.setFont(font);
    lblBack.setFillColor(sf::Color::White);
    lblBack.setString("Back");

    lblVolume.setPosition(sf::Vector2f(height/16, width*0.7));
    lblBack.setPosition(sf::Vector2f(height*0.15, width*0.9));

    this->initWindow();
}

Options::~Options()
{
    //dtor
    delete(this->window);
}

//Initialise la fenêtre
void Options::initWindow()
{
    this->videoMode.height=WINDOW_SIZE_Y;
    this->videoMode.width=WINDOW_SIZE_X;
    this->window=new sf::RenderWindow(this->videoMode, "Settings");
    this->window->setPosition(sf::Vector2i(150,150));
}

//Renvoie si la fenêtre est ouverte
const bool Options::running()const{
    return this->window->isOpen();
}

//Affiche la fenêtre (avec ses élémets)
void Options::render(){
    this->window->clear();
    background.drawMenu(this->window);
    this->window->draw(lblVolume);
    this->window->draw(lblBack);
   // draw(*this->window);
    this->window->display();
}





