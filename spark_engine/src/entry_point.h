#include <iostream>

namespace spark::engine
{
	inline void Initialize()
	{
		std::cout << "Spark Engine initializing\n";
	}

	inline void Shutdown()
	{
		std::cout << "Spark Engine shutting down\n";
	}
}
