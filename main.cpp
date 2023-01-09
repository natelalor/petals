#include <SFML/Graphics.hpp>

int main() {
    float windowHeight = 400;
    float windowWidth = 400;

    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "petals");

    

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        window.display();

    }
}












