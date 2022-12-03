#include <ctime>
#include <iostream>

#include "../util.cpp"

enum transport { SAMOCHOD, TRAMWAJ, AUTOBUS, ROWER, NOGI };

int main() {
    srand(time(NULL));

    transport sposob = (transport)randomNumber(0, 4);
    switch (sposob) {
        case SAMOCHOD:
            std::cout << "Pojade samochodem!\n";
            break;
        case TRAMWAJ:
        case AUTOBUS:
            std::cout << "Skorzystam dzis z transportu publicznego!\n";
            break;
        case ROWER:
            std::cout << "Pojade rowerem!\n";
            break;
        default:
            std::cout << "Pojde na piechote!\n";
            break;
    }
}
