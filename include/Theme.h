#pragma once
#include "raylib.h"

struct Theme {
    Color color1;
    Color color2;
    Color color3;
    Color color4;
    Color color5;
    Color color6;
    Color color7;
    Color color8;

    static Color lighten(Color color) {
        unsigned char rValue;
        unsigned char gValue;
        unsigned char bValue;
        if (color.r + 48 > 255) { rValue = 255; } else { rValue = color.r + 48; };
        if (color.g + 48 > 255) { gValue = 255; } else { gValue = color.g + 48; };
        if (color.b + 48 > 255) { bValue = 255; } else { bValue = color.b + 48; };

        return {rValue, gValue, bValue, color.a};
    }
};