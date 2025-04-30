#pragma once
#include "raylib.h"
#include <string>

class Button {

private:
    Vector2 pos;
    int width;
    int height;
    Font font;
    std::string text;
    float fontSize;
    bool defineByCenter;

    Color fill = WHITE;
    Color stroke = BLACK;
    float strokeWeight = 2;
    Color textFill = BLACK;
    float roundness = 0.5;

    bool disabled = false;

    bool mouseXInRange();
    bool mouseYInRange();

public:
    Button(float x, float y, int width, int height, Font &font, std::string text, bool defineByCenter) {
        this->pos = {x, y};
        this->width = width;
        this->height = height;
        this->font = font;
        this->text = text;
        this->fontSize = height - 8;
        this->defineByCenter = defineByCenter;
    }

    void setStyle(Color fill, Color stroke, float strokeWeight, Color textFill, float roundness) {
        this->fill = fill;
        this->stroke = stroke;
        this->strokeWeight = strokeWeight;
        this->textFill = textFill;
        this->roundness = roundness;
    }

    void Draw();
    bool mouseIsOver();

// Getters
    Vector2 getPos() { return pos; }
    float getX() { return pos.x; }
    float getY() { return pos.y; }
    int getWidth() { return width; }
    int getHeight() { return height; }
    Font getFont() { return font; }
    std::string getText() { return text; }
    float getFontSize() { return fontSize; }
    bool definedByCenter() { return defineByCenter; }

    bool isDisabled() { return disabled; }

// Setters
    void setPos(float x, float y) { pos.x = x; pos.y = y; }
    void setX(float x) { pos.x = x; }
    void setY(float y) { pos.x = y; }
    void setWidth(int width) { this->width = width; }
    void setHeight(int height) { this->height = height; }
    void setFont(Font font) { this->font = font; }
    void setText(std::string text) { this->text = text.c_str(); }
    void setFontSize(float fontSize) { this->fontSize; }
    void setDefineByCenter(bool defCenter) { defineByCenter = defCenter; }
    void setFill(Color color) { fill = color; }
    void setStroke(Color color) { stroke = color; }
    void setStrokeWeight(float weight) { strokeWeight = weight; }
    void settextFill(Color color) { textFill = color; }
    void setRoundness(float roundness) { this->roundness = roundness; }
    void setDisabled(bool isDisabled) { disabled = isDisabled; }
};