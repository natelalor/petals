#include "bee.h"




Bee::Bee(){
    // makes the starting position
    sf::Vector2f v1(0, 150);
    position = v1;
}

sf::Sprite Bee::loadTexture(){
    sf::Texture beeTexture;
    if (!beeTexture.loadFromFile("images/wateringcan.png")) {
        return;
    }
    sf::Sprite beeSprite;
    beeSprite.setTexture(beeTexture);
    beeSprite.setPosition(0, 150);

    return beeSprite;
}

    sf::Vector2f Bee::getPosition(){
        return position;
    }
    void Bee::setPosition(sf::Vector2f newLoc){
        position = newLoc;
    }





