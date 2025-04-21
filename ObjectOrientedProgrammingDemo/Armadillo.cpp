#include "Armadillo.h"

void Armadillo::move()
{
	std::cout << "I'm rolling out!" << std::endl;
}

void Armadillo::speak()
{
	std::cout << "Squeak" << std::endl;
}

void Armadillo::defend()
{
	isDefended = true;
}
