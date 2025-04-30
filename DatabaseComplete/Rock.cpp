#include "Rock.h"

// Rock operator overload definitions
std::istream& operator>>(std::istream& istream, Rock& rock)
{
	rock.read(std::cout, istream);
	return istream;
}

std::ostream& operator<<(std::ostream& ostream, Rock& rock)
{
	rock.write(ostream);
	return ostream;
}

std::ifstream& operator>>(std::ifstream& ifstream, Rock& rock)
{
	rock.read(ifstream);
	return ifstream;
}

std::ofstream& operator<<(std::ofstream& ofstream, Rock& rock)
{
	rock.write(ofstream);
	return ofstream;
}

// Rock function definitions
void Rock::read(std::ostream& ostream, std::istream& istream) // Asks the user for various inputs and assigns them to a Rock object
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

void Rock::write(std::ostream& ostream) // Prints out all base rock information nice and clean like
{
	std::cout << "Common Name: " << getCommonName() << "\n"
		<< "Composition: " << getComposition() << "\n"
		<< "Hardness: " << getHardness() << "\n"
		<< "Size: " << size::sizeToString(getSize()) << "\n";
}

void Rock::read(std::ifstream& ifstream) // Saves data from the attributes of the Rock class
{	
	int temp = 0;
	ifstream >> this->commonName;
	ifstream >> this->composition;
	ifstream >> this->hardness;
	ifstream >> temp;
	this->size = static_cast<Size>(temp);
}

void Rock::write(std::ofstream& ofstream) // Loads data from the attributes of the Rock class
{
	ofstream << this->commonName << std::endl;
	ofstream << this->composition << std::endl;
	ofstream << this->hardness << std::endl;
	ofstream << this->size << std::endl;
}