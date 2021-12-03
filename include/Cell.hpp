#pragma once


class Cell {
public:
    Cell(int p_index, int p_type);
    Cell();
    int getIndex();
    int getType();
    void setIndex(int i);
    void setType(int i);
private:
   int index;
   int type;
};


