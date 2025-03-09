#include "../../spark_engine/src/spark.h"

int main()
{
	spark::engine::Initialize();
	SPARK_INFO("Test Game initialized Spark Engine");
	spark::Application* test_game = new spark::Application("Test Game");


	test_game->Run();


	delete test_game;
	spark::engine::Shutdown();

	return 0;
}
