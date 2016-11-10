#pragma once

#include "Media.h"
#include <SDL.h>
#include <SDL_thread.h>
#include <iostream>
#include <vector>
#include <memory>

//using namespace std;

class MediaManager
{
public:
	MediaManager();
	~MediaManager();

	std::vector<std::shared_ptr<Media>> media_list() const { return media_list_; }

private:
	std::vector<std::shared_ptr<Media>> media_list_;
};

