#pragma once

#include "core.h"

namespace Godstoy {

	class HAZEL_API Application
	{
	public:  
		Application();
		virtual ~Application();

		void Run();
	};


	//To be defined in CLIENT
	Application* CreateApplication();

}



