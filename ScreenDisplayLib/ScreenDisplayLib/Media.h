#pragma once


#include <iostream>
#include <memory>

#include <SDL.h>
#include <SDL_thread.h>

class Media
{
public:
	Media();
	~Media();
private:
	std::shared_ptr<SDL_Window> window_;
};

