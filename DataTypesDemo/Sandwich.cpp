#include <iostream> 
#include "Sandwich.h"

static Sandwich sandwichRunner() 
{
	Sandwich blt;
	blt.meat = Bacon;
	blt.isHot = false;
	return blt;
}