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

    // Draw stroke
    if (strokeWeight > 0) {
        DrawRectangleRounded({pos.x - wOffset - (strokeWeight), pos.y - hOffset - (strokeWeight), (float)width + (strokeWeight*2), (float)height + (strokeWeight*2)}, roundness, 16, stroke);
    }

    // Draw rectangle
    DrawRectangleRounded({pos.x - wOffset, pos.y - hOffset, (float)width, (float)height}, roundness, 16, fill);

    // Draw text
    //Vector2 textSize = MeasureTextEx()

}
