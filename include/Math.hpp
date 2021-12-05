#pragma once
#include <iostream>

struct Vector2i {
    Vector2i()
    :x(0), y(0)
    {}
    Vector2i(int p_x, int p_y)
    :x(p_x), y(p_y)
    {}

    void print() {
        std::cout << x << ", " << y << "\n";
    }

    int x, y;
};