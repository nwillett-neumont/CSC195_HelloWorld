#pragma once
#include "Rock.h"

class Flint : public Rock
{
public:
	// Flint class attributes
	bool isShiny;

	// Flint function overrides
	void read(std::ostream& ostream, std::istream& istream) override;

	void write(std::ostream& ostream) override;

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
