#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Godstoy {
	class HAZEL_API Log
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

// Core log macros
#define HZ_CORE_TRACE(...)     ::Godstoy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)      ::Godstoy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)      ::Godstoy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)     ::Godstoy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)     ::Godstoy::Log::GetCoreLogger()->fatal(__VA_ARGS__)
								
//Client log macros				 
#define HZ_TRACE(...)          ::Godstoy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)           ::Godstoy::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)           ::Godstoy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)          ::Godstoy::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)          ::Godstoy::Log::GetClientLogger()->fatal(__VA_ARGS__)




