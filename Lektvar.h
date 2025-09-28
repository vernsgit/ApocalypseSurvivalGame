#ifndef PROJEKT_LEKTVAR_H
#define PROJEKT_LEKTVAR_H
#include <iostream>
#include "Predmet.h"

class Lektvar : public Predmet{
public:
    Lektvar(std::string nazev, int bonusZdravi,int bonusSila);
};

#endif //PROJEKT_LEKTVAR_H