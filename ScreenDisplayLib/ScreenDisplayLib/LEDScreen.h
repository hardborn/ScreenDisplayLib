#pragma once

#include "MediaManager.h"
#include "SDL.h"

#include <iostream>
#include <vector>
#include <memory>

class LEDScreen
{
public:
	LEDScreen();
	~LEDScreen();

	int InitializeScreen();
private:
	std::shared_ptr<SDL_Window> window_;
	std::shared_ptr<SDL_Renderer> renderer_;
	MediaManager media_manager_;
};

