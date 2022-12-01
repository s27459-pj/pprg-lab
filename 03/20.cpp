#include <algorithm>
#include <chrono>
#include <ctime>
#include <iostream>
#include <random>

int randomNumber(const int a, const int b) { return rand() % b + a; }

void quick_sort(int items[], int n) {
    if (n < 2) return;

    int pivot = items[n / 2];
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        while (items[i] < pivot) i++;
        while (items[j] > pivot) j--;

        if (i <= j) {
            std::swap(items[i], items[j]);
            i++;
            j--;
        }
    }

    quick_sort(items, j + 1);
    quick_sort(items + i, n - i);
}

int main() {
    srand(time(NULL));

    const uint SIZE = 8;
    int items[SIZE] = { 3, 5, 1, 2, 7, 6, 9, 4 };
    for (uint i = 0; i < SIZE; i++) std::cout << items[i] << ", ";
    std::cout << '\n';

    auto start = std::chrono::high_resolution_clock::now();
    quick_sort(items, SIZE);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::nano> elapsed = end - start;
    std::cout << "Took " << elapsed.count() << "ns\n";

    for (uint i = 0; i < SIZE; i++) std::cout << items[i] << ", ";
    std::cout << '\n';
}
