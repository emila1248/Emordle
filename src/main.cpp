#include "raylib.h"
#include "resource_dir.h" // utility header for SearchAndSetResourceDir
#include "constants.h"
#include "Button.h"

int StartingWidth = 1080;
int StartingHeight = 720;

int main () {
	
    // Tell the window to use vsync and work on high DPI displays
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI | FLAG_MSAA_4X_HINT);
	SearchAndSetResourceDir("resources");

    // Init window
    InitWindow(StartingWidth, StartingHeight, "Emordle");

    // Global vars
    int ScreenWidth = StartingWidth;
    int ScreenHeight = StartingHeight;
    int ScreenWCenter = ScreenWidth/2;
    int ScreenHCenter = ScreenHeight/2;
    Theme theme = *THEMES[0];
    Font defaultFont = LoadFontEx("fonts/Figtree/Figtree-Regular.ttf", 48, 0, 0);

    Button testButton{ScreenWCenter, ScreenHCenter, 160, 60, defaultFont, "Button", true};
    testButton.setStyle(theme.color3, theme.color5, 6, theme.color8, 0.4);

    // Set texture filters
    SetTextureFilter(defaultFont.texture, TEXTURE_FILTER_BILINEAR);
	
    // GAME LOOP
	while (!WindowShouldClose()) {
		
        // Update global vars
        ScreenWidth = GetScreenWidth();
        ScreenHeight = GetScreenHeight();
        ScreenWCenter = ScreenWidth/2;
        ScreenHCenter = ScreenHeight/2;

        // Begin Drawing
        BeginDrawing();
		ClearBackground(theme.color1);
        
		testButton.Draw();
		
		EndDrawing();
	}

	// cleanup

	// destroy the window and cleanup the OpenGL context
	CloseWindow();
	return 0;
}
