#ifndef PROJEKT_MEC_H
#define PROJEKT_MEC_H
#include <iostream>
#include "Predmet.h"

class Mec : public Predmet {
public:
    Mec(std::string nazev, int bonusZdravi,int bonusSila);
};


#endif //PROJEKT_MEC_H
