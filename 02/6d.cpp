#include <algorithm>
#include <ctime>
#include <iostream>
#include <random>

void manualInput(uint &p, uint &q) {
    std::cout << "Podaj rzut: ";
    while (std::cin >> p && (p < 0 || p > 6)) {
        std::cout << "Podaj liczbe z przedzialu 1..6: ";
    }
    std::cout << "Podaj kolejny rzut: ";
    while (std::cin >> q && (q < 0 || q > 6)) {
        std::cout << "Podaj liczbe z przedzialu 1..6: ";
    }
}

void randomInput(uint &p, uint &q) {
    uint seed = static_cast<uint>(time(NULL));
    srand(seed);

    p = rand() % 6 + 1;  // 1..6
    q = rand() % 6 + 1;  // 1..6
}

int main() {
    uint p, q;

    while (true) {
        // Użytkownik wpisuje dwie wartości rzutów z zakersu 1..6
        manualInput(p, q);
        // Losowe wartości rzutów z zakresu 1..6
        // randomInput(p, q);

        int result;
        if (p % 2 == 0) {
            if (q == 2 || q == 4 || q == 5) {
                result = p + 3 * q;
            } else {
                result = 2 * q;
            }
        } else {
            if (q == 1 || q == 3 || q == 6) {
                if (p == q) {
                    result = 5 * p + 3;
                } else {
                    result = 2 * q + p;
                }
            } else {
                result = std::min(p, q) + 4;
            }
        }
        int bonus = (p == 5 && q == 5) ? 5 : 0;
        result += bonus;

        std::cout << "Wygrywasz " << result << "\n\n";
    }
}
