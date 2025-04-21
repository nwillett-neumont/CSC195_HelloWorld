#pragma once
#include "Rock.h"

class Steel : public Rock
{
public:
	// Flint class attributes 
	bool isTempered;

	// Flint function overrides
	void read(std::ostream& ostream, std::istream& istream) override;

	void write(std::ostream& ostream) override;

	eType getType() override { return eType::STEEL; }

	// Flint getters and setters
	bool getIsTempered()
	{
		return isTempered;
	}

	void setIsTempered(bool isTempered)
	{
		this->isTempered = isTempered;
	}
};