
#include "KouzelneJablko.h"


KouzelneJablko::KouzelneJablko(std::string nazev, int bonusZdravi,int bonusSila) : Predmet(nazev, 200, 0){
    m_bonusZdravi = 100;
    m_bonusSila = 0;
};