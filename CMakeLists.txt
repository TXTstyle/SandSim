cmake_minimum_required(VERSION 3.0.0)
project(SandSim VERSION 0.1.0)

INCLUDE_DIRECTORIES (
    include/
)
LINK_DIRECTORIES (
    lib/
)

include(CTest)
enable_testing()

set(SOURCES include/Grid.hpp include/Cell.hpp src/cell.cpp src/main.cpp src/grid.cpp)



add_executable(SandSim ${SOURCES})

TARGET_LINK_LIBRARIES(SandSim
raylib 
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
