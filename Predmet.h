#ifndef PROJEKT_PREDMET_H
#define PROJEKT_PREDMET_H
#include <iostream>


class Predmet { //meč, lektvar, kouzelnéJablko
protected:
    std::string m_nazev;
    int m_bonusZdravi;
    int m_bonusSila;
public:
    Predmet(std::string nazev, int bonusZdravi, int bonusSila);
    void setNazev(std::string nazev);
    void setBonusZdravi(int bonusZdravi);
    void setBonusSila(int bonusSila);
    std::string getNazev();

    int getBonusZdravi();
    int getBonusSila();
    static Predmet* getPredmet(std::string nazev);
};

#endif //PROJEKT_PREDMET_H
