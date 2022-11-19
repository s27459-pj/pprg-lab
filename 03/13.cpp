#include <algorithm>
#include <ctime>
#include <iostream>
#include <map>
#include <random>
#include <tuple>
#include <vector>

int randomNumber(const int a, const int b) { return rand() % b + a; }

void printNumbers(const std::vector<int> &numbers, const std::string &message) {
    std::cout << message << '\n';
    for (auto number : numbers) {
        std::cout << number << ", ";
    }
    std::cout << '\n';
}

float average(const std::vector<int> &numbers) {
    int sum = 0;
    for (auto number : numbers) {
        sum += number;
    }
    return (float)sum / numbers.size();
}

template <typename T>
uint numberOfItem(const std::vector<T> &items, const T search) {
    uint count = 0;
    for (auto item : items) {
        if (item == search) count++;
    }
    return count;
}

std::vector<int> findOddNumbers(const std::vector<int> &numbers) {
    std::vector<int> odd_numbers;
    auto predicate = [](const int num) { return num % 2 != 0; };

    std::copy_if(
        numbers.begin(), numbers.end(), std::back_inserter(odd_numbers), predicate
    );

    return odd_numbers;
}

std::tuple<int, int> biggestNeigborPair(const std::vector<int> &numbers) {
    int biggest_sum = 0;
    auto biggest_pair = std::make_tuple(0, 0);

    for (uint i = 0; i < numbers.size() - 1; i++) {
        int a = numbers.at(i), b = numbers.at(i + 1);
        int pair_sum = a + b;
        if (pair_sum > biggest_sum) {
            biggest_sum = pair_sum;
            biggest_pair = std::make_tuple(a, b);
        }
    }

    return biggest_pair;
}

std::map<int, int> countNumbers(const std::vector<int> numbers) {
    std::map<int, int> counts;
    for (auto number : numbers) counts[number]++;

    return counts;
}

int main() {
    int a, b, n;
    std::cout << "Podaj początek przedziału: ";
    std::cin >> a;
    std::cout << "Podaj koniec przedziału: ";
    std::cin >> b;
    std::cout << "Jak duża ma być tablica liczb? (max. 100) ";
    while (std::cin >> n && (n > 100 || n < 1)) {
        std::cout << "Proszę podać liczbę z przedziału [1..100]: ";
    }

    std::vector<int> numbers;
    numbers.reserve(n);

    srand(time(NULL));
    for (uint i = 0; i < n; i++) {
        numbers.push_back(randomNumber(a, b));
    }

    printNumbers(numbers, "Wylosowane liczby:");

    // 1. średnia arytmetyczna elementów tablicy
    std::cout << "Średnia arytmetyczna liczb: " << average(numbers) << '\n';

    // 2. liczba wystąpień elementu podanego przez użytkownika
    int search_number;
    std::cout << "Sprawdź liczbę wystąpień wybranej liczby: ";
    std::cin >> search_number;
    std::cout << "Liczba wystąpień " << search_number << ": "
              << numberOfItem(numbers, search_number) << '\n';

    // 3. liczba elementów nieparzystych oraz ich suma
    auto odd_numbers = findOddNumbers(numbers);
    int odd_number_sum = std::accumulate(odd_numbers.begin(), odd_numbers.end(), 0);
    std::cout << "Ilość liczb nieparzystych: " << odd_numbers.size()
              << ", suma: " << odd_number_sum << '\n';

    // 4. element minimalny oraz jego indeks
    auto min = std::min_element(numbers.begin(), numbers.end());
    auto min_index = std::distance(numbers.begin(), min);
    std::cout << "Element minimalny: " << *min << " (na pozycji " << min_index << ")\n";

    // 5. element maksymalny oraz jego indeks
    auto max = std::max_element(numbers.begin(), numbers.end());
    auto max_index = std::distance(numbers.begin(), max);
    std::cout << "Element maksymalny: " << *max << " (na pozycji " << max_index
              << ")\n";

    // 6. para sąsiednich elementów o największej sumie
    {
        auto biggest_pair = biggestNeigborPair(numbers);
        int a = std::get<0>(biggest_pair), b = std::get<1>(biggest_pair);
        std::cout << "Para sąsiednich liczb o największej sumie (" << a + b
                  << "): " << a << ", " << b << '\n';
    }

    // 7. element najczęściej występujący w tablicy
    auto counts = countNumbers(numbers);
    auto most_occuring_number = std::max_element(
        counts.begin(),
        counts.end(),
        [](const auto &a, const auto &b) { return a.second < b.second; }
    );
    auto [num, occurrences] = *most_occuring_number;
    std::cout << "Liczba " << num << " powtarza się najwięcej (" << occurrences
              << " raz(y))\n";

    // 8. przestawienie kolejności elementów w tablicy
    // (np. pierwszy – ostatni, ostatni – pierwszy itp...)
    std::reverse(numbers.begin(), numbers.end());
    printNumbers(numbers, "Liczby po odwróceniu kolejności:");

    // 9. kopiowanie tablicy
    std::vector<int> numbers_copy(numbers);
}
