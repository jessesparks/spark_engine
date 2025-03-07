#pragma once

namespace spark
{
	class Application
	{
		public:
			Application(const char* name);
			~Application();
			void Run();
		private:
			const char*  m_name;
	};
}
