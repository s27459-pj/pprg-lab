#include <ctime>
#include <iostream>

#include "../util.cpp"

void suma_El_Tab(int n, int *wsk) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *wsk;
        wsk++;
    }
    std::cout << "Suma elementow tablicy wynosi: " << suma << '\n';
}

int main() {
    int n = 10;
    int tab[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        tab[i] = randomNumber(0, 9);
    }

    suma_El_Tab(n, tab);
}
