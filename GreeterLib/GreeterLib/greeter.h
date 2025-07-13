#pragma once
#include <cstring>
#include <iostream>

namespace grtr
{
	class Greeter 
	{
	private:
		std::string name;
	public:
		void greet();
	};
}