#include <iostream>

#define MAX_SIZE 100

int main() {
    char chars[MAX_SIZE] = { 0 };
    uint count = 0;
    uint big_letters = 0;

    while (true) {
        char input;
        std::cout << "Podaj znak: ";
        std::cin >> input;

        if (input == 'k') {
            std::cout << "Na razie :)\n";
            break;
        }
        if (input > 47 && input < 58) {
            std::cout << "Jest to cyfra\n";
        }
        if (input > 96 && input < 123) {
            std::cout << "Jest to mała litera\n";
        }
        if (input > 64 && input < 91) {
            std::cout << "Jest to duża litera\n";
            big_letters++;
        }
        count++;
    }

    std::cout << "Liczba podanych znaków: " << count << '\n';
    std::cout << "Liczba wielkich liter: " << big_letters << '\n';
}
