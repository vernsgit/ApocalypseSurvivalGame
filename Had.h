
#ifndef PROJEKT_HAD_H
#define PROJEKT_HAD_H
#include "Nepritel.h"

class Had : public Nepritel {
private:
    int m_poisonDamage;
public:
    Had(int zdraviNepritel, int silaNepritel, int poisonDamage);
    int getUtok() override;
};


#endif //PROJEKT_HAD_H
