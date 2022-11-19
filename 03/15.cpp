#include <algorithm>
#include <iostream>

int main() {
    std::string word;
    std::cout << "Podaj słowo: ";
    std::cin >> word;

    std::string reversed = word;
    std::reverse(reversed.begin(), reversed.end());
    if (word == reversed) {
        std::cout << "Podane słowo jest palindromem\n";
    }
}
