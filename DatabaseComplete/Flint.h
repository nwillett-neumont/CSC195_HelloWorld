#pragma once
#include "Rock.h"

class Flint : public Rock
{
private:
	// Flint class attributes
	bool isShiny;
public:
	// Flint function overrides
	void read(std::ostream& ostream, std::istream& istream) override;

	void write(std::ostream& ostream) override;

	void read(std::ifstream& ifstream) override;

	void write(std::ofstream& ofstream) override;

	eType getType() override { return eType::FLINT; }

	// Flint getters and setters
	bool getIsShiny()
	{
		return isShiny;
	}

	void setIsShiny(bool isShiny)
	{
		this->isShiny = isShiny;
	}
};
