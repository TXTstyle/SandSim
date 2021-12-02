#pragma once
#include "Cell.hpp"

Cell::Cell(int p_id)
: id(p_id) 
{}

int Cell::getId() {
    return id;
}