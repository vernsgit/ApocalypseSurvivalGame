
#include "Demon.h"
#include "Nepritel.h"

Demon::Demon(int zdraviNepritel, int silaNepritel, int fireDamage) : Nepritel(zdraviNepritel, silaNepritel){
    m_fireDamage = fireDamage;
};

int Demon::getUtok(){
    return m_silaNepritel+m_fireDamage;
}