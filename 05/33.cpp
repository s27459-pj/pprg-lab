#include <iostream>

int main() {
    // Tablica z elementami, które są ciągami znaków (char*)
    char *przystanek[] = {
        "Gdansk", "Wrzeszcz", "Oliwa", "Sopot", "Orlowo", "Gdynia",
    };

    // Taka sama tablica, która może trzymać max 3 elementy
    char *wsk[3];
    for (int i = 0; i < 6; i++) {
        std::cout << "Przystanek przed zmiana: " << przystanek[i] << '\n';
    }

    // Jako pierwszy element `wsk` zapisz trzeci element `przystanek`
    wsk[0] = przystanek[2];
    // Jako drugi element `wsk` zapisz szósty element `przystanek`
    wsk[1] = przystanek[5];
    // Jako trzeci element `wsk` zapisz "TEKST"
    wsk[2] = "TEKST";

    for (int i = 0; i < 6; i++) {
        std::cout << "Przystanek po zmianie: " << przystanek[i] << '\n';
    }

    std::cout << "Elementy tablicy wsk: " << wsk[0] << ", " << wsk[1] << ", " << wsk[2]
              << '\n';
}
