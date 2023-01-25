#include <SFML/Graphics.hpp>

class Bee{
private:
    int numHoney;
    int petalsTaken;
    sf::Vector2f position;
    


public:
    Bee();
    sf::Sprite loadTexture();
    sf::Vector2f getPosition();
    void setPosition(sf::Vector2f);

};