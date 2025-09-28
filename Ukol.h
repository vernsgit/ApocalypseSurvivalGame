
#ifndef UKOL_H
#define UKOL_H
#include <iostream>
#include "Postava.h"

class Ukol {
private:
    static Ukol* s_instance;
    Ukol();
public:
    static Ukol* getUkol();
    void vypisUkolu(Postava* postava);
    bool overeniUkolu(Postava* postava, int pomocna);
    int zadaniUkolu(Postava* postava);
};
#endif // UKOL_H