#include <iostream>

#include "../util.cpp"

int average(const int items[], const int start, const int end) {
    int sum = 0;

    for (int i = start; i < end; i++) {
        // Znajduj wartości za pomocą wskaźników
        sum += *items;
        items++;
    }

    // Oblicz średnią
    return sum / (end - start);
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    std::cout << "Średnia: " << average(numbers, 3, 7) << '\n';
}
