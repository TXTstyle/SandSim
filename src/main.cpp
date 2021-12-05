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

int main() { 

    // Initialization
    init();

    int off = 0;
    
    
    Grid box;

    std::vector<Cell> Cells;
    
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update 
        Vector2i mousePos;

        if (IsKeyDown(KEY_SPACE))
        {
            off = 0;
            Cells.clear();
        }

        if (IsMouseButtonPressed(0))
        {
            mousePos.x = GetMouseX()/8;
            mousePos.y = GetMouseY()/8;
            //mousePos.print();
            off++;
            //std::cout << off << "\n";
            std::cout << Cells.size() << "\n";

        }
        


        //Cells.clear();
        for (int i = 0; i < off; i++)
        {
            Cell c(mousePos, YELLOW);
            //c.getPos().print();
            Cells.push_back(c);
            
        }
       
        // Draw
        BeginDrawing();

            ClearBackground(DARKGRAY);

            for (size_t i = 0; i < Cells.size(); i++)
            {
                DrawRectangle(Cells[i].getPos().x*8, Cells[i].getPos().y*8, 8, 8, Cells[i].getCol());
                /*std::cout << i << ": ";
                Cells[i].getPos().print();*/
            }
            

            DrawText("Sand Sim!", 445, 100, 32, WHITE);

        EndDrawing();
        
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context

    return 0;
}