#include "../../spark_engine/src/spark.h"

int main()
{
	spark::engine::Initialize();

	spark::engine::Shutdown();
	return 0;
}
