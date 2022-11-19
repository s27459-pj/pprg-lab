#include <iostream>

float cuboidDimensions(float length, float width, float height, float &volume) {
    if (length < 0 || width < 0 || height < 0) return -1;

    volume = length * width * height;
    return (length * width * 2) + (length * height * 2) + (width * height * 2);
}

int main() {
    float length, width, height;
    std::cout << "Podaj dlugosc: ";
    std::cin >> length;
    std::cout << "Podaj szerokosc: ";
    std::cin >> width;
    std::cout << "Podaj wysokosc: ";
    std::cin >> height;

    float area, volume;
    area = cuboidDimensions(length, width, height, volume);

    if (area == -1) {
        std::cout << "Podano ujemna wartosc!\n";
        return -1;
    }

    std::cout << "Pole powierzchni: " << area << '\n';
    std::cout << "Objetosc: " << volume << '\n';
}
