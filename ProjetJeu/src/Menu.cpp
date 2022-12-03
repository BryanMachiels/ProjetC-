#include "Menu.h"

Menu::Menu(float height, float width)
{

    //ctor
    //menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::White);
    menu[0].setString("Play");
    menu[0].setPosition(sf::Vector2f(height/16, width*0.8));

    //menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::Black);
    menu[1].setString("Options");
    menu[1].setPosition(sf::Vector2f(height/6, width*0.8));

    //menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::Black);
    menu[2].setString("Quit");
    menu[2].setPosition(sf::Vector2f(height/3, width*0.8));

    selectedItem =0;

}

Menu::~Menu()
{
    //dtor
}

//Afficher les différents choix du menu (donc PLay, option et quit)
void Menu::draw(sf::RenderWindow &window) {
    for (int i = 0; i<MAX_NUMBER_OF_CHOICES; i++) {
        window.draw(menu[i]);
    }
}

//Gère le déplacement en allant vers le haut en mettant l'item actuel en blanc  en décrémentant l'indice de l'item selectionné
void Menu::moveUp() {
    if (selectedItem - 1 >= 0) {
        menu[selectedItem].setFillColor(sf::Color::Black);
        selectedItem--;
        menu[selectedItem].setFillColor(sf::Color::White);
    }
}

//Gère le déplacement en allant vers le bas en mettant l'item actuel en blanc et en incrémentant l'indice de l'item selectionné
void Menu::moveDown() {
    if (selectedItem + 1 < MAX_NUMBER_OF_CHOICES) {
        menu[selectedItem].setFillColor(sf::Color::Black);
        selectedItem++;
        menu[selectedItem].setFillColor(sf::Color::White);
    }
}


//Renvoie l'indice de l'item selectionné
 int Menu::getPressedItem() {
    return selectedItem;
 }
