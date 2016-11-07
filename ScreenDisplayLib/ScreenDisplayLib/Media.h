#pragma once

#include <SDL.h>
#include <SDL_thread.h>

class Media
{
public:
	Media();
	~Media();
private:
	SDL_Window* window_;
};

