#pragma once
#include "Cell.hpp"

// grid 128x75

class Grid {
public:
    Grid();
    Cell& getCell(int i);
    void setCell(int i, int j);
    void moveCell(int i, int j, int t);
    Cell& checkCell(int i, int j);
    int& getLen();
private:
    Cell gridArray[9398];
    int gridLen = 9398;
    unsigned int gridWidth = 127;
    unsigned int gridHeight = 74;

};

