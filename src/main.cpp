#include <iostream>
#include <raylib.h>
#include <vector>

#include "Cell.hpp"
#include "grid.cpp"
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

    std::vector<Cell> Cells;

    Grid box;
    box.setGridPos(1,1,1);
    
    box.setGridPos(33,63,1);
    box.setGridPos(70,55,1);
    box.setGridPos(90,25,1);
    box.setGridPos(127,65,1);

    box.setGridPos(54,45,1);
    box.setGridPos(55,45,1);
    box.setGridPos(56,45,1);
    box.setGridPos(54,44,1);

    
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update 
        Cells.clear();

        for (int i = 0; i < 9600; i++)
        {
            if(box.gridArray[i] != 0) {
                //box.gridArray[i] = 1;
                box.gridArray[i+1] = 1;
            }
            
        }
        
        
        for (int i = 0; i < 9600; i++)
        {
            if(box.gridArray[i] == 1) {
                Cells.push_back(Cell(i));
                //std::cout << i << " ";
            }

        }
        
       

        // Draw
        BeginDrawing();

            ClearBackground(DARKGRAY);

            for (size_t i = 0; i < Cells.size(); i++)
            {
                DrawRectangle(ult::getPosGridX(Cells[i].getId())*8, ult::getPosGridY(Cells[i].getId())*8, 8, 8, YELLOW);
                //std::cout << Cells[i].getId()<< ": " << ult::getPosGridX(Cells[i].getId()) << "-" << ult::getPosGridY(Cells[i].getId()) << "\n";
            }
            

            DrawText("Sand Sim!", 445, 100, 32, WHITE);

        EndDrawing();
        
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context

    return 0;
}