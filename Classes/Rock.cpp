#include "Rock.h"

void Rock::read(std::ostream& ostream, std::istream& istream)
{
	ostream << "What is this rock's common name? ";
	std::string input;
	istream >> input;

	setCommonName(input);

	ostream << "What is this rock's composition? ";
	istream >> input;

	setComposition(input);

	ostream << "What is this rock's hardness? ";
	istream >> input;

	setHardness(stoi(input));

	ostream << "What is this rock's size? (0 - SMALL, 1 - MEDIUM, 2 - LARGE)";
	int t;
	istream >> t;
	
	setSize(static_cast<Size>(t));
}

void Rock::write(std::ostream& ostream)
{
	std::cout << "Common Name: " << getCommonName() << "\n"
		<< "Composition: " << getComposition() << "\n"
		<< "Hardness: " << getHardness() << "\n"
		<< "Size: " << getSize() << "\n";
}