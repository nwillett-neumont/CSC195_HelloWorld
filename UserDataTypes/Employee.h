#pragma once
#include <iostream>
#include <string>

class Employee
{
public:
	// Employee class methods
	void Read();
	void Write();
private:
	// Employee class static properties
	static const float TAX_RATE;
	// Employee class properties
	std::string name;
	short age;
	unsigned int zipCode;
	float hourlyWage;
	float hoursWorked;
};