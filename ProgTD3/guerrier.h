#pragma once
#include "personnage.h"
class guerrier :
    public personnage
{
public:

    guerrier();
    guerrier(int _force);
    ~guerrier();

    void attaquer();
    bool charge();

private:

    int force;
    int chargecondition;
};

