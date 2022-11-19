#include <chrono>
#include <iostream>
#include <vector>

template <typename T>
void swap(T &a, T &b) {
    auto temp = a;
    a = b;
    b = temp;
}

void bubbleSort(std::vector<int> &items) {
    for (uint i = 0; i < items.size(); i++) {
        for (uint j = 0; j < items.size() - i - 1; j++) {
            if (items[j] > items[j + 1]) {
                swap(items[j], items[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> numbers;  // = { 1, 5, 2, 7, 9, 4, 3 };
    for (uint i = 300; i > 0; i--) numbers.push_back(i);

    std::cout << "Unsorted numbers:\n";
    for (auto i : numbers) {
        std::cout << i << ", ";
    }
    std::cout << '\n';

    auto start = std::chrono::steady_clock::now();
    bubbleSort(numbers);
    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Took " << duration.count() << " μs\n";

    std::cout << "Sorted numbers:\n";
    for (auto i : numbers) {
        std::cout << i << ", ";
    }
    std::cout << '\n';
}
