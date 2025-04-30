#pragma once
#include "Rock.h"

class Steel : public Rock
{
private:
	// Flint class attributes 
	bool isTempered = false;
public:
	// Flint function overrides
	void read(std::ostream& ostream, std::istream& istream) override;

	void write(std::ostream& ostream) override;

	void read(std::ifstream& ifstream) override;

	void write(std::ofstream& ofstream) override;

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