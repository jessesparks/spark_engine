#include <iostream>
#include "log.h"

namespace spark::engine
{
	inline void Initialize()
	{
		Log::Init();
		SPARK_CORE_INFO("Spark Engine initializing");
	}

	inline void Shutdown()
	{
		SPARK_CORE_INFO("Spark Engine shutting down");
	}
}
