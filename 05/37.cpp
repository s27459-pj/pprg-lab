#include <ctime>
#include <iostream>

#include "../util.cpp"

void dane(int *wsk_n, int *wsk_tab) {
    for (int i = 0; i < *wsk_n; i++) {
        *wsk_tab = randomNumber(1, 9);
        wsk_tab++;
    }
}

void wyswietl(int *wsk_n, int *wsk_tab) {
    for (int i = 0; i < *wsk_n; i++) {
        std::cout << *wsk_tab << " ";
        wsk_tab++;
    }
    std::cout << '\n';
}

int skalarny(int *wsk_n, int *wsk_X, int *wsk_Y) {
    int sum = 0;
    for (int i = 0; i < *wsk_n; i++) {
        sum += *wsk_X * *wsk_Y;
        wsk_X++;
        wsk_Y++;
    }
    return sum;
}

int main() {
    int X[10];
    int Y[10];
    int n = 10;

    srand(time(NULL));
    dane(&n, X);
    dane(&n, Y);

    std::cout << "Dane X:\n";
    wyswietl(&n, X);
    std::cout << "Dane Y:\n";
    wyswietl(&n, Y);

    std::cout << "Iloczyn skalarny: " << skalarny(&n, X, Y) << '\n';
}
