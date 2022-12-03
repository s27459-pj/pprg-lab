#include <ctime>
#include <iostream>
#include <random>

#include "../util.cpp"

int przekatna(const int n, int tab[10][10]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += tab[i][i];
    }
    return sum;
}

void dane(const int n, int tab[10][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tab[i][j] = randomNumber(0, 9);
        }
    }
}

void wyswietl(const int n, int tab[10][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << tab[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int main() {
    int matrix[10][10];
    int n;
    std::cout << "Podaj wielkość macierzy: ";
    while (std::cin >> n && (n < 1 || n > 10)) {
        std::cout << "Podaj liczbę z przedziału 1..10: ";
    }

    srand(time(NULL));
    dane(n, matrix);
    std::cout << "Wylosowane dane:\n";
    wyswietl(n, matrix);

    int sum = przekatna(n, matrix);
    std::cout << "Suma liczb na przekątnej: " << sum << '\n';
}
