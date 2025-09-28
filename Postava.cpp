
#include "Postava.h"
#include "Predmet.h"

Postava::Postava(int zdravi, int sila) {
    setSila(sila);
    setZdravi(zdravi);
}

int Postava::getZdravi() {
    return m_zdravi;
}

int Postava::getSkore(){
    return m_skore;
}

void Postava::setZdravi(int zdravi){
    this->m_zdravi = zdravi;
}

int Postava::getSila(){
    return m_sila;
}

void Postava::setSila(int sila){
    this->m_sila = sila;
}

void Postava::addSouboj(Nepritel *nepritel) {
    int rozdil = 0;
    std::cout << "souboj: ";
    std::cout << "P: " << m_zdravi << ", ";
    std::cout << "N: " << nepritel->getZdraviNepritel() << ", ";
    while (m_zdravi > 0 && nepritel->getZdraviNepritel() > 0) {
        //postava utoci
        int health = nepritel->getZdraviNepritel();
        rozdil = health - m_sila;
        if(rozdil <= 0){
            nepritel->setZdraviNepritel(0);
            addMasoNepritel();
        }else{
            nepritel->setZdraviNepritel(rozdil);
        }

        //nepritel utoci
        rozdil = m_zdravi - nepritel->getUtok();
        if(rozdil <= 0){
            m_zdravi = 0;
        }else{
            m_zdravi = rozdil;
        }
        std::cout << "P: " << m_zdravi<< ", ";
        std::cout << "N: " << nepritel->getZdraviNepritel();
        if(m_zdravi != 0 && nepritel->getZdraviNepritel() != 0){
            std::cout << ", ";
        }
    }
    std::cout<<std::endl;
}


int Postava::getPocetNuget(){
    return m_pocetNuget;
}

int Postava::getPocetMasoNepritel() {
    return m_pocetMasoNepritel;
}

void Postava::addPocetNuget(){
    m_pocetNuget++;
    m_skore = m_pocetNuget;
}

void Postava::addMasoNepritel(){
    m_pocetMasoNepritel++;
}

void Postava::addPredmetInventar(Predmet* predmet){
    m_zdravi += predmet->getBonusZdravi();
    m_sila += predmet->getBonusSila();
    m_inventar.push_back(predmet);
}

void Postava::vypisInventar(){
    if(!m_inventar.empty()){
        std::cout << "inventar: ";
        for(int b = 0; b < m_inventar.size(); b++){
            std::cout << m_inventar.at(b)->getNazev();
            if(b != m_inventar.size()-1){
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
}
//nechat byt zatim nekopirovat
bool Postava::jePredmetVInventari(std::string nazevPredmetu) {
    for (const auto& item : m_inventar) {
        if (item->getNazev() == nazevPredmetu) {
            return true;
        }
    }
    return false;
}

void Postava::vymazInventar() {
    for (Predmet* predmet : m_inventar) {
        delete predmet;
    }
    m_inventar.clear();
}

void Postava::vypisVlastnosti(){
    std::cout << "skore: " << getSkore() << std::endl;
    std::cout << "zlate nugety: " << getPocetNuget() << "                         zdravi: " << getZdravi() <<  std::endl;
    std::cout << "masa z nepratel: " << getPocetMasoNepritel() << "                        sila: " << getSila() << std::endl;
}

void Postava::vyhodOdmenu() {
    m_pocetNuget = 0;
    m_pocetMasoNepritel = 0;
}