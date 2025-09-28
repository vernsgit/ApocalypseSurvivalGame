#include "Mapa.h"
#include "Entita.h"
#include "Postava.h"
#include "Predmet.h"
Mapa::Mapa() : overeniMapy(0), ukol0(nullptr), pom(1), zadanUkol(0){}

void Mapa::udelatOkraje() {
    for(int y = 0; y < XY.size(); y++){//21
        for(int x = 0; x < XY.at(y).size(); ++x){//51
            if(x == 0 || x == 50 || y == 0 || y == 20){
                XY.at(y).at(x) = "#";
            }
        }
    }
}

//bereme symboly a davame je do spravnych pozic
void Mapa::setUpMapa(){
    for(int i = 0; i < objektyVMape.size(); ++i) {
        int lokX = objektyVMape.at(i)->getX();
        int lokY = objektyVMape.at(i)->getY();
        std::string symbol = objektyVMape.at(i)->getSymbol();

        XY.at(lokY).at(lokX) = symbol;
    }
}

void Mapa::setUpMapa1(){
    for(int i = 0; i < objektyVMape1.size(); ++i) {
        int lokX = objektyVMape1.at(i)->getX();
        int lokY = objektyVMape1.at(i)->getY();
        std::string symbol = objektyVMape1.at(i)->getSymbol();

        XY.at(lokY).at(lokX) = symbol;
    }
}


//kdyz se hrac posune, tak aby tam nebyl dvakrat
void Mapa::vyprazdnitMapu(){
    for (int y = 0; y < XY.size(); ++y) {
        for (int x = 0; x < XY.at(y).size(); ++x) {
            XY.at(y).at(x) = "";
        }
    }
}

void Mapa::printMapa(){
    for (int y = 0; y < XY.size(); ++y) {
        for (int x = 0; x < XY.at(y).size(); ++x) {
            if(XY.at(y).at(x) == ""){
                std::cout << " ";
            }
            else{
                std::cout << XY.at(y).at(x);
            }

        }
        std::cout << std::endl;
    }
}

void Mapa::vytvorEntitu(std::vector<Entita*> &seznam, int x, int y, std::string symbol) {
    Entita* novaEntita = new Entita(x, y, symbol); //vytvori entitu
    seznam.push_back(novaEntita); //da entitu do vektoru
}

void Mapa::vymazEntitu(std::vector<Entita*>& seznam, int x, int y){//jen v prvním platí
    for (int i = 0; i < seznam.size(); ++i) {
        int Xover = seznam.at(i)->getX();
        int Yover = seznam.at(i)->getY();
        if(Xover == x and Yover == y){
            auto cil = seznam.at(i);
            delete cil;
            seznam.erase(seznam.begin() + i);
        }
    }
}

