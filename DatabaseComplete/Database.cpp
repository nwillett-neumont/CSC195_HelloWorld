#include <memory>
#include "Database.h"

Database::~Database() // Destructor 
{}

Rock* Database::create(int type)
{
	Rock* rock = nullptr;
	switch (type)
	{
	case (int)(Rock::eType::FLINT):
		rock = new Flint;
		break;
	case (int)(Rock::eType::STEEL):
		rock = new Steel;
		break;
	}

	return rock;
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
	
	std::cin >> *rock;
	rocks.push_back(move(static_cast<std::unique_ptr<Rock>>(rock)));
}

void Database::display(const std::string commonName) // Prints out rocks only with matching names
{
	for (auto &rock : rocks)
	{
		if (rock->getCommonName() == commonName)
		{
			std::cout << *rock << "\n";
			std::cout << std::string(40, 45) << "\n";
		}
	}
}

void Database::display(Rock::eType type) // Prints out rocks only with matching types
{
	for (auto &rock : rocks)
	{
		if (rock->getType() == type)
		{
			std::cout << *rock << "\n";
			std::cout << std::string(40, 45) << "\n";
		}
	}
}

void Database::displayAll() // Prints out all rocks, indiscriminately
{
	for (auto &rock : rocks)
	{
		std::cout << *rock << "\n";
		std::cout << std::string(40, 45) << "\n";
	}
}

void Database::removeAll()
{
	for (auto &rock : rocks)
	{
		rocks.pop_back();
	}
}

void Database::load(const std::string& filename)
{
	std::ifstream input(filename);
	if (input.is_open())
	{
		removeAll();
		while (!input.eof())
		{
			int type;
			input >> type;
			auto rock = create(type);
			input >> *rock;
			rocks.push_back(move(static_cast<std::unique_ptr<Rock>>(rock)));
		}
	}
}

void Database::save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (auto &rock : rocks)
		{
			output << std::endl << static_cast<int>(rock->getType()) << std::endl;
			output << *rock;
		}
	}
}