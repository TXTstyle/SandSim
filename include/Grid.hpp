#pragma once
#include "Cell.hpp"

// grid 128x75

struct Grid {
    
    unsigned int gridHeight = 75;
    unsigned int gridWidth = 128;
    unsigned short int gridArray[9600]; 

    int getGridPos(int x, int y) {
        return gridWidth*y + x;
    }
    void setGridPos(int x, int y, int c) {
        gridArray[gridWidth*y + x] = c;
    }

};

