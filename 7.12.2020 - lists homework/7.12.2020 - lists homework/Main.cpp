#include "Main.h"

/*Main::Main(const std::initializer_list<Triangle>& list)
{

}*/

size_t Main::maxArea(std::initializer_list<Triangle>& list)
{
	for (auto& elem : list)
	{
		elem.countArea(elem.);
	}
}
