#pragma once
#include "Cell.hpp"

// grid 128x75

class Grid {
public:
    Grid();
    Cell& getCell(int i);
    int getGridPos(int x, int y);
    void setCell(int i, int j);
private:
    Cell gridArray[9398];
    unsigned int gridWidth = 127;
    unsigned int gridHeight = 74;

};

