#include "Flint.h"

void Flint::read(std::ostream& ostream, std::istream& istream) // Asks the user whether or not isShiny should be true or not and assigns it based on their input
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

void Flint::write(std::ostream& ostream) // Outputs the shine status
{
	Rock::write(ostream);
	ostream << "Shine status: " << getIsShiny() << std::endl;
}