
#ifndef PROJEKT_KOUZELNEJABLKO_H
#define PROJEKT_KOUZELNEJABLKO_H
#include <iostream>
#include "Predmet.h"

class KouzelneJablko : public Predmet {
public:
    KouzelneJablko(std::string nazev, int bonusZdravi,int bonusSila);
};


#endif //PROJEKT_KOUZELNEJABLKO_H
