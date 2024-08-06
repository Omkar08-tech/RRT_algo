# RRT Algorithm Implementation

## Overview

This project implements the Rapidly-exploring Random Tree (RRT) algorithm, a popular method used in robotics and path planning. The RRT algorithm is designed to efficiently explore high-dimensional spaces to find feasible paths from a start point to a goal point, while avoiding obstacles.

## Features

- **Path Planning**: Finds a path from a start point to a goal point using the RRT algorithm.
- **Obstacle Avoidance**: Incorporates obstacles into the environment to ensure the path avoids collisions.
- **Visualization**: Displays the environment, obstacles, and the resulting path using graphical interfaces.

## Project Structure

- `main.cpp`: The entry point of the application, which sets up the environment and runs the RRT algorithm.
- `Environment.cpp` / `Environment.h`: Defines the environment, including the size and obstacles.
- `Nodel.cpp` / `Nodel.h`: Defines the nodes used in the RRT algorithm.
- `Obstacle.cpp` / `Obstacle.h`: Defines the obstacles in the environment.
- `RRT.cpp` / `RRT.h`: Contains the implementation of the RRT algorithm.
- `CMakeLists.txt`: CMake configuration file for building the project.

## Building and Running

### Prerequisites

- **CMake**: Build system generator.
- **SFML**: Simple and Fast Multimedia Library (for visualization).

### Build Instructions

1. **Clone the Repository**

   ```bash
   git clone https://github.com/Omkar08-tech/RRT_alo.git
   cd RRT_alo
2. **Create and Navigate to Build Directory**

   ```bash
   mkdir build
   cd build

3. **Run CMake**

   ```bash
    cmake ..

4. **Build the Project**
   ```bash
    make


## Usage
- **Running the Application**: Execute the built binary to start the application.
- **Visualizing the Environment**: The application will open a window displaying the environment, obstacles, and the computed path.
## Example

An example of the output might show a graphical window with the start and goal points, obstacles, and the path found by the RRT algorithm.
