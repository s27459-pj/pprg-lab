#include <iostream>

int main() {
    int a = 2;
    int b = 3;

    std::cout << "Przed\n";
    std::cout << "a=" << a << '\n';
    std::cout << "b=" << b << '\n';

    if (a == 5) {
        b = 5;
    }

    if (b == 3) {
        a = 3;
    }

    std::cout << "\nPo\n";
    std::cout << "a=" << a << '\n';
    std::cout << "b=" << b << '\n';
}
