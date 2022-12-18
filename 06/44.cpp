#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Podaj jakis napis: ";
    std::getline(std::cin, text);

    // Długość to tyle ile mamy znaków w alfabecie
    // Wspieramy tylko małe znaki
    const int alphabet_len = 'z' - 'a';
    int occurrences[alphabet_len] = { 0 };

    for (auto c : text) {
        occurrences[(int)(c - 'a')]++;
    }

    for (int i = 0; i < alphabet_len; i++) {
        if (occurrences[i] == 0) continue;

        std::cout << (char)(i + 'a') << " - " << occurrences[i] << '\n';
    }
}
