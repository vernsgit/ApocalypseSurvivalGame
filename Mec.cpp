#include "Mec.h"
#include "Predmet.h"


Mec::Mec(std::string nazev, int bonusZdravi,int bonusSila) : Predmet(nazev, 0, 40){
    m_bonusSila = 40;
    m_bonusZdravi = 0;
}