#pragma once
#include "Math.hpp"
#include <raylib.h>

class Cell {
public:
    Cell(Vector2i p_pos, Color p_col);
    Cell();
    Vector2i& getPos();
    Color& getCol();
    void setPos(int x, int y);
    void setCol(Color c);
private:
   Vector2i pos;
   Color col;
};


