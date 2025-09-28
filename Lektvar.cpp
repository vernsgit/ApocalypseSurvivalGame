#include "Lektvar.h"
#include <iostream>


Lektvar::Lektvar(std::string nazev, int bonusZdravi,int bonusSila) : Predmet(nazev, 40, 0){
    m_bonusZdravi = 40;
    m_bonusSila = 0;
};
//jablko.h


#ifndef PROJEKT_KOUZELNEJABLKO_H
#define PROJEKT_KOUZELNEJABLKO_H
#include <iostream>
#include "Predmet.h"

class KouzelneJablko : public Predmet {
public:
    KouzelneJablko(std::string nazev, int bonusZdravi,int bonusSila);
};


#endif //PROJEKT_KOUZELNEJABLKO_H