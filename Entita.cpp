
#include "Entita.h"

Entita::Entita( int X, int Y, std::string SYMBOL){
    x = X;
    y = Y;
    symbol = SYMBOL;
}

//kontrolujeme, zda byli zadány stejné velikosti
Entita::Entita(const std::vector<int> &Xs, const std::vector<int> &Ys, const std::vector<std::string> &symbols) {
    if(Xs.size() != Ys.size() || Xs.size() != symbols.size()) {
        std::cerr << "Chyba - Vektory souradnic a symbolu musi mit stejnou delku" << std::endl;
        return;
    }

    //kontrolujeme, zda údaje nejsou prázdné
    if(!Xs.empty() && !Ys.empty() && !symbols.empty()){
        x = Xs[0];
        y = Ys[0];
        symbol = symbols[0];
    }else {
        std::cerr << "Chyba - Vektory jsou prazdne" << std::endl;
    }
}

void Entita::setX(int newX){
    x = newX;
}

void Entita::setY(int newY){
    y = newY;
}

void Entita::setSymbol(std::string newSymbol){
    symbol = newSymbol;
}

int Entita::getX(){
    return x;
}

int Entita::getY(){
    return y;
}

std::string Entita::getSymbol(){
    return symbol;
}
