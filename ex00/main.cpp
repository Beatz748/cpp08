#include "easyfind.hpp"


int main()
{
	std::vector<int> v;

	int i = -1;

	while (++i < 10)
		v.push_back(i);

	std::vector<int>::const_iterator it;
	try
	{
		it = easyfind(v, 8);
	}
	catch(BadArgumentException & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << *it << std::endl;
}
