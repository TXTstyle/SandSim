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
    
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update 
       
        // Draw
        BeginDrawing();

            ClearBackground(DARKGRAY);



            DrawText("Sand Sim!", 445, 100, 32, WHITE);

        EndDrawing();
        
    }

    // De-Initialization

    CloseWindow();        // Close window and OpenGL context

    return 0;
}