
#ifndef PROJEKT_DEMON_H
#define PROJEKT_DEMON_H
#include "Nepritel.h"

class Demon : public Nepritel {
private:
    int m_fireDamage;

public:
    Demon(int zdraviNepritel, int silaNepritel, int fireDamage);
    int getUtok() override; //přepisujeme metodu
};


#endif //PROJEKT_DEMON_H
