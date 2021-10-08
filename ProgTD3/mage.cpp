#include "mage.h"

mage::mage()
{
	bdfCondition = 10;
}

mage::mage(int _intelligence)
{
}

mage::~mage()
{
}

void mage::attaquer()
{
}

bool mage::boule_de_feu()
{
	if (GetMana() < bdfCondition)
	{
		return false;
	}
	else
		return true;
}
