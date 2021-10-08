#pragma once
#include "personnage.h"
class mage :
    public personnage
{
public:

    mage();
    mage(int _intelligence);
    ~mage();

    void attaquer();
    bool boule_de_feu();

private:

    int intelligence;
    int bdfCondition;
};