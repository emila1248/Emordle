#include "raylib.h"
#include "globals.h"
#include "Scenes.h"
#include "Button.h"

void Scenes::title() {

    Button testButton{GetScreenWidth()/2, GetScreenHeight()/2, 100, 36, defaultFont, "Button", true};
    testButton.setStyle(currentTheme.color3, currentTheme.color5, 3, currentTheme.color8, 0.4);

    testButton.Draw();
}
