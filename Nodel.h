#ifndef NODE_H
#define NODE_H

#include <SFML/Graphics.hpp>

class Nodel {
public:
    Nodel(double x, double y, double radius, sf::Color colour);
    static Nodel* GetRandom_Nodel(int height, int width, double radius, sf::Color colour);
    void draw(sf::RenderWindow& window);
    
    double getX() const { return x; }
    double getY() const { return y; }
    
private:
    double x;
    double y;
    double radius;
    sf::Color colour;
};

#endif // NODE_H
