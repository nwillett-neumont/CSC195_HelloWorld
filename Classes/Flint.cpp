#include "Flint.h"

void Flint::read(std::ostream& ostream, std::istream& istream)
{
	Rock::read(ostream, istream);
	ostream << "Is this particular piece of flint shiny? (y/n)";
	char input;
	istream >> input;

	switch (input)
	{
	case 'y':
		setIsShiny(true);
		break;
	case 'n':
		setIsShiny(false);
		break;
	}
}

void Flint::write(std::ostream& ostream)
{
	Rock::write(ostream);
	ostream << "Shine status: " << getIsShiny() << std::endl;
}