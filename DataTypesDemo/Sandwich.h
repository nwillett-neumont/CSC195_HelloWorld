#pragma once

enum Meat
{
	Bacon,
	Ham,
	Beef,
	Pork,
	Chicken,
	Pastrami
};

struct Sandwich
{
public:
	Meat meat;
	bool isHot;
	float weight;
};
