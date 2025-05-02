#pragma once
#include "Theme.h"

class Scene {
public:
    void draw(void(*drawFunc)(Theme));
};