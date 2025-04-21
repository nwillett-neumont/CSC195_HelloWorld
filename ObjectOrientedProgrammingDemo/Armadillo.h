#pragma once
#include "Animal.h"

class Armadillo : public Animal
{
public:
	Armadillo()
	{
		m_name = "Thomas";
		isDefended = false;
	}

	Armadillo(std::string _name, bool isDefended) : Animal(_name), isDefended(isDefended) {}

	~Armadillo() {}

	void move() override;

	void speak() override;

	void defend();

protected:
	bool isDefended = false;
};