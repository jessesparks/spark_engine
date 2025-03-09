#pragma once
#include <functional>
#include <string>
#include <utility>
#include <array>

namespace engine
{
	union EventArg
	{
		unsigned int t_uint;
		int t_int;
		bool t_bool;
		float t_float;
		std::string t_string;
	};
	class Event
	{
		public:

		private:
			unsigned int m_num_args; 
			std::array<std::pair<std::hash<std::string>, EventArg>, 8> m_events;
	};
}
