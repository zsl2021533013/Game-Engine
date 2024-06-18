#pragma once

#ifdef PLATFORM_WINDOW

extern Engine::Application* Engine::CreateApplication();

int main(int args, char** argv) {

	printf("Hello World");

	auto app = Engine::CreateApplication();

	app->Run();

	delete app;

	return 0;
}

#else
	#error This Engine Only Support Windows!
#endif
