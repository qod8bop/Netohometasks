#pragma once
#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif

namespace lvr
{
	class Leaver
	{
	public:
		void leave();
	};

}