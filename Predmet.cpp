#include "Predmet.h"
#include "Mec.h"
#include "Lektvar.h"
#include "KouzelneJablko.h"

Predmet::Predmet(std::string nazev, int bonusZdravi, int bonusSila) {
    setNazev(nazev);
    setBonusZdravi(bonusZdravi);
    setBonusSila(bonusSila);
}

void Predmet::setNazev(std::string nazev) {
    this->m_nazev = nazev;
}

void Predmet::setBonusZdravi(int bonusZdravi) {
    this->m_bonusZdravi = bonusZdravi;
}

void Predmet::setBonusSila(int bonusSila){
    this->m_bonusSila = bonusSila;
}

std::string Predmet::getNazev() {
    return m_nazev;
}

int Predmet::getBonusSila() {
    return m_bonusSila;
}

int Predmet::getBonusZdravi() {
    return m_bonusZdravi;
}

Predmet* Predmet::getPredmet(std::string nazev) {
    if(nazev == "mec"){
        return new Mec("mec",0,40);
    }else if(nazev =="lektvar"){
        return new Lektvar("lektvar",40,0);
    }else if(nazev =="kouzelneJablko"){
        return new KouzelneJablko("kouzelneJablko",100,0);
    }else{
        return nullptr;
    }
}