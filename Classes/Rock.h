#pragma once
#include <iostream>
#include <string>
#include "Size.h"
class Rock
{
public:
	// Rock enum class
	enum class eType
	{
		FLINT,
		STEEL,
		FELDSPAR
	};

	// Rock class attributes
	std::string commonName;
	std::string composition;
	int hardness;
	Size size;

	// Rock virtual functions
	virtual void read(std::ostream& ostream, std::istream& istream);

	virtual void write(std::ostream& ostream);

	// Rock virtual getters
	virtual eType getType() = 0;

	// Regular getters and setters
	std::string getCommonName()
	{
		return commonName;
	}

	void setCommonName(std::string commonName)
	{
		this->commonName = commonName;
	}

	std::string getComposition()
	{
		return composition;
	}

	void setComposition(std::string composition)
	{
		this->composition = composition;
	}

	int getHardness()
	{
		return hardness;
	}

	void setHardness(int hardness)
	{
		this->hardness = hardness;
	}

	Size getSize()
	{
		return size;
	}

	void setSize(Size size)
	{
		this->size = size;
	}
};