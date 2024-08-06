#include "Nodel.h"
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <cmath>

Nodel::Nodel(double x, double y, double radius, sf::Color colour)
    : x(x), y(y), radius(radius), colour(colour) {}

Nodel* Nodel::GetRandom_Nodel(int height, int width, double radius, sf::Color colour) {
    return new Nodel(std::rand() % height, std::rand() % width, radius, colour);
}

void Nodel::draw(sf::RenderWindow& window) {
    sf::CircleShape shape(radius);
    shape.setFillColor(colour);
    shape.setPosition(x - radius, y - radius); // Center the circle at (x, y)
    window.draw(shape);
}
