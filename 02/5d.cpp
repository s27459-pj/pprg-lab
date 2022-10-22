#include <iostream>
#include <unordered_map>

int main() {
    const std::unordered_map<char, uint> rates = {
        { 'A', 15 },
        { 'B', 25 },
        { 'C', 30 },
        { 'D', 35 },
    };

    char category;
    uint hours;

    while (true) {
        std::cout << "Podaj kategorie zaszeregowania: ";
        std::cin >> category;
        std::cout << "Podaj liczbe przepracowanych godzin: ";
        std::cin >> hours;

        uint bonus = 1;
        if (hours > 40) {
            bonus = 2;
        }

        auto rate = rates.find(category);
        uint gross_salary = hours * rate->second * bonus;

        uint vat;
        if (gross_salary <= 700)
            vat = 15;
        else if (gross_salary <= 1200)
            vat = 20;
        else
            vat = 25;

        float net_salary = gross_salary * (vat / 100.0 + 1);

        std::cout << "Zarobki brutto: " << gross_salary
                  << "\nZarobki netto: " << net_salary << '\n';
    }
}
