#pragma once

#include "Animal.h"

class Frog : public Animal
{
public:
	Frog() 
	{
		m_name = "Joey";
	}

	Frog(std::string _name) : Animal(_name) {}

	~Frog() 
	{
		delete pm_yearsSurvived;
	}

	void move() override;

	void speak() override;
protected:
	
	int* pm_yearsSurvived = 0;
};