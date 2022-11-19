#include <iostream>

int max2(const int a, const int b) {
    if (a > b)
        return a;
    else
        return b;
}

int max3(const int a, const int b, const int c) { return max2(max2(a, b), max2(b, c)); }

int main() {
    int a, b, c;
    std::cout << "Podaj liczbe a: ";
    std::cin >> a;
    std::cout << "Podaj liczbe b: ";
    std::cin >> b;
    std::cout << "Podaj liczbe c: ";
    std::cin >> c;

    std::cout << "max3(a, b, c) = " << max3(a, b, c) << '\n';
}
