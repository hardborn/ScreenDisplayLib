#include "stdafx.h"
#include "MediaManager.h"


MediaManager::MediaManager(std::shared_ptr<SDL_Window> window, std::shared_ptr<SDL_Renderer> renderer)
	:window_(window), renderer_(renderer)
{

}


MediaManager::~MediaManager()
{
}
