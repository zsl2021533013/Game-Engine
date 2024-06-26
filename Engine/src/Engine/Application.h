#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Engine {
	
	class ENGINE_API Application {

	public:
		Application();
		~Application();

		void Run();
	};

	Application* CreateApplication();
}


