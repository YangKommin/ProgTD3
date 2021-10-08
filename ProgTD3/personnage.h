#pragma once
#include <iostream>

class personnage
{
public:

	personnage();
	personnage(std::string _nom);
	personnage(int _niveau,
				int _pv,
				int _mana,
				int _endurance,
				int _vitesse);
	~personnage();

	unsigned long gainxp();
	bool gainNiveau();
	unsigned long Earnxp();
	int GetMana();

private:

	std::string nom;
	int niveau;
	int pv;
	int mana;
	int endurance;
	int vitesse;
	int xp[10];
	unsigned long xpNeed;
	unsigned niveaulimit;
	unsigned long myxp;

protected:
	int lol;
};

