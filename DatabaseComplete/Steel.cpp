#include "Steel.h"

void Steel::read(std::ostream& ostream, std::istream& istream) // Asks the user if the steel should be tempered, and assigns a value based on their answer
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

void Steel::write(std::ostream& ostream) // Prints out the value of temperence
{
	Rock::write(ostream);
	ostream << "Temperance: " << isTempered << std::endl;
}

void Steel::read(std::ifstream& ifstream)
{
	Rock::read(ifstream);
	ifstream >> this->isTempered;
}

void Steel::write(std::ofstream& ofstream)
{
	Rock::write(ofstream);
	ofstream << this->isTempered;
}