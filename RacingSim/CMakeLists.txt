cmake_minimum_required(VERSION 3.22.0)
project(RacingSim)


add_executable(RACESIMEXE RaceClient/Sim.cpp)
target_link_libraries(RACESIMEXE RACEDLL)