// ScreenDisplayLib.h

#pragma once
extern "C"{
#include <libavformat/avformat.h>
}

#include <SDL.h>
#include <SDL_thread.h>

using namespace System;

namespace ScreenDisplayLib {

	public ref class ScreenDisplay
	{
	public:
		ScreenDisplay();
		~ScreenDisplay();
		Int32 Initialize();

	private:
		String^ _screenId;
		Int32 _screen_x;
		Int32 _screen_y;
		Int32 _screen_width;
		Int32 _screen_heigh;

		//SDL_Window* _screen_window;
		//SDL_Renderer* _screen_renderer;

		// TODO: Add your methods for this class here.
	};
}
