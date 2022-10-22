#include <iostream>

int main() {
    std::cout << "   KALKULATOR   \n"
              << "________________\n\n";

    double a, b;
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> b;

    std::cout << "\nWybierz dzialanie:\n"
              << "\t1. Dodawanie\n"
              << "\t2. Odejmowanie\n"
              << "\t3. Mnozenie\n"
              << "\t4. Dzielenie\n"
              << "\t5. Reszta z dzielenia\n"
              << "\t0. Wyjscie\n";
    int action;
    std::cout << "Twoj wybor: ";
    std::cin >> action;

    switch (action) {
        case 1:
            std::cout << a << '+' << b << '=' << a + b << '\n';
            break;
        case 2:
            std::cout << a << '-' << b << '=' << a - b << '\n';
            break;
        case 3:
            std::cout << a << '*' << b << '=' << a * b << '\n';
            break;
        case 4:
            std::cout << a << '/' << b << '=' << a / b << '\n';
            break;
        case 5:
            std::cout << a << '%' << b << '=' << (int)a % (int)b << '\n';
            break;
        case 0:
            return 0;
        default:
            std::cout << "Podano złą opcję\n";
            return -1;
    }
}
