
#ifndef PROJEKT_POSTAVA_H
#define PROJEKT_POSTAVA_H

#include <iostream>
#include <vector>
#include "Nepritel.h"
#include "Predmet.h"
#include "Lektvar.h"

class Postava {
private:
    int m_zdravi;
    int m_sila;

    std::vector<Predmet*> m_inventar;

    int m_pocetMasoNepritel = 0;
    int m_skore = 0;
    int m_pocetNuget = 0;
public:
    Postava(int zdravi, int sila);

    int getSila();
    int getZdravi();
    int getSkore();
    int getPocetNuget();
    int getPocetMasoNepritel();

    void vypisVlastnosti();

    void setZdravi(int zdravi);
    void setSila(int sila);
    void addSouboj(Nepritel* nepritel);

    void addPocetNuget();
    void addMasoNepritel();
    void addPredmetInventar(Predmet* predmet);
    void vypisInventar();
    bool jePredmetVInventari(std::string nazevPredmetu);
    void vymazInventar();
    void vyhodOdmenu();
};

#endif //PROJEKT_POSTAVA_H
