
#include "Zombie.h"

Zombie::Zombie(int zdraviNepritel, int silaNepritel) : Nepritel(zdraviNepritel, silaNepritel){};

int Zombie::getUtok(){
    return m_silaNepritel;
}