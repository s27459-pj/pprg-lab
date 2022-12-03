#include <iostream>

enum dni {
    poniedzialek,
    wtorek,
    sroda,
    czwartek,
    piatek,
    sobota,
    niedziela,
};

int zostalo(dni dzien) { return 6 - dzien; }

int main() {
    int n;
    std::cout << "Podaj numer dnia tygodnia: ";
    std::cin >> n;

    int zostalo_dni = zostalo((dni)n);
    std::cout << "Do weekendu zostało " << zostalo_dni << " dni\n";
}
