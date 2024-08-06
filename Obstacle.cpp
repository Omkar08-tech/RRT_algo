#include "Obstacle.h"
#include <cmath>

Obstacle::Obstacle(int x, int y, double radius, sf::Color colour)
    : Nodel(x, y, radius, colour), radius(radius), colour(colour) {}

bool Obstacle::IsObstacle(const Nodel* node) const {
    double dx = node->getX() - this->getX();
    double dy = node->getY() - this->getY();
    double distance = std::sqrt(dx * dx + dy * dy);
    return distance <= this->radius;
}

void Obstacle::draw(sf::RenderWindow& window) const {
    sf::CircleShape shape(this->radius);
    shape.setFillColor(this->colour);
    shape.setPosition(this->getX() - this->radius, this->getY() - this->radius); // Center the circle at (x, y)
    window.draw(shape);
}
