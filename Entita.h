
#ifndef DDUPRAVA_ENTITA_H
#define DDUPRAVA_ENTITA_H

#include <iostream>
#include <vector>

class Entita {
protected:
    int x;
    int y;
    std::string symbol;
public:
    Entita( int X, int Y, std::string SYMBOL);
    Entita(const std::vector<int>& Xs, const std::vector<int>& Ys, const std::vector<std::string>& symbols);

    int getX();
    int getY();
    void setX(int newX);
    void setY(int newXY);
    void setSymbol(std::string newSymbol);
    std::string getSymbol();
};
#endif //DDUPRAVA_ENTITA_H

