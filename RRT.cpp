#include "RRT.h"
#include <cstdlib>
#include <ctime>

std::vector<Nodel*> rrt(Nodel* start, Nodel* goal, int maxNodes, double stepSize, double maxDistance, int width, int height) {
    std::vector<Nodel*> path;
    // Example RRT implementation (replace with your actual algorithm)
    srand(static_cast<unsigned>(time(0)));
    // Generate path as a placeholder
    for (int i = 0; i < maxNodes; ++i) {
        double x = rand() % width;
        double y = rand() % height;
        path.push_back(new Nodel(x, y, 5.0, sf::Color::Green));
    }
    return path;
}
