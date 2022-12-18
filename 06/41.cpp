#include <algorithm>
#include <iostream>
#include <string>

bool isPalindrome(const std::string text) {
    auto reversed = text;
    std::reverse(reversed.begin(), reversed.end());
    return text == reversed;
}

int main() {
    std::string text;
    std::cout << "Podaj jakis napis: ";
    std::cin >> text;

    if (isPalindrome(text)) {
        std::cout << "Podany napis jest palindromem\n";
    } else {
        std::cout << "Podany napis nie jest palindromem\n";
    }
}
