#include "Button.h"

// Draw
void Button::Draw() {
    
    // Determine W/H offset
    float wOffset = 0;
    float hOffset = 0;
    if (defineByCenter) {
        wOffset = width/2;
        hOffset = height/2;
    }

    // Draw rectangle
    DrawRectangleRounded({pos.x - wOffset, pos.y - hOffset, (float)width, (float)height}, roundness, 16, fill);
}
