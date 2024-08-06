#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "RRT.h"
#include "Environment.h"
#include "Nodel.h"
#include "Obstacle.h"

int main() {
    // Initialize the environment
    Environment env(500, 500);

    // Create and add obstacles (if you want to visualize with obstacles)
    Obstacle obstacle1(100, 100, 50, sf::Color::Blue);
    Obstacle obstacle2(300, 300, 50, sf::Color::Blue);
    env.addObstacle(obstacle1);
    env.addObstacle(obstacle2);

    // Create start and goal nodes
    Nodel* start = Nodel::GetRandom_Nodel(500, 500, 10, sf::Color::Red);
    Nodel* goal = Nodel::GetRandom_Nodel(500, 500, 10, sf::Color::Red);

    // Find path using RRT algorithm
    std::vector<Nodel*> path = rrt(start, goal, 1000, 1.0, 10.0, 500, 500);

    // Create the SFML window
    sf::RenderWindow window(sf::VideoMode(500, 500), "RRT Path Visualization");

    // Main loop to draw the environment, obstacles, and path
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw obstacles
        for (const Obstacle& obstacle : env.getObstacles()) {
            obstacle.draw(window);
        }

        // Draw start and goal nodes
        start->draw(window);
        goal->draw(window);

        // Draw path nodes
        if (path.size() > 1) {  // Ensure there are at least two nodes to draw a path
            for (size_t i = 0; i < path.size(); ++i) {
                path[i]->draw(window);
                if (i > 0) {
                    sf::Vertex line[] = {
                        sf::Vertex(sf::Vector2f(path[i-1]->getX(), path[i-1]->getY()), sf::Color::Green),
                        sf::Vertex(sf::Vector2f(path[i]->getX(), path[i]->getY()), sf::Color::Green)
                    };
                    window.draw(line, 2, sf::Lines);
                }
            }
        }

        window.display();
    }

    // Output node coordinates
    std::cout << "Path coordinates:" << std::endl;
    for (Nodel* node : path) {
        std::cout << "Node at (" << node->getX() << ", " << node->getY() << ")" << std::endl;
    }

    // Clean up dynamically allocated memory
    for (Nodel* node : path) {
        delete node;
    }
    delete start;
    delete goal;

    return 0;
}
