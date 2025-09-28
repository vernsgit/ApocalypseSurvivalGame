
#ifndef KOPIE_OPRAVENO_HRA_H
#define KOPIE_OPRAVENO_HRA_H
#include <iostream>
#include "Postava.h"
#include "Mapa.h"

class Hra {
private:
    bool hraBezi = true;
    char vstup;
    Postava* postava;
    Mapa* prvniMapa;
    Nepritel* nepritel;
    NPC* npc;
public:
    void zacatekHry();
private:
    void zapniHru();
    void hra();
    void konecHry();
    void znovuHra();
    void vymaz();
};


#endif //KOPIE_OPRAVENO_HRA_H
