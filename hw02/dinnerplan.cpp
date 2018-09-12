#include <iostream>
#include "dinnerplan.h"


int dinnerplan(int (level))
{

	switch (level)
	{
	case 1:
		std::cout <<"Pizza!\n";
		break;
	case 2:
		std::cout <<"Tacos!\n";
		break;
	case 3:
		std::cout <<"Spagetti!\n";
		break;
	case 4:
		std::cout <<"Ramen!\n";
		break;
	case 5:
		std::cout <<"Poke!\n";
		break;
	case 6:
		std::cout <<"Burger!\n";
		break;
	case 7:
		std::cout <<"Candy!\n";
		break;
	case 8:
		std::cout <<"Bbq!\n";
		break;
	case 9:
		std::cout <<"Cold cuts!\n";
		break;
	case 10:
		std::cout <<"Moco Loco!\n";
		break;	
     default: 
	    std::cout <<"You can't read dude.";
		break;
	}
	return 0;
}
	