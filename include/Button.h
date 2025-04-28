#pragma once
#include "raylib.h"
#include <string>
#include <string_view>

class Button {

private:
    Vector2 pos;
    int width;
    int height;
    Font font;
    std::string_view text;

    Color fill = WHITE;
    Color stroke = BLACK;
    float strokeWeight = 2;
    Color textColor = BLACK;
    float roundness = 0.5;

    bool defineByCenter = true;

    bool disabled;

public:
    Button(float x, float y, int width, int height, Font font, std::string text) {
        this->pos = {x, y};
        this->width = width;
        this->height = height;
        this->font = font;
        this->text = text;
    }

    void setStyle(Color fill, Color stroke, float strokeWeight, Color textColor, float roundness) {
        this->fill = fill;
        this->stroke = stroke;
        this->strokeWeight = strokeWeight;
        this->textColor = textColor;
        this->roundness = roundness;
    }

    void Draw();

// Getters

// Setters
};