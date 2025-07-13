cmake_minimum_required(VERSION 3.22.0)
project(RacingSim)
add_library(RACEDLL SHARED RACEDLL/Base.cpp RACEDLL/Base.h RACEDLL/Ground.cpp RACEDLL/Ground.h)
target_compile_definitions(RACEDLL 
    PRIVATE RACEDLL_EXPORTS
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS O

add_executable(RACESIMEXE RaceClient/Sim.cpp)
target_link_libraries(RACESIMEXE RACEDLL)