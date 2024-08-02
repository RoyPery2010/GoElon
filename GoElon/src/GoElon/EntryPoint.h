#pragma once
#include <stdio.h>
#ifdef GOELON_PLATFORM_WINDOWS
extern GoElon::Application* GoElon::CreateApplication();
int main(int argc, char** argv)
{
	printf("GoElon Engine\n");
	auto app = GoElon::CreateApplication();
	app->Run();
	delete app;
}
#endif