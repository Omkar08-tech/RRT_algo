# cmake_minimum_required(VERSION 3.10)
# project(GenAI_SDCL_App)

# set(CMAKE_CXX_STANDARD 17)

# # Find SFML
# find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# # Your executable
# add_executable(sfml-app main.cpp)

# # Link SFML
# target_link_libraries(sfml-app sfml-graphics sfml-window sfml-system)

cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

add_executable(MyProject main.cpp Environment.cpp RRT.cpp Nodel.cpp Obstacle.cpp)

target_link_libraries(MyProject sfml-system sfml-window sfml-graphics sfml-network sfml-audio)