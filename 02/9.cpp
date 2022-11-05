#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;

    int c = a + b;
    int d = c % 2;

    if (d == 0) {
        std::cout << "Suma a+b jest parzysta\n";
    } else {
        std::cout << "Suma a+b jest nieparzysta\n";
    }
}
