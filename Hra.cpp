
#include "Hra.h"

void Hra::zacatekHry(){
    std::cout << "Ahoj! Pro spusteni hry zadej pismeno 'z':" << std::endl;
    std::cin >> vstup;
    if(vstup == 'z'){
        zapniHru();
    } else{
        std::cout << "Nezadal jsi pro zacatek hry pismeno 'z':" << std::endl;
        zacatekHry();
    }
}

void Hra::zapniHru(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Vitej! Ocitl ses uprostred apokalypsy. Tvym ukolem bude prezit a zaroven splnit ctyri ukoly od NPC (symbol 'N'). V boji proti nepratelum ti mohou pomoci predmety, ktere ti pridaji silu nebo zdravi. Nejvzacnejsi z nich je kouzelne jablko. Po mape se pohybuje tvoje postava 'x' pomoci zadavanim vstupu 'w', 'a', 's' nebo 'd'. Po zadavani jinych vstupu se nic nestane. Prejeme ti hodne stesti!"<< std::endl;
    std::cout << "<UPOZORNENI!> Pokud hru nebudes moct dohrat, zadej behem hry: '0'." << std::endl;
    std::cout << std::endl;
    std::cout << "Jeste nez zacneme, zvol si obtiznost hry. Uroven zvolis zadanim cisla '1', '2' nebo '3' (uroven 1 je nejlehci): " << std::endl;
    std::cout << "<UPOZORNENI!> Pokud nezadas dovolene znaky, hra se nespusti." << std::endl;
    std::cin >> vstup;
    std::cout << std::endl;

    postava = new Postava(100, 50);
    prvniMapa = new Mapa();
    npc = new NPC();
    prvniMapa->pridatEntityDoMapy();
    prvniMapa->pridatEntityDoMapy1();
    if (vstup == '1' || vstup == '2' || vstup == '3'){
        prvniMapa->nastaveniNepratel(vstup);
    } else{
        zacatekHry();
    }

    prvniMapa->update();
    postava->vypisVlastnosti();
    while(hraBezi){
        hra();
    }
}

void Hra::hra(){
    std::cin >> vstup;
    std::cout << std::endl;
    if(vstup == 'w' || vstup == 'a' || vstup == 's' || vstup == 'd'){
        prvniMapa->pohybPoMape(vstup, postava, npc);
        postava->vypisInventar();
        postava->vypisVlastnosti();
    } else if(vstup == '0'){
        hraBezi = false;
        konecHry();
    }
    if(postava->getSkore() == 4 || postava->getZdravi() == 0){
        hraBezi = false;
        konecHry();
    }
}

void Hra::konecHry() {
    std::cout << std::endl;
    std::cout << std::endl;
    vymaz();
    if(postava->getSkore() == 4){
        std::cout << "Gratulujeme! Vyhral jsi, pokud chces hrat znovu zadej: 'y'" << std::endl;
        znovuHra();
    } else if(postava->getZdravi() == 0){
        std::cout << "Bohuzel jsi prohral :(, pokud chces hrat znovu zadej: 'y'" << std::endl;
        znovuHra();
    }
}

void Hra::znovuHra(){
    std::cin >> vstup;
    if (vstup == 'y') {
        hraBezi = true;
        zacatekHry();
    }else{
        return;
    }
}

void Hra::vymaz(){
    delete postava;
    delete prvniMapa;
    delete npc;
}