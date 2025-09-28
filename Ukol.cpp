#include "Ukol.h"

Ukol* Ukol::s_instance = nullptr;

Ukol* Ukol::getUkol(){
    if (s_instance == nullptr){
        s_instance = new Ukol();
    }
    return s_instance;
}

void Ukol::vypisUkolu(Postava* postava) {
    if(postava->getSkore() < 3){
        std::cout << "ukol: Zabij " << postava->getSkore()+1 <<". nepritele." << std::endl;
    }else if(postava->getSkore() == 3){
        std::cout << "ukol: Seber kouzelne jablko." << std::endl;
    }else{
        std::cout << "Vse jsi zvladl :)." << std::endl;
    }
}

bool Ukol::overeniUkolu(Postava* postava, int pomocna){
    if(pomocna == postava->getPocetMasoNepritel() || postava->jePredmetVInventari("kouzelneJablko")){
        postava->addPocetNuget();
        return true;
    }
    return false;
}

int Ukol::zadaniUkolu(Postava* postava){
    if(postava->getSkore() < 3){
        return 1;
    }else if(postava->getSkore() >= 3){
        return 2;
    }
    return 0;
}

Ukol::Ukol() {}
