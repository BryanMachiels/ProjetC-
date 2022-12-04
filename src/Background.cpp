#include "Background.h"

Background::Background()
{
    //ctor
    bgText.loadFromFile("images/test.png");
    bgText.setSmooth(false);
    bgText.setRepeated(true);

    bgShape.setTexture(&bgText);
    bgShape.setSize(bgSize);

}



//Affiche l'image de fond du jeu
void Background::Render(sf::RenderWindow *window)
{
    window->draw(bgShape);
}

//Afficher l'image de fond lorsque nous sommes dans le menu
void Background::drawMenu(sf::RenderWindow* window)
{
    sf::Texture texture;
    if(!texture.loadFromFile("images/Test.png"))
        return;
    sf::Sprite sprite(texture);
    sprite.setPosition(0,0);
    window->draw(sprite);

}


//Affiche l'image de fond lorsque le joueur a gagné
void Background::drawGameEnd(sf::RenderWindow* window)
{
    sf::Texture texture;
    if (!texture.loadFromFile("images/Victory.jpg"))
        return;
    sf::Sprite sprite(texture);
    sprite.setPosition(0,0);
    window->draw(sprite);
}

//Afficher l'image de fond si le joueur perd la partie
void Background::drawGameOver(sf::RenderWindow* window)
{
    sf::Texture texture;
    if (!texture.loadFromFile("images/Game_Over.jpg"))
        return;
    sf::Sprite sprite(texture);
    sprite.setPosition(0,0);
    window->draw(sprite);
}
