#include "App.h"

App::App()
	:
	wnd( 800,600,"LUDI" )
{}

int App::Go()
{
	while( true )
	{
		if( const auto ecode = Window::ProcessMessages() )
		{
			return *ecode;
		}
		DoFrame();
	}
}

void App::DoFrame()
{
	const float c = sin(timer.Peek());
	wnd.Gfx().ClearBuffer(c, c, 1.0f);
	wnd.Gfx().EndFrame();
}