#include <iostream>
#include <raylib.h>
#include <vector>

#include "Cell.hpp"
#include "Grid.hpp"


void init() {

    const int screenWidth = 1024;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Sand Sim");

    SetTargetFPS(12);
}

namespace ult{
    inline int getPosGridX(int in) {
        const unsigned short int x = 127;

        int modX = in % x;
        return modX;
    }
    inline int getPosGridY(int in) {
        const unsigned short int x = 127;
        const unsigned short int y = 74;

        int modX = in % x;
        int mod2 = (in-modX)/y;
        return mod2-1;
    }
}

int main() { 

    // Initialization
    init();

    Grid box;
    std::vector<Cell> Cells;

    box.setCell(500, 1);
    box.setCell(box.getGridPos(120, 4), 1);
    box.setCell(230, 1);
    //std::cout << box.getCell(500).getType() << "; ";
    //std::cout << ult::getPosGridX(500) << ":" << ult::getPosGridY(500) << ";; " << box.getCell(500).getIndex() << "; \n";
    
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update 
        Cells.clear();

        for (int i = 0; i < 9398; i++)
        {
                if (box.getCell(i).getType() != 0)
                {
                    Cells.push_back(box.getCell(i));
                    //std::cout << box.getCell(i).getIndex() << "; ";
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