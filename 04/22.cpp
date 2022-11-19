#include <iostream>

int perimeter(const int a) {
    // Perimeter of a square
    // a * 4

    return a * 4;
}

int perimeter(const int a, const int b) {
    // Perimeter of a rectangle
    // a * 2 + b * 2

    return a * 2 + b * 2;
}

int perimeter(const int a, const int b, const int c) {
    // Perimeter of a triangle
    // a + b + c

    return a + b + c;
}

int perimeter(const int a, const int b, const int c, const int d) {
    // Perimeter of a trapezoid
    // a + b + c + d

    return a + b + c + d;
}

int main() {
    int a = 0, b = 0, c = 0, d = 0;

    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    std::cout << "Podaj c: ";
    std::cin >> c;
    std::cout << "Podaj d: ";
    std::cin >> d;

    if (a != 0 && b != 0 && c != 0 && d != 0) {
        std::cout << "Obwod: " << perimeter(a, b, c, d) << '\n';
    } else if (a != 0 && b != 0 && c != 0) {
        std::cout << "Obwod: " << perimeter(a, b, c) << '\n';
    } else if (a != 0 && b != 0) {
        std::cout << "Obwod: " << perimeter(a, b) << '\n';
    } else if (a != 0) {
        std::cout << "Obwod: " << perimeter(a) << '\n';
    }
}
