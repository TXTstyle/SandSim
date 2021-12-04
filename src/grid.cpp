#pragma once
#include <iostream>
#include "ult.hpp"
#include "Grid.hpp"
#include "Cell.hpp"

Grid::Grid() {
    for (int i = 0; i < gridLen; i++)
    {
        gridArray[i].setIndex(i);
    }
    
}



Cell& Grid::getCell(int i) {
    if (i > getLen())
    {
        std::cout << "Tried to get Cell outside of array! Index:" << i << "/"<< getLen() << "\n";
    } else {
        return gridArray[i];
    }
    
}

void Grid::setCell(int i, int j) {
    getCell(i).setType(j);
}

int& Grid::getLen() {
    return gridLen;
}

void Grid::moveCell(int i, int j, int t) {
    if (i < 9271)
    {
        switch (j)
        {
        case 0:
            setCell(i+126, t);
            setCell(i, 0);
            break;
        case 1:
            setCell(i+127, t);
            setCell(i, 0);
            break;
        case 2:
            setCell(i+128, t);
            setCell(i, 0);
            break;
        
        default:
            setCell(i, t);
            break;
        }
    }
    
}

Cell& Grid::checkCell(int i, int j) {
    switch (j)
    {
    case 0:
        return getCell(i+126);
    case 1:
        return getCell(i+127);
    case 2:
        return getCell(i+128);
    default:
        return getCell(i);
    }
}
