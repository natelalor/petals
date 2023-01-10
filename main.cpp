#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
using namespace std;

// std::vector<sf::Sprite> loadingSprites();

//
int main()
{
    float windowHeight = 990;
    float windowWidth = 1400;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "petals");

    // loadingSprites();

    //==========================================================
    // TEXTURE/SPRITE PREPARATION
    //==========================================================

    // Background Rendering Here

    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("images/background.png"))
    {
        return 0;
    }
    sf::Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);

    // Flower Rendering Here

    sf::Texture flowerTexture;
    if (!flowerTexture.loadFromFile("images/flower.png"))
    {
        return 0;
    }
    sf::Sprite flowerSprite;
    flowerSprite.setTexture(flowerTexture);
    flowerSprite.setPosition(400, 300);

    // Bee Rendering Here

    // sf::Texture beeTexture;
    // if (!beeTexture.loadFromFile("images/bee.png")) {
    //     return 0;
    // }
    // sf::Sprite beeSprite;
    // beeSprite.setTexture(beeTexture);
    // beeSprite.setPosition(0, 150);

    // Wateringcan Rendering Here

    sf::Texture wateringCanTexture;
    if (!wateringCanTexture.loadFromFile("images/wateringcan.png"))
    {
        return 0;
    }
    sf::Sprite wateringCanSprite;
    wateringCanSprite.setTexture(wateringCanTexture);
    wateringCanSprite.setScale(0.5, 0.5);
    wateringCanSprite.setPosition(270, 0);

    // Honeypile 1 Rendering Here

    sf::Texture honeyPileOneTexture;
    if (!honeyPileOneTexture.loadFromFile("images/honeypile1.png"))
    {
        return 0;
    }
    sf::Sprite honeyPileOneSprite;
    honeyPileOneSprite.setTexture(honeyPileOneTexture);
    honeyPileOneSprite.setPosition(600, 400);

    // Honeypile 2 Rendering Here

    sf::Texture honeyPileTwoTexture;
    if (!honeyPileTwoTexture.loadFromFile("images/honeypile2.png"))
    {
        return 0;
    }
    sf::Sprite honeyPileTwoSprite;
    honeyPileTwoSprite.setTexture(honeyPileTwoTexture);
    honeyPileTwoSprite.setScale(0.75, 0.75);
    honeyPileTwoSprite.setPosition(700, 460);

    // Honeypile 3 Rendering Here

    sf::Texture honeyPileThreeTexture;
    if (!honeyPileThreeTexture.loadFromFile("images/honeypile3.png"))
    {
        return 0;
    }
    sf::Sprite honeyPileThreeSprite;
    honeyPileThreeSprite.setTexture(honeyPileThreeTexture);
    // honeyPileThreeSprite.setScale(1, 1.1);
    honeyPileThreeSprite.setPosition(500, 400);

    // Honeypile 4 Rendering Here

    sf::Texture honeyPileFourTexture;
    if (!honeyPileFourTexture.loadFromFile("images/honeypile4.png"))
    {
        return 0;
    }
    sf::Sprite honeyPileFourSprite;
    honeyPileFourSprite.setTexture(honeyPileFourTexture);
    honeyPileFourSprite.setScale(1.4, 1.4);
    honeyPileFourSprite.setPosition(630, 300);

    //==========================================================

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(backgroundSprite);
        window.draw(flowerSprite);
        // window.draw(beeSprite);
        window.draw(wateringCanSprite);
        window.draw(honeyPileOneSprite);
        // window.draw(honeyPileTwoSprite);
        // window.draw(honeyPileThreeSprite);
        // window.draw(honeyPileFourSprite);
        window.display();
    }
}

// //Function to help load all the textures/sprites used
// std::vector<sf::Sprite> loadingSprites() {

//     return sprites;
// }
