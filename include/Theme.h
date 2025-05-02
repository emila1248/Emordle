#pragma once
#include "raylib.h"

struct Theme {
    const Color color1;
    const Color color2;
    const Color color3;
    const Color color4;
    const Color color5;
    const Color color6;
    const Color color7;
    const Color color8;

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