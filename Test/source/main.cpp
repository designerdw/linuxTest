#include "../include/Test.h"
#include <cstdio>

int main()
{
	printf("Test Start\n");
	printf("---------------------------\n");

  Person p(std::string("kikipdw"));
	
	//Person p("kikipdw");
	p.DisplayStr();
	
	
	//std::cout << std::string("kikipdw") << '\n';

	return 0;
}
