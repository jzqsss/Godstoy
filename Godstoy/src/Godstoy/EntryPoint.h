#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Godstoy::Application* Godstoy::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Godstoy::CreateApplication();
	app->Run();
	delete app;
}

#endif