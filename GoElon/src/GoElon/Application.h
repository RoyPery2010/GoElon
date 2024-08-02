#pragma once
#include "Core.h"
namespace GoElon {
	class GOELON_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}