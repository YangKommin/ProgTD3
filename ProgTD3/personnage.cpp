#include "personnage.h"

personnage::personnage()
{
	nom = "Monperso";
	niveau = 0;
	pv = 50;
	mana = 30;
	endurance = 25;
	vitesse = 2;
	xpNeed = 1000;
	for (unsigned i(0); i < 10; ++i)
	{
		xp[i] = xpNeed + i * xpNeed;
	}
	niveaulimit = 10;
	myxp = 0;

	lol = 546;

}

personnage::personnage(std::string _nom)
{
	//.....
}
personnage::personnage(int _niveau,
						int _pv,
						int _mana,
						int _endurance,
						int _vitesse)
{
	//.....
}

personnage::~personnage(){}

unsigned long personnage::gainxp()
{
	return myxp = myxp + Earnxp();
}

bool personnage::gainNiveau()
{
	for (unsigned i = 0; i < niveaulimit; i++)
	{
		if (gainxp() > xp[i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

unsigned long personnage::Earnxp()
{
	return 1;
}

int personnage::GetMana()
{
	return mana;
}
