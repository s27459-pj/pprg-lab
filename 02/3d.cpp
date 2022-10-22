#include <iostream>

int main() {
    std::string text;
    std::cout << "Choose some text: ";
    while (getline(std::cin, text) && text.empty()) {
        std::cout << "Please enter a non-empty string: ";
    }

    const std::string top_border = std::string(text.length() + 2, '*');
    std::cout << top_border << "\n*" << text << "*\n" << top_border << '\n';
}
