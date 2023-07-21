#include <Godstoy.h>

class Sandbox : public Godstoy::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Godstoy::Application* Godstoy::CreateApplication() 
{
	return new Sandbox();
}


