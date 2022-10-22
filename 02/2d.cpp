#include <ctime>
#include <iostream>
#include <random>

int main() {
    uint seed = static_cast<uint>(time(NULL));
    srand(seed);

    // Losowa liczba z przedziału 1..100
    const uint number = rand() % 100 + 1;
    // Ile prób gracz będzie miał na zgadnięcie liczby
    const uint max_tries = 10;

    std::cout << "Hello. You have " << max_tries
              << " tries to guess a number from 1 to 100\n\n";

    uint tries = 0;
    int guess;

    while (tries < max_tries) {
        tries++;
        std::cout << "Guess the number (" << tries << '/' << max_tries << "): ";
        std::cin >> guess;

        if (guess == number) {
            std::cout << "\nYou win! It took you " << tries << " tries.\n";
            return 0;
        } else if (guess < number) {
            std::cout << "Too low.\n";
        } else if (guess > number) {
            std::cout << "Too high.\n";
        }

        if (tries >= max_tries) {
            std::cout << "\nYou ran out of guesses. The number was " << number << ".\n";
        }
    }

    return 0;
}
