#pragma once
#include <array>
#include "Theme.h"
#include "Scene.h"
#include "Scenes.h"

inline Font defaultFont;
inline Theme currentTheme;
inline Scene currentScene;
inline void (*titleScene)(){Scenes::title};

inline Theme* LIGHT = new Theme{
    {255, 255, 255, 255},
    {219, 219, 219, 255},
    {183, 183, 183, 255},
    {146, 146, 146, 255},
    {110, 110, 110, 255},
    {73, 73, 73, 255},
    {37, 37, 37, 255},
    {0, 0, 0, 255}
};

inline Theme* DARK = new Theme{
    {0, 0, 0, 255},
    {37, 37, 37, 255},
    {73, 73, 73, 255},
    {110, 110, 110, 255},
    {146, 146, 146, 255},
    {183, 183, 183, 255},
    {219, 219, 219, 255},
    {255, 255, 255, 255}
};

// Array of Themes
inline std::array<const Theme*, 4> THEMES {LIGHT, DARK, nullptr, nullptr};