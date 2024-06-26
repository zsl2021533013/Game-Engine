#pragma once

#ifdef PLATFORM_WINDOW

extern Engine::Application* Engine::CreateApplication();

int main(int args, char** argv) {

	Engine::Log::Init();

	Engine::Log::GetCoreLogger()->warn("Initilize Log");
	Engine::Log::GetClientLogger()->info("Initilize Log");

	auto app = Engine::CreateApplication();

	app->Run();

	delete app;

	return 0;
}

#else
	#error This Engine Only Support Windows!
#endif
