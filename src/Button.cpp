#include "Button.h"

// Draw
void Button::Draw() {
    
    // Determine X/Y offset
    float xOffset = 0;
    float yOffset = 0;
    if (defineByCenter) {
        xOffset = width/2;
        yOffset = height/2;
    }

    // Determine correct color
    Color drawFill;
    Color drawStroke;
    Color drawTextFill;

    if (mouseIsOver()) {
        drawFill = RED;
        drawStroke = RED;
        drawTextFill = RED;
    } else {
        drawFill = fill;
        drawStroke = stroke;
        drawTextFill = textFill;
    }

    // Draw stroke
    if (strokeWeight > 0) {
        DrawRectangleRounded({pos.x - xOffset - (strokeWeight), pos.y - yOffset - (strokeWeight), (float)width + (strokeWeight*2), (float)height + (strokeWeight*2)}, roundness, 16, drawStroke);
    }

    // Draw rectangle
    DrawRectangleRounded({pos.x - xOffset, pos.y - yOffset, (float)width, (float)height}, roundness, 16, drawFill);

    // Draw text
    Vector2 textSize = MeasureTextEx(font, text.c_str(), fontSize, 1);
    float textX = pos.x - xOffset + (width/2) - (textSize.x/2) - 2;
    float textY = pos.y - yOffset + (height/2) - (textSize.y/2);
    DrawTextEx(font, text.c_str(), {textX, textY}, fontSize, 1, drawTextFill);
}

// Mouse is over
bool Button::mouseIsOver() {
    if (mouseXInRange() && mouseYInRange()) {
        return true;
    } else {
        return false;
    }
}

// MouseX in range
bool Button::mouseXInRange() {
    float xOffset = 0;
    if (defineByCenter) { xOffset = width/2; }
    
    if (GetMouseX() > pos.x - xOffset - strokeWeight && GetMouseX() < pos.x - xOffset + width + strokeWeight) {
        return true;
    } else {
        return false;
    }
}

// MouseY in range
bool Button::mouseYInRange() {
    float yOffset = 0;
    if (defineByCenter) { yOffset = height/2; }
    
    if (GetMouseY() > pos.y - yOffset - strokeWeight && GetMouseY() < pos.y - yOffset + height + strokeWeight) {
        return true;
    } else {
        return false;
    }
}