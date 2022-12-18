#include <iostream>
#include <string>

bool isWhitespace(const char c) { return c == ' ' || c == '\t' || c == '\n'; }

int main() {
    std::string text;
    std::cout << "Podaj jakis napis: ";
    std::getline(std::cin, text);

    int words = 1;
    char last = ' ';
    for (auto c : text) {
        if (isWhitespace(last)) {
            last = c;
            continue;
        }
        if (isWhitespace(c)) {
            words++;
        }
        last = c;
    }

    std::cout << "Podane słowo ma " << words << " wyraz(ów)\n";
}
