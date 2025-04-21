#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flint.h"
#include "Steel.h"

class Database
{
public:
	// Database class attributes
	std::vector<Rock*> rocks;

	// Database deconstructor
	~Database();

	// Database methods
	void create(Rock::eType type);
	void display(const std::string commonName);
	void display(Rock::eType type);
	void displayAll();
};

