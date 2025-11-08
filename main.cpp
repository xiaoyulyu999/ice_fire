#include "raylib.h"

int main() {
    InitWindow(800, 450, "Hello Raylib (C++)");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello from Raylib + C++!", 300, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
