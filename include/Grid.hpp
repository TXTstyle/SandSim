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

    void moveGridDown(int i) {
        gridArray[i+gridWidth] = 1;
        gridArray[i] = 0;

    }
    void moveGridLeft(int i) {
        gridArray[i+127] = gridArray[i];
        gridArray[i] = 0;
    }
    void moveGridRight(int i) {
        gridArray[i+129] = gridArray[i];
        gridArray[i] = 0;
    }
};

