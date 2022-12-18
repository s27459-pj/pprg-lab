#include <iostream>
#include <sstream>
#include <string>

bool isPalindrome(const std::string text) {
    for (int i = 0; i < text.length() / 2; i++) {
        if (text[i] != text[text.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string text;
    std::cout << "Podaj jakis napis: ";
    std::getline(std::cin, text);

    if (isPalindrome(text)) {
        std::cout << "Podany napis jest palindromem\n";
    } else {
        std::cout << "Podany napis nie jest palindromem\n";
    }
}
