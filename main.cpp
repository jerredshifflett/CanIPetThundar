#include <iostream>

// we need to include the header file which declares the squared function
// because a function has to be declared for us to use it
#include "dinnerplan.h"

/************************************************************************
*
************************************************************************/
int main() {
	int level;
	std::cout << "Cant think of what to eat for dinner?\n";
	std::cout <<"Enter a number 1 - 10, and I will pick for you. ";
	std::cin >> level;
    dinnerplan(level);
    return 0;
} // end of main