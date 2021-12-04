#pragma once
#include "Cell.hpp"

Cell::Cell(int p_index, int p_type)
: index(p_index), type(p_type)
{}

Cell::Cell()
: index(0), type(0)
{}

int& Cell::getIndex() {
    return index;
}
int& Cell::getType() {
    return type;
}

void Cell::setIndex(int i) {
    index = i;
}
void Cell::setType(int i) {
    type = i;
}