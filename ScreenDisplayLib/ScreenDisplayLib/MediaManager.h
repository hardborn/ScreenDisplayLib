#pragma once

#include "Media.h"
#include <iostream>
#include <vector>
#include <memory>

//using namespace std;

class MediaManager
{
public:
	MediaManager(std::shared_ptr<SDL_Window> window, std::shared_ptr<SDL_Renderer> renderer);
	~MediaManager();
	
	std::vector<std::shared_ptr<Media>> media_list() const { return media_list_; }
	


private:
	std::vector<std::shared_ptr<Media>> media_list_;
	std::shared_ptr<SDL_Window> window_;
	std::shared_ptr<SDL_Renderer> renderer_;
};

