#include "application.h"
#include "log.h"

namespace spark
{
	Application::Application(const char* name)
		: m_name(name)
	{
		SPARK_CORE_INFO("Creating application: {0}", m_name);
	}

	void Application::Run()
	{
		SPARK_CORE_INFO("{0} running", m_name);
	}

	Application::~Application()
	{
		SPARK_CORE_INFO("{0} destroyed", m_name);
	}
}
