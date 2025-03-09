#pragma once
#include <memory>
#include <spdlog/spdlog.h>

namespace spark
{
	class Log
	{
		public:
			static void Init();

			inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
			inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		private:
			static std::shared_ptr<spdlog::logger> s_CoreLogger;
			static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//Core/engine logging macros
#define SPARK_CORE_TRACE(...)	::spark::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SPARK_CORE_INFO(...)	::spark::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SPARK_CORE_WARN(...)	::spark::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SPARK_CORE_ERROR(...)	::spark::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SPARK_CORE_FATAL(...)	::spark::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client/app logging macros
#define SPARK_TRACE(...)		::spark::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SPARK_INFO(...)			::spark::Log::GetClientLogger()->info(__VA_ARGS__)
#define SPARK_WARN(...)			::spark::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SPARK_ERROR(...)		::spark::Log::GetClientLogger()->error(__VA_ARGS__)
#define SPARK_FATAL(...)		::spark::Log::GetClientLogger()->fatal(__VA_ARGS__)

