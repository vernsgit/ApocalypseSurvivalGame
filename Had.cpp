
#include "Had.h"
#include "Nepritel.h"

Had::Had(int zdraviNepritel, int silaNepritel, int poisonDamage) : Nepritel(zdraviNepritel, silaNepritel){
    m_poisonDamage = poisonDamage;
}

int Had::getUtok(){
    return m_silaNepritel + m_poisonDamage;
}