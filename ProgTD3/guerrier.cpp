#include "guerrier.h"

guerrier::guerrier()
{
	force = 15;
	chargecondition = 5;
}

guerrier::guerrier(int _force)
{
	//...
}

guerrier::~guerrier(){}

void guerrier::attaquer()
{
}

bool guerrier::charge()
{
	if (GetMana() < chargecondition)
	{
		return false;
	}
	else
		return true;
}
