#include <iostream>

int* reverseArray(int items[], const int n) {
    for (int i = 0; i < n / 2; i++) {
        const int temp = items[i];
        const int right_index = n - 1 - i;
        items[i] = items[right_index];
        items[right_index] = temp;
    }

    return items;
}

void printArray(int items[], const int n) {
    for (int i = 0; i < n; i++) {
        std::cout << items[i] << ", ";
    }
    std::cout << '\n';
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7 };

    std::cout << "Original array:\n";
    printArray(numbers, 7);

    std::cout << "Double reverse:\n";
    reverseArray(reverseArray(numbers, 3), 3);
    printArray(numbers, 7);

    std::cout << "Reversed 3 items:\n";
    reverseArray(numbers, 3);
    printArray(numbers, 7);
    // Return to original
    reverseArray(numbers, 3);

    std::cout << "Reverse 3, then 5 items:\n";
    reverseArray(reverseArray(numbers, 3), 5);
    printArray(numbers, 7);
}
