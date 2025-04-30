#pragma once
#include <string>
// Enum for the different sizes of rock
enum Size
{
	SMALL,
	MEDIUM,
	LARGE
};

namespace size {
	static std::string sizeToString(Size size)
	{
		switch (size)
		{
		case SMALL:
			return "Small";
			break;
		case MEDIUM:
			return "Medium";
			break;
		case LARGE:
			return "Large";
			break;
		default:
			return "";
			break;
		}
	}

	static Size stringToSize(std::string size)
	{
		if (size == "Small")
		{
			return SMALL;
		}
		else if (size == "Medium")
		{
			return MEDIUM;
		}
		else
		{
			return LARGE;
		}
	}
}