#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include <vector>
#include <string>
#include <unordered_map>

class TextArea
{
public:
	TextArea();
	~TextArea();

	struct textFileInformation
	{
		size_t currentIndex = 0;
		std::vector<std::string> text;
	};

	size_t starting_X, starting_Y, ending_X, ending_Y;
	std::string currentFileName = "";
	std::vector<std::string> activeFiles;
	std::unordered_map<std::string, textFileInformation> fileText;

	size_t cursorRow, cursorColumn;
	size_t cursorWidht, cursor_Height;

	void DisplayFileArea(SDL_Renderer* renderer, SDL_Color backgroundColor, SDL_Color textColor, TTF_Font* font);

	void ReadCurrentFile();
	void WriteIntoCurrentFile();

	void InsertNearTheCursor(const char letter);
	void DeleteCurrentLetter();

	void DisplayCursor(SDL_Renderer *renderer);
};
