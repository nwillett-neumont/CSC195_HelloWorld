#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Size.h"
class Rock
{
private:
	// Rock class attributes
	std::string commonName;
	std::string composition;
	int hardness;
	Size size;
public:
	// Rock enum class
	enum class eType
	{
		FLINT,
		STEEL,
		FELDSPAR
	};

	// Operator overloads
	friend std::istream& operator >> (std::istream& istream, Rock& rock);

	friend std::ostream& operator << (std::ostream& ostream, Rock& rock);

	friend std::ifstream& operator >> (std::ifstream& ifstream, Rock& rock);

	friend std::ofstream& operator << (std::ofstream& ofstream, Rock& rock);

	// Rock virtual functions
	virtual void read(std::ostream& ostream, std::istream& istream);

	virtual void write(std::ostream& ostream);

	virtual void read(std::ifstream& ifstream);

	virtual void write(std::ofstream& ofstream);

	// Rock virtual getters
	virtual eType getType() = 0;

	// Regular getters and setters
	std::string getCommonName() const
	{
		return commonName;
	}

	void setCommonName(std::string commonName)
	{
		this->commonName = commonName;
	}

	std::string getComposition() const
	{
		return composition;
	}

	void setComposition(std::string composition)
	{
		this->composition = composition;
	}

	int getHardness() const
	{
		return hardness;
	}

	void setHardness(int hardness)
	{
		this->hardness = hardness;
	}

	Size getSize() const
	{
		return size;
	}

	void setSize(Size size)
	{
		this->size = size;
	}
};