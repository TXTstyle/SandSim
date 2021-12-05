#pragma once
#include "Cell.hpp"
#include "Math.hpp"

Cell::Cell(Vector2i p_pos, Color p_col)
: pos(p_pos), col(p_col)
{}

Cell::Cell()
: col(BLACK)
{
    pos.x = 0;
    pos.y = 0;
}

Vector2i& Cell::getPos() {
    return pos;
}
Color& Cell::getCol() {
    return col;
}

void Cell::setPos(int x, int y) {
    pos.x = x;
    pos.y = y;
}
void Cell::setCol(Color c) {
    col = c;
}