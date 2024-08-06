#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Obstacle.h"
#include "Nodel.h"

class Environment {
public:
    Environment(int height, int width);
    double Calculate_Distance(Nodel* node1, Nodel* node2);
    void addObstacle(const Obstacle& obstacle);
    std::vector<Obstacle> getObstacles() const; // Add this method
    
    // Other methods for Environment...

private:
    int HEIGHT;
    int WIDTH;
    sf::RenderWindow window;
    std::vector<Obstacle> obstacles;
    // Other members...
};

#endif // ENVIRONMENT_H
