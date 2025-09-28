
#ifndef PROJEKT_NEPRITEL_H
#define PROJEKT_NEPRITEL_H
#include <iostream>
#include <vector>

class Nepritel {
protected:
    int m_zdraviNepritel;
    int m_silaNepritel;
public:
    Nepritel(int zdraviNepritel, int silaNepritel);
    int getZdraviNepritel();
    void setZdraviNepritel(int zdraviNepritel);
    int getSilaNepritel();
    void setSilaNepritel(int silaNepritel);

    virtual int getUtok() = 0; //neplatí v Nepřítelovi, platí až u konkrétních nepřátel
    static Nepritel* getNepritel(std::string znak);
};


#endif //PROJEKT_NEPRITEL_H
