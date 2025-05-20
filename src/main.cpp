#include "raylib.h"
#include "resource_dir.h" // utility header for SearchAndSetResourceDir
#include "globals.h"
#include "Scenes.h"
#include "Button.h"

int StartingWidth = 1080;
int StartingHeight = 720;

int main () {
	
    // Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI | FLAG_MSAA_4X_HINT);
	SearchAndSetResourceDir("resources");

    // Init window
    InitWindow(StartingWidth, StartingHeight, "Emordle");

    // Initialize global vars
    currentTheme = *THEMES[0];
    defaultFont = LoadFontEx("fonts/Figtree/Figtree-Regular.ttf", 48, 0, 0);

    // Set texture filters
    SetTextureFilter(defaultFont.texture, TEXTURE_FILTER_BILINEAR);
	
    // GAME LOOP
	while (!WindowShouldClose()) {
		
        BeginDrawing();
		ClearBackground(currentTheme.color1);
        
		currentScene.draw(titleScene);
		
		EndDrawing();
	}

	// cleanup

	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}
