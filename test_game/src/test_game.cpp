#include "../../spark_engine/src/spark.h"

int main()
{
	spark::engine::Initialize();
	spark::Application* app = new spark::Application("Test Game");


	app->Run();


	delete app;
	spark::engine::Shutdown();

	return 0;
}
