#include "entrypoint.h"
#include "MainMenu.h"

//SOURCES: 
//https://github.com/hdmetor/Asteroids
//https://www.youtube.com/watch?v=QgDR8LrRZhk


typedef enum GameScreen {
    GAME,
    MENU
} GameScreen;

void raylib_start(void){
    const int ScreenWidth = 800;
    const int ScreenHeight = 450;

    InitWindow(ScreenWidth, ScreenHeight, "Asteroid");

    GameScreen currentScreen = MENU;

    int framesCounter = 0;

    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        switch(currentScreen){
            case MENU:{
                if(IsKeyPressed(KEY_ENTER)){
                    currentScreen = GAME;
                }
            } break;
            case GAME:{
                if(IsKeyPressed(KEY_ENTER)){
                    currentScreen = MENU;
                }
            } break;
            default: break;
        }
        switch(currentScreen){
            case MENU:{
                MainMenu();
            } break;
            case GAME:{
                Game();
            } break;
            default: break;
        }
        EndDrawing();
    }
    CloseWindow();
}