#include <iostream>

int main() {
    int a, b;
    std::cout << "Podaj liczbe a: ";
    std::cin >> a;
    std::cout << "Podaj liczbe b: ";
    std::cin >> b;

    if (a > 0 && b > 0) {
        int a1 = a;
        int b1 = b;

        while (true) {
            if (a1 != b1) {
                if (a1 > b1) {
                    b1 += b;
                } else {
                    a1 += a;
                }
            } else {
                std::cout << "nww: " << a1 << '\n';
                break;
            }
        }

    } else {
        std::cout << "nww: " << 1 << '\n';
    }
}
