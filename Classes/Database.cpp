#include "Database.h"

Database::~Database() // Destructor
{
	for (Rock* rock : rocks)
	{
		delete rock;
	}
}

void Database::create(Rock::eType type) // Creates a new rock based on type
{
	Rock* rock = nullptr;
	switch (type)
	{
	case Rock::eType::FLINT:
		rock = new Flint;
		break;
	case Rock::eType::STEEL:
		rock = new Steel;
		break;
	}
	rock->read(std::cout, std::cin);
	rocks.push_back(rock);
}

void Database::display(const std::string commonName) // Prints out rocks only with matching names
{
	for (Rock* rock : rocks)
	{
		if (rock->getCommonName() == commonName)
		{
			rock->write(std::cout);
			std::cout << std::string(40, 45) << "\n";
		}
	}
}

void Database::display(Rock::eType type) // Prints out rocks only with matching types
{
	for (Rock* rock : rocks)
	{
		if (rock->getType() == type)
		{
			rock->write(std::cout);
			std::cout << std::string(40, 45) << "\n";
		}
	}
}

void Database::displayAll() // Prints out all rocks, indiscriminately
{
	for (Rock* rock : rocks)
	{
		rock->write(std::cout);
		std::cout << std::string(40, 45) << "\n";
	}
}


