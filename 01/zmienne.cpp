#include <iostream>

int main() {
    int calkowita = 123;
    std::cout << "int\n"
              << "wartosc: " << calkowita << '\n'
              << "rozmiar: " << sizeof(calkowita) << '\n'
              << "adres: " << &calkowita << "\n\n";

    float rzeczywista = 1.23;
    std::cout << "float\n"
              << "wartosc: " << rzeczywista << '\n'
              << "rozmiar: " << sizeof(rzeczywista) << '\n'
              << "adres: " << &rzeczywista << "\n\n";

    double dlugaRzeczywista = 1.2354123;
    std::cout << "double\n"
              << "wartosc: " << dlugaRzeczywista << '\n'
              << "rozmiar: " << sizeof(dlugaRzeczywista) << '\n'
              << "adres: " << &dlugaRzeczywista << "\n\n";

    char znak = 'a';
    std::cout << "char\n"
              << "wartosc: " << znak << '\n'
              << "rozmiar: " << sizeof(znak) << '\n'
              << "adres: " << (void*)&znak << "\n\n";

    std::string slowo = "slowo";
    std::cout << "string\n"
              << "wartosc: " << slowo << '\n'
              << "rozmiar: " << sizeof(slowo) << '\n'
              << "adres: " << &slowo << "\n\n";
}
