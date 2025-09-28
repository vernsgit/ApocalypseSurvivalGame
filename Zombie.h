
#ifndef PROJEKT_ZOMBIE_H
#define PROJEKT_ZOMBIE_H
#include "Nepritel.h"

class Zombie : public Nepritel{
public:
    Zombie(int zdraviNepritel, int silaNepritel);
    int getUtok() override;
};


#endif //PROJEKT_ZOMBIE_H
