#include "Nepritel.h"
#include <iostream>
#include "Zombie.h"
#include "Had.h"
#include "Demon.h"

Nepritel::Nepritel(int zdraviNepritel, int silaNepritel) {
    setZdraviNepritel(zdraviNepritel);
    setSilaNepritel(silaNepritel);
}

int Nepritel::getZdraviNepritel() {
    return m_zdraviNepritel;
}

void Nepritel::setZdraviNepritel(int zdraviNepritel) {
    this->m_zdraviNepritel = zdraviNepritel;
}

int Nepritel::getSilaNepritel() {
    return m_silaNepritel;
}

void Nepritel::setSilaNepritel(int silaNepritel) {
    this->m_silaNepritel = silaNepritel;
}

//tvorba nepřátel
Nepritel* Nepritel::getNepritel(std::string znak){
    if(znak == "z") {
        return new Zombie(75, 20);
    } else if(znak == "h") {
        return new Had(50, 10, 5);
    } else if(znak == "d") {
        return new Demon(80, 20, 5);
    } else {
        return nullptr;
    }
}