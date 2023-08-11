#pragma once

#ifdef HZ_PLATFORM_WINDOWS

//extern Godstoy::Application* Godstoy::CreateApplication();

int main(int argc, char** argv)
{
	Godstoy::Log::Init();
	//Godstoy::Log::GetCoreLogger()->warn("Initialized Log!");
	//Godstoy::Log::GetClientLogger()->info("Hello!");

	HZ_CORE_WARN("Innitialized Log!");
	int a = 5,b=4;
	HZ_INFO("Hello!var={0},{1}", a,b);


	auto app = Godstoy::CreateApplication();
	app->Run();
	delete app;
}

#endif