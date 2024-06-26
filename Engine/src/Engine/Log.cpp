#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Engine {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_CilentLogger;

	void Log::Init() {

		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Engine");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_CilentLogger = spdlog::stdout_color_mt("App");
		s_CilentLogger->set_level(spdlog::level::trace);
	}
}
