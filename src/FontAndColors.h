#pragma once
#include "SDL_ttf.h"

class FontAndColors
{
public:
	FontAndColors();
	~FontAndColors() noexcept;

	enum class Colors { BACKGROUND_AREA_COLOR, TEXT_COLOR, OPPOSITE_TEXT_COLOR };
	SDL_Color GetColor(Colors color);
	SDL_Color editorColors[3];

	const int CFontHeight = 20;

	TTF_Font* TTFont = nullptr;
	TTF_Font* filesAreaTTFont = nullptr;
};
