#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	Animal()
	{
		m_name = "";
	}
	Animal(std::string _name) : m_name(_name) {}
	~Animal() {}

	virtual void move();

	virtual void speak() = 0;

	std::string getName()
	{
		return m_name;
	}

	void setName(std::string _name)
	{
		m_name = _name;
	}
protected:
	std::string m_name;
};