void Mapa::pridatEntityDoMapy(){
    //dumNahore
    vytvorEntitu(objektyVMape,5, 2, "-");
    vytvorEntitu(objektyVMape,6, 2, "-");
    vytvorEntitu(objektyVMape,7, 2, "-");
    vytvorEntitu(objektyVMape,8, 2, "-");
    vytvorEntitu(objektyVMape,9, 2, "-");
    vytvorEntitu(objektyVMape,13, 2, "-");
    vytvorEntitu(objektyVMape,14, 2, "-");
    vytvorEntitu(objektyVMape,15, 2, "-");
    vytvorEntitu(objektyVMape,16, 2, "-");
    vytvorEntitu(objektyVMape,17, 2, "-");
    for(int o = 0; o < 13; o++) {//spodní hrany
        vytvorEntitu(objektyVMape,5+o, 6, "-");
        vytvorEntitu(objektyVMape,33+o, 18, "-");
    }

    vytvorEntitu(objektyVMape,5, 3, "|");
    vytvorEntitu(objektyVMape,5, 4, "|");
    vytvorEntitu(objektyVMape,5, 5, "|");
    vytvorEntitu(objektyVMape,17, 3, "|");
    vytvorEntitu(objektyVMape,17, 5, "|");
//dumDole
    vytvorEntitu(objektyVMape,33, 14, "-");
    vytvorEntitu(objektyVMape,34, 14, "-");
    vytvorEntitu(objektyVMape,35, 14, "-");
    vytvorEntitu(objektyVMape,36, 14, "-");
    vytvorEntitu(objektyVMape,37, 14, "-");

    vytvorEntitu(objektyVMape,41, 14, "-");
    vytvorEntitu(objektyVMape,42, 14, "-");
    vytvorEntitu(objektyVMape,43, 14, "-");
    vytvorEntitu(objektyVMape,44, 14, "-");
    vytvorEntitu(objektyVMape,45, 14, "-");

    vytvorEntitu(objektyVMape,33, 15, "|");
    vytvorEntitu(objektyVMape,33, 17, "|");
    vytvorEntitu(objektyVMape,45, 15, "|");
    vytvorEntitu(objektyVMape,45, 16, "|");
    vytvorEntitu(objektyVMape,45, 17, "|");

//jablecny sad
    vytvorEntitu(objektyVMape,23, 6, "+");
    vytvorEntitu(objektyVMape,24, 6, "+");
    vytvorEntitu(objektyVMape,29, 6, "+");
    vytvorEntitu(objektyVMape,22, 5, "+");
    vytvorEntitu(objektyVMape,23, 5, "+");

    vytvorEntitu(objektyVMape,28, 5, "+");
    vytvorEntitu(objektyVMape,29, 5, "+");
    vytvorEntitu(objektyVMape,30, 5, "+");
    vytvorEntitu(objektyVMape,31, 5, "+");

    vytvorEntitu(objektyVMape,27, 4, "+");
    vytvorEntitu(objektyVMape,28, 4, "+");
    vytvorEntitu(objektyVMape,29, 4, "+");
    vytvorEntitu(objektyVMape,30, 4, "+");
    vytvorEntitu(objektyVMape,31, 4, "+");

    vytvorEntitu(objektyVMape,29, 3, "+");
    vytvorEntitu(objektyVMape,30, 3, "+");
    vytvorEntitu(objektyVMape,31, 3, "+");
    vytvorEntitu(objektyVMape,32, 3, "+");

    vytvorEntitu(objektyVMape,20, 3, "+");
    vytvorEntitu(objektyVMape,21, 3, "+");

    vytvorEntitu(objektyVMape,22, 2, "+");
    vytvorEntitu(objektyVMape,23, 2, "+");
    for(int i = 0; i < 18; i++){
        vytvorEntitu(objektyVMape,30+i, 1, "+");
    }
    vytvorEntitu(objektyVMape,46, 3, "+");
    vytvorEntitu(objektyVMape,47, 3, "+");
    vytvorEntitu(objektyVMape,46, 4, "+");
    vytvorEntitu(objektyVMape,47, 4, "+");
    vytvorEntitu(objektyVMape,48, 4, "+");
    vytvorEntitu(objektyVMape,45, 5, "+");
    vytvorEntitu(objektyVMape,46, 5, "+");
    vytvorEntitu(objektyVMape,47, 5, "+");
    vytvorEntitu(objektyVMape,48, 5, "+");
    vytvorEntitu(objektyVMape,40, 3, "+");
    vytvorEntitu(objektyVMape,41, 3, "+");
//voda
    for(int j=0; j < 7; j++){
        vytvorEntitu(objektyVMape,40, 3+j, "~");
        vytvorEntitu(objektyVMape,41, 3+j, "~");
        vytvorEntitu(objektyVMape,36, 3+j, "~");
        vytvorEntitu(objektyVMape,35, 3+j, "~");
        if(j <= 4){
            vytvorEntitu(objektyVMape,42,4+j, "~");
            vytvorEntitu(objektyVMape,34,4+j, "~");
        }
    }
    vytvorEntitu(objektyVMape,43, 5, "~");
    vytvorEntitu(objektyVMape,43, 6, "~");
    vytvorEntitu(objektyVMape,43, 7, "~");
    vytvorEntitu(objektyVMape,33, 5, "~");
    vytvorEntitu(objektyVMape,33, 6, "~");
    vytvorEntitu(objektyVMape,33, 7, "~");
    vytvorEntitu(objektyVMape,44, 6, "~");
    vytvorEntitu(objektyVMape,32, 6, "~");
//bazina
    vytvorEntitu(objektyVMape,5, 18, ".");
    vytvorEntitu(objektyVMape,9, 18, ".");
    vytvorEntitu(objektyVMape,13, 18, ".");
    vytvorEntitu(objektyVMape,17, 18, ".");
    vytvorEntitu(objektyVMape,21, 18, ".");
    vytvorEntitu(objektyVMape,21, 16, ".");
    vytvorEntitu(objektyVMape,25, 16, ".");
//predmety
    vytvorEntitu(objektyVMape,11, 4, "M");//mec
    vytvorEntitu(objektyVMape,28, 9, "L");//lektvar
    /*
         M = mec
         J = jablko
         L = lektvar
    */
    //nepritele
    vytvorEntitu(objektyVMape,19, 19, "h");
    vytvorEntitu(objektyVMape,5, 15, "h");
    vytvorEntitu(objektyVMape,11, 11, "h");
    /*
         $ = had
         & = demon
         @ = zombie
     */
    //npc
    vytvorEntitu(objektyVMape,39, 10, "N");
    //skaly
    for(int k = 0; k <= 12; k+=4){
        vytvorEntitu(objektyVMape,5+k, 8, "^");
        vytvorEntitu(objektyVMape,5+1+k, 8, "^");
    }
    for(int k = 0; k <= 16; k+=4){
        vytvorEntitu(objektyVMape,5+k, 10, "^");
        vytvorEntitu(objektyVMape,5+1+k, 10, "^");
    }
    for(int k = 0; k <= 20; k+=4){
        vytvorEntitu(objektyVMape,5+k, 12, "^");
        vytvorEntitu(objektyVMape,5+1+k, 12, "^");
    }
    for(int k = 0; k <= 16; k+=4){
        vytvorEntitu(objektyVMape,5+k, 14, "^");
        vytvorEntitu(objektyVMape,5+1+k, 14, "^");
    }
    for(int k = 0; k <= 12; k+=4){
        vytvorEntitu(objektyVMape,5+k, 16, "^");
        vytvorEntitu(objektyVMape,5+1+k, 16, "^");
    }

    //postava = x
    vytvorEntitu(objektyVMape,39,16,"x");
}

