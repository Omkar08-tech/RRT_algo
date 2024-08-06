#include "Environment.h"
#include <cmath>

Environment::Environment(int height, int width) 
    : HEIGHT(height), WIDTH(width), window(sf::VideoMode(width, height), "Environment") {}

double Environment::Calculate_Distance(Nodel* node1, Nodel* node2) {
    return std::sqrt(std::pow(node1->getX() - node2->getX(), 2) + std::pow(node1->getY() - node2->getY(), 2));
}

void Environment::addObstacle(const Obstacle& obstacle) {
    obstacles.push_back(obstacle);
}

std::vector<Obstacle> Environment::getObstacles() const {
    return obstacles;
}

// Implement other methods...
