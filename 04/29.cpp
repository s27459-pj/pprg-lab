#include <chrono>
#include <ctime>
#include <iostream>
#include <random>

int randomNumber(const int a, const int b) { return rand() % b + a; }

int main() {
    int input;
    int chosen_number = randomNumber(1, 100);
    const int max_moves = 10;
    int moves = 0;

    auto start = std::chrono::high_resolution_clock::now();
    srand(time(NULL));
    while (true) {
        std::cout << "Podaj liczbe: ";
        std::cin >> input;
        moves++;

        if (input == chosen_number) {
            std::cout << "Gratulacje, wygrywasz!\n";
            std::cout << "Wykorzystano " << moves << " ruch(ów)\n";
            break;
        } else if (input < chosen_number) {
            std::cout << "Za mało\n";
        } else if (input > chosen_number) {
            std::cout << "Za dużo\n";
        }

        if (moves >= max_moves) {
            std::cout << "Niestety skończyły Ci się ruchy :^(\n";
            break;
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start);
    std::cout << "Gra zajęła " << duration.count() << " sekund\n";
}
