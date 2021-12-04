#include <iostream>
#include <raylib.h>
#include <vector>

#include "ult.hpp"
#include "Cell.hpp"
#include "Grid.hpp"


void init() {

    const int screenWidth = 1024;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Sand Sim");

    SetTargetFPS(12);
}


int main() { 

    // Initialization
    init();

    Grid box;
    std::vector<Cell> Cells;

    box.setCell(498, 1);
    box.setCell(ult::getGridPos(120, 4), 1);
    box.setCell(8367, 2);

    box.setCell(ult::getGridPos(120,22), 2);
    box.setCell(ult::getGridPos(117,22), 2);
    box.setCell(ult::getGridPos(119,22), 2);
    box.setCell(ult::getGridPos(121,22), 2);
    box.setCell(ult::getGridPos(122,22), 2);
    //std::cout << box.getCell(5000).getType() << "; ";
    std::cout << ult::getPosGridX(8302) << ":" << ult::getPosGridY(8302) << ";; " << ult::getGridPos(47,65) << "; \n";
    

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update 

        Cells.clear();

        for (int i = 0; i < box.getLen(); i++)
        {
                if (box.getCell(i).getType() != 0)
                {
                    Cells.push_back(box.getCell(i));
                    //std::cout << Cells[0].getType() << "; ";
                }
                
        }
        
        for (size_t i = 0; i < Cells.size(); i++)
        {
            //std::cout << Cells[i].getType() << "; ";
            if (box.checkCell(Cells[i].getIndex(), 1).getIndex() > box.getLen())
            {
                box.moveCell(Cells[i].getIndex(), -1, Cells[i].getType());
                std::cout << "endLine" << "\n";
            } else if (box.checkCell(Cells[i].getIndex(), 1).getType() == 0 && box.getCell(Cells[i].getIndex()).getType() == 1)
            {
                box.moveCell(Cells[i].getIndex(), 1, Cells[i].getType());
                //std::cout << box.getCell(Cells[i].getIndex()+127).getType() << "; ";
            } else if(box.checkCell(Cells[i].getIndex(), 0).getType() == 0 && box.getCell(Cells[i].getIndex()).getType() == 1) {
                box.moveCell(Cells[i].getIndex(), 0, Cells[i].getType());
            } else if (box.checkCell(Cells[i].getIndex(), 2).getType() == 0 && box.getCell(Cells[i].getIndex()).getType() == 1)
            {
                box.moveCell(Cells[i].getIndex(), 2, Cells[i].getType());
            } else {
                box.moveCell(Cells[i].getIndex(), -1, Cells[i].getType());
            }

            
            
        }

        // Draw
        BeginDrawing();

            ClearBackground(DARKGRAY);

            for (size_t i = 0; i < Cells.size(); i++)
            {
                DrawRectangle(ult::getPosGridX(Cells[i].getIndex())*8, ult::getPosGridY(Cells[i].getIndex())*8, 8, 8, YELLOW);
                
            }


            DrawText("Sand Sim!", 445, 100, 32, WHITE);

        EndDrawing();
        
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context

    return 0;
}