void Mapa::pridatEntityDoMapy1(){
    vytvorEntitu(objektyVMape1,20, 11, "|");
    vytvorEntitu(objektyVMape1,20, 9, "|");

    for(int a = 0; a < 11; a++){
        vytvorEntitu(objektyVMape1,20+a, 8, "-");
        vytvorEntitu(objektyVMape1,20+a, 12, "-");
    }
    vytvorEntitu(objektyVMape1,30, 11, "|");
    vytvorEntitu(objektyVMape1,30, 9, "|");


    for(int k = 0; k < 7; k++){
        vytvorEntitu(objektyVMape1,16, 7+k, "|");
        vytvorEntitu(objektyVMape1,34, 7+k, "|");
    }


    for(int z = 0; z < 8; z++){
        vytvorEntitu(objektyVMape1,16+z, 6, "-");
        vytvorEntitu(objektyVMape1,16+z, 14, "-");
    }

    for(int z = 11; z < 19; z++){
        vytvorEntitu(objektyVMape1,16+z, 6, "-");
        vytvorEntitu(objektyVMape1,16+z, 14, "-");
    }
//
    for(int v = 0; v < 5; v++){
        vytvorEntitu(objektyVMape1,9, 12+v, "|");
        vytvorEntitu(objektyVMape1,9, 4+v, "|");
        vytvorEntitu(objektyVMape1,41, 12+v, "|");
        vytvorEntitu(objektyVMape1,41, 4+v, "|");
    }

    for(int c = 0; c < 31; c++){
        vytvorEntitu(objektyVMape1,10+c, 17, "-");
        vytvorEntitu(objektyVMape1,10+c, 3, "-");
    }

    vytvorEntitu(objektyVMape1,25, 10, "J");//jablko
}


