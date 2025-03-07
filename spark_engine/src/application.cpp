#include "application.h"
#include <iostream>

namespace spark
{
	Application::Application(const char* name)
		: name(name)
	{
		std::cout << "Creating application\n";
	}

	void Application::Run()
	{
		std::cout << name << " running\n";
	}

	Application::~Application()
	{
		std::cout << "Destroying application\n";
	}
}
