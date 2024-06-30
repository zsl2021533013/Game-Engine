#include <Engine.h>

class ExampleLayer : public Engine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		if (Engine::Input::IsKeyPressed(GE_KEY_TAB))
		{
			GE_CORE_INFO("Tab key is pressed (poll)!");
		}
	}
};

class Sandbox : public Engine::Application
{
public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
		PushOverlay(new Engine::ImGuiLayer());
	}

	~Sandbox()
	{

	}

};

Engine::Application* Engine::CreateApplication()
{
	return new Sandbox();
}