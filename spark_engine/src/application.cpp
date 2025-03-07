#include "application.h"
#include <iostream>

namespace spark
{
	Application::Application(const char* name)
		: m_name(name)
	{
		std::cout << "Creating application\n";
	}

	void Application::Run()
	{
		std::cout << m_name << " running\n";
	}

	Application::~Application()
	{
		std::cout << "Destroying application\n";
	}
}
