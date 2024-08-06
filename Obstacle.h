#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Nodel.h"
#include <SFML/Graphics.hpp>

class Obstacle : public Nodel {
public:
    Obstacle(int x, int y, double radius, sf::Color colour);
    bool IsObstacle(const Nodel* node) const;
    void draw(sf::RenderWindow& window) const; // Mark as const
    
private:
    double radius;
    sf::Color colour;
};

#endif // OBSTACLE_H
