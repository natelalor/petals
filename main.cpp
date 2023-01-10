#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    float windowHeight = 990;
    float windowWidth = 1400;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "petals");

    // Background Rendering Here
    sf::Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("images/background.png")) {
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
        window.display();
    }
}
