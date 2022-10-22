#include <iostream>

void printIfDivisible(int number, int divisor) {
    if (number % divisor == 0) {
        std::cout << "Liczba " << number << " jest podzielna przez " << divisor << '\n';
    }
}

void divisibleFor(int number) {
    for (uint i = 1; i <= number; i++) {
        printIfDivisible(number, i);
    }
}

void divisibleWhile(int number) {
    uint i = 1;

    while (i <= number) {
        printIfDivisible(number, i);
        i++;
    }
}

void divisibleDoWhile(int number) {
    uint i = 1;

    do {
        printIfDivisible(number, i);

        i++;
    } while (i <= number);
}

int main() {
    int n;

    // Implementacja sprawdzania na trzy sposoby
    divisibleFor(n);
    // divisibleWhile(n);
    // divisibleDoWhile(n);
}
