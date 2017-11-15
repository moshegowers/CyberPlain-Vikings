#include <iostream>
#include "Vikings.h"

void main(void)
{
	Vikings *vikingsArray[10];

	for (size_t i = 0; i < 10; i++)
	{
		vikingsArray[i] = new Vikings;
		std::cout << (vikingsArray[i]->checkFightOrFlight() ? "Fight" : "Flight") << std::endl;
	}

	delete vikingsArray[5];
	for (size_t i = 0; i < 10; i++)
	{
		if (vikingsArray[i] != NULL)
		{
			std::cout << (vikingsArray[i]->checkFightOrFlight() ? "Fight" : "Flight") << std::endl;
		}
	}

	vikingsArray[5] = new Vikings;
	for (size_t i = 0; i < 10; i++)
	{
		if (vikingsArray[i] != NULL)
		{
			std::cout << (vikingsArray[i]->checkFightOrFlight() ? "Fight" : "Flight") << std::endl;
		}
	}
}