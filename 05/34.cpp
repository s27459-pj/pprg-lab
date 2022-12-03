#include <ctime>
#include <iostream>

#include "../util.cpp"

int main() {
    int tab[10];
    int n;
    int *wtab = tab;  // wskaznik na poczatek tablicy tab
    int *wn = &n;     // wskaznik na zmienna n

    std::cout << "Podaj rozmiar tablicy: ";
    while (std::cin >> *wn && (*wn < 1 || *wn > 10)) {
        std::cout << "Podaj liczbę z przedziału 1..10: ";
    }

    srand(time(NULL));
    for (int i = 0; i < *wn; i++) {
        *wtab = randomNumber(0, 10);
        wtab++;  // przesuniecie wskaznika na następny elemeny tablicy
    }
    wtab = tab;  // powrot wskaznika na poczatektablicy
    for (int i = 0; i < *wn; i++) {
        std::cout << *(wtab + i) << " ";  // tutaj wskaznikanie przesuwamy
    }
    std::cout << '\n';

    int *min = &tab[0];
    for (int i = 0; i < *wn; i++) {
        if (*min > *wtab) {
            min = wtab;
        }
        wtab++;
    }
    wtab = tab;  // Reset wskaźnika na początek tablicy
    std::cout << "Minimalny element tablicy to " << *min << '\n';
}
