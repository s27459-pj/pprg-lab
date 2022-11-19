#include <ctime>
#include <iostream>
#include <random>
#include <vector>

int randomNumber(const int a, const int b) { return rand() % b + a; }

void print2dVector(const std::vector<std::vector<int>> &items) {
    for (auto row : items) {
        for (auto item : row) {
            std::cout << item << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

int sum2dVector(const std::vector<std::vector<int>> &items) {
    int sum = 0;
    for (auto row : items) {
        for (auto item : row) sum += item;
    }
    return sum;
}

int main() {
    srand(time(NULL));
    const uint rows = 3;
    const uint cols = 3;
    std::vector<std::vector<int>> numbers(rows);

    for (uint i = 0; i < rows; i++) {
        numbers[i] = std::vector<int>(cols);
        for (uint j = 0; j < cols; j++) {
            numbers[i][j] = randomNumber(0, 9);
        }
    }

    print2dVector(numbers);
    std::cout << "Vector sum: " << sum2dVector(numbers) << '\n';
}
