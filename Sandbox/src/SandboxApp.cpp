#include <GoElon.h>
class Sandbox : public GoElon::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};
GoElon::Application* GoElon::CreateApplication()
{
	return new Sandbox();
}