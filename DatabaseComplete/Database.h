#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "Flint.h"
#include "Steel.h"

class Database
{
public:
	// Database class attributes
	std::vector<std::unique_ptr<Rock>> rocks;

	// Database deconstructor
	~Database();

	// Database methods
	Rock* create(int type);
	void create(Rock::eType type);
	void display(const std::string commonName);
	void display(Rock::eType type);
	void displayAll();
	void removeAll();
	void load(const std::string& filename);
	void save(const std::string& filename);
};

