#pragma once
#include "Grid.hpp"
#include "Cell.hpp"

Grid::Grid() {
    for (int i = 0; i < 9398; i++)
    {
        gridArray[i].setIndex(i);
    }
    
}



Cell& Grid::getCell(int i) {
    return gridArray[i];
}

int Grid::getGridPos(int x, int y) {
    return gridWidth*(y-1) + x;
}

void Grid::setCell(int i, int j) {
    getCell(i).setType(j);
}




