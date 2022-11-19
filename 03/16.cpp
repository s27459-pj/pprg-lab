#include <iostream>
#include <vector>

void sortArray(int array[], const uint len) {
    uint n = len;

    do {
        for (uint i = 0; i < n - 1; i++) {
            if (array[i] > array[i + 1]) {
                std::swap(array[i], array[i + 1]);
            }
        }
        n--;
    } while (n > 1);
}

int main() {
    int nums[] = { 1, 2, 3, 5, 4 };
    std::cout << "Nieposortowane:\n";
    for (uint i = 0; i < 5; i++) std::cout << nums[i] << ", ";
    std::cout << '\n';

    sortArray(nums, 5);
    std::cout << "Posortowane:\n";
    for (uint i = 0; i < 5; i++) std::cout << nums[i] << ", ";
    std::cout << '\n';
}
