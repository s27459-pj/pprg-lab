#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;

    std::cout << ((a > b) ? a : b) << '\n';
}
