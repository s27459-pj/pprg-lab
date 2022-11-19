#include <iostream>

using std::cout, std::cin;

void menu(float &a, float &b, int &operacja) {
    cout << " kalkulator\n"
         << "-------------------------------\n\n";
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout << "Podaj drugą liczbę: ";
    cin >> b;
    cout << '\n';

    cout << "Wybierz operację:\n"
         << "1. Dodawanie\n"
         << "2. Odejmowanie\n"
         << "3. Mnożenie\n"
         << "4. Dzielenie\n"
         << "0. Koniec\n\n"
         << "> ";
    cin >> operacja;
}

float add(const float a, const float b) { return a + b; }
float sub(const float a, const float b) { return a - b; }
float mul(const float a, const float b) { return a * b; }
float div(const float a, const float b) { return a / b; }

int main() {
    setlocale(LC_ALL, "");

    float a, b;
    int operacja = 1;

    menu(a, b, operacja);

    switch (operacja) {
        case 1:  // dodawanie
            cout << a << " + " << b << " = " << add(a, b);
            break;
        case 2:  // odejmowanie
            cout << a << " - " << b << " = " << sub(a, b);
            break;
        case 3:  // mnożenie
            cout << a << " * " << b << " = " << mul(a, b);
            break;
        case 4:  // dzielenie
            if (b == 0) cout << "podaj inną drugą liczbę - różną od zera";
            break;
            cout << a << " / " << b << " = " << div(a, b);
            break;
        case 0:  // wyjście
            cout << "Dziękuję";
            break;
        default:
            cout << "nie ma takiej operacji";
    }
    cout << '\n';
}
