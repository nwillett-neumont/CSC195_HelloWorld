#include "Steel.h"

void Steel::read(std::ostream& ostream, std::istream& istream)
{
	Rock::read(ostream, istream);
	ostream << "Is this particular piece of steel tempered? (y/n)";
	char input;
	istream >> input;

	switch (input)
	{
	case 'y':
		setIsTempered(true);
		break;
	case 'n':
		setIsTempered(false);
		break;
	}
}

void Steel::write(std::ostream& ostream)
{
	Rock::write(ostream);
	ostream << "Temperance: " << isTempered << std::endl;
}