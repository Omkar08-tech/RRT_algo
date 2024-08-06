#ifndef RRT_H
#define RRT_H

#include "Nodel.h"
#include <vector>

std::vector<Nodel*> rrt(Nodel* start, Nodel* goal, int maxNodes, double stepSize, double maxDistance, int width, int height);

#endif // RRT_H