void Mapa::nastaveniNepratel(char vstup0) {
    m_nastaveni = "h";
    if (vstup0 != '1') {
        for (int s = 0; s < this->objektyVMape.size(); ++s) {
            if (this->objektyVMape.at(s)->getSymbol() == "h") {
                if (vstup0 == '2'){
                    m_nastaveni = "z";
                    this->objektyVMape.at(s)->setSymbol("z");
                } else if (vstup0 == '3') {
                    m_nastaveni = "d";
                    this->objektyVMape.at(s)->setSymbol("d");
                }
            }
        }
    }
}

int Mapa::najdiX(){
    //hledání postavy
    int indexPostavy = 0;
    for (int i = 0; i < this->objektyVMape.size(); ++i) {
        if (this->objektyVMape.at(i)->getSymbol() == "x") {
            indexPostavy = i;
            break;
        }
    }
    return indexPostavy;
}

void Mapa::pohybPoMape(char smer, Postava* postava, NPC* NPC) {

    int staraX = this->objektyVMape.at(najdiX())->getX();
    int staraY = this->objektyVMape.at(najdiX())->getY();
    int novaX = staraX;
    int novaY = staraY;

    //vypocitani nove souradnice
    switch (smer) {
        case 'w':
            novaY -= 1;
            break;
        case 'a':
            novaX -= 1;
            break;
        case 's':
            novaY += 1;
            break;
        case 'd':
            novaX += 1;
            break;
        default:
            return;
    }

    bool volaniFunkce = true;
    if (novaX > 0 && novaX < 50 && novaY > 0 && novaY < 20 && overeniMapy == 0) {
        if (this->XY.at(novaY).at(novaX) == ""){ //zda je souradnice prazdna
            this->XY.at(staraY).at(staraX) = " ";
            this->objektyVMape.at(najdiX())->setX(novaX);
            this->objektyVMape.at(najdiX())->setY(novaY);

        } else if (this->XY.at(novaY).at(novaX) == "L" ){
            this->vymazEntitu(objektyVMape, novaX, novaY);
            this->objektyVMape.at(najdiX())->setX(novaX);
            this->objektyVMape.at(najdiX())->setY(novaY);
            this->XY.at(staraY).at(staraX) = " ";
            Predmet* predmet = predmet->getPredmet("lektvar");
            postava->addPredmetInventar(predmet);

        } else if (this->XY.at(novaY).at(novaX) == "M" ){
            this->vymazEntitu(objektyVMape, novaX, novaY);
            this->objektyVMape.at(najdiX())->setX(novaX);
            this->objektyVMape.at(najdiX())->setY(novaY);
            this->XY.at(staraY).at(staraX) = " ";
            Predmet* predmet = predmet->getPredmet("mec");
            postava->addPredmetInventar(predmet);

        } else if (this->XY.at(novaY).at(novaX) == "N" ){
            if(ukol0 != nullptr){
                if(ukol0->overeniUkolu(postava, pom)){
                    ukol0 = nullptr;
                    pom++;
                }
            }
            if(ukol0 == nullptr && volaniFunkce) {
                ukol0 = Ukol::getUkol();
                zadanUkol = ukol0->zadaniUkolu(postava);
                ukol0->vypisUkolu(postava);
                volaniFunkce = false;
            }
        } else if ((this->XY.at(novaY).at(novaX) == "h")||(this->XY.at(novaY).at(novaX) == "d")||(this->XY.at(novaY).at(novaX) == "z") ){
            if(postava->getPocetMasoNepritel()<pom && zadanUkol == 1){
                this->vymazEntitu(objektyVMape, novaX, novaY);
                this->objektyVMape.at(najdiX())->setX(novaX);
                this->objektyVMape.at(najdiX())->setY(novaY);
                this->XY.at(staraY).at(staraX) = " ";

                Nepritel* nepritel = nepritel->getNepritel(m_nastaveni);
                vektorNepratel.push_back(nepritel);
                postava->addSouboj(nepritel);

                if(postava->getZdravi() == 0){//prohra
                    if(nepritel->getZdraviNepritel() == 0){
                        this->objektyVMape.at(najdiX())->setSymbol(" ");
                    }else{
                        this->objektyVMape.at(najdiX())->setSymbol(m_nastaveni);
                    }

                    postava->vymazInventar();
                    postava->vyhodOdmenu();
                    //vymazani nepratel, objektu
                    for (Nepritel* nepritel : vektorNepratel) {
                        delete nepritel;
                    }
                    vektorNepratel.clear();
                }else{
                    NPC->vypisOdmena();
                }
                zadanUkol = 0;
            }else{
                NPC->vypisZadani();
            }
        }
    }

    if(ukol0 != nullptr && volaniFunkce) {
        ukol0->vypisUkolu(postava);
    }

    //druha mapa
    if(novaX == 50 && overeniMapy != 1) {
        vymazEntitu(objektyVMape, staraX, staraY);
        vytvorEntitu(objektyVMape1, novaX-50, staraY, "x");
        overeniMapy = 1;
    }

    if(overeniMapy == 1) {

        int staraX1 = this->objektyVMape1.at(najdiX1())->getX();
        int staraY1 = this->objektyVMape1.at(najdiX1())->getY();
        int novaX1 = staraX1;
        int novaY1 = staraY1;

        //vypocitani nove souradnice
        switch (smer) {
            case 'w':
                novaY1 -= 1;
                break;
            case 'a':
                novaX1 -= 1;
                break;
            case 's':
                novaY1 += 1;
                break;
            case 'd':
                novaX1 += 1;
                break;
            default:
                return;
        }

        // zkontroluje, zda nová pozice není mimo mapu
        if (novaX1 > 0 && novaX1 < 50 && novaY1 > 0 && novaY1 < 20) {
            if (this->XY.at(novaY1).at(novaX1) == "") {
                this->XY.at(staraY1).at(staraX1) = " ";
                this->objektyVMape1.at(najdiX1())->setX(novaX1);
                this->objektyVMape1.at(najdiX1())->setY(novaY1);
            } else if (this->XY.at(novaY1).at(novaX1) == "J" ){
                if(zadanUkol == 2) {
                    this->vymazEntitu(objektyVMape1, novaX1, novaY1);
                    this->objektyVMape.at(najdiX1())->setX(novaX1);
                    this->objektyVMape.at(najdiX1())->setY(novaY1);
                    this->XY.at(staraY1).at(staraX1) = " ";
                    Predmet* predmet = predmet->getPredmet("kouzelneJablko");
                    postava->addPredmetInventar(predmet);
                    NPC->vypisOdmena();
                    zadanUkol = 0;
                }else{
                    NPC->vypisZadani();
                }
            }
        }
        if(novaX1 == 0){
            vymazEntitu(objektyVMape1, staraX1, staraY1);

            vytvorEntitu(objektyVMape, novaX1+49, staraY1, "x");
            overeniMapy = 0;
        }
    }

    if (overeniMapy == 1) {
        update1();
    } else {
        update();
    }
}

int Mapa::najdiX1(){
    int indexPostavy = 0;
    for (int i = 0; i < this->objektyVMape1.size(); ++i) {
        if (this->objektyVMape1.at(i)->getSymbol() == "x") {
            indexPostavy = i;
            break;
        }
    }
    return indexPostavy;
}

void Mapa::update(){
    vyprazdnitMapu();
    udelatOkraje();
    setUpMapa();
    printMapa();
}

void Mapa::update1(){
    vyprazdnitMapu();
    udelatOkraje();
    setUpMapa1();
    printMapa();
}