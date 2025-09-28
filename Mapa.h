
#ifndef DDUPRAVA_MAPA_H
#define DDUPRAVA_MAPA_H

#include <iostream>
#include <vector>
#include <array>
#include "Entita.h"
#include "Postava.h"
#include "Ukol.h"
#include "Nepritel.h"
#include "NPC.h"

class Mapa {
private:
    std::vector<Entita*> objektyVMape;//seznam vsech veci na mape
    std::vector<Entita*> objektyVMape1;
    std::array<std::array<std::string, 51>, 21> XY;//prvni co v tom bude, druhe pocet radku //velky kontejner, ktery ma v sobe mensi kontejnery
    Nepritel* nepritel = nullptr;
    bool overeniMapy;
    Ukol* ukol0;
    int pom;
    int zadanUkol;

    std::string m_nastaveni;
    std::vector<Nepritel*> vektorNepratel;
public:
    Mapa();

    int najdiX();
    int najdiX1();

    void nastaveniNepratel(char vstup0);

    void pohybPoMape(char vstup, Postava* postava, NPC* NPC);

    void udelatOkraje();

    //void pridaniEntityZVenku(Entita* entitaKterouPridavameDoMapy);

    void setUpMapa();
    void setUpMapa1();

    void printMapa();

    void vyprazdnitMapu();

    void vytvorEntitu(std::vector<Entita*>& seznam, int x, int y, std::string symbol);

    void pridatEntityDoMapy();

    void pridatEntityDoMapy1();

    void vymazEntitu(std::vector<Entita*>& seznam, int x, int y);

    void update();
    void update1();
};


#endif //DDUPRAVA_MAPA_H
