#include <ctime>
#include <iostream>
#include <random>

int randomNumber(const int a, const int b) { return rand() % b + a; }

// 1. średnia arytmetyczna elementów tablicy
float average(const int numbers[], const int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    return (float)sum / n;
}

// 2. liczba wystąpień elementu podanego przez użytkownika
int numberOfItem(const int numbers[], const int n, const int search) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] == search) {
            count++;
        }
    }
    return count;
}

// 3. liczba elementów nieparzystych oraz ich suma
int countOddNumbers(const int numbers[], const int n, int &sum) {
    int count = 0;
    sum = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2) {
            count++;
            sum += numbers[i];
        }
    }
}

// 4. element minimalny oraz jego indeks
int minNumber(const int numbers[], const int n, int &index) {
    int min_number = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < min_number) {
            min_number = numbers[i];
            index = i;
        }
    }

    return min_number;
}

// 5. element maksymalny oraz jego indeks
int maxNumber(const int numbers[], const int n, int &index) {
    int max_number = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
            index = i;
        }
    }

    return max_number;
}

// 6. para sąsiednich elementów o największej sumie
int biggestPair(const int numbers[], const int n, int &a, int &b) {
    // Znajdź największą parę sąsiednich liczb w tablicy `numbers`
    // Zapisz parę w zmiennych a i b
    // Zwróć ich sumę, co nie jest bardzo potrzebne,
    // ale skoro już ją mamym to czemu nie  :^)

    int biggest_sum = 0;

    // n - 1 operacji, gdzie n jest długością `numbers`,
    // aby zawsze móc sprawdzać `n+1` element w tablicy
    for (int i = 0; i < n - 1; i++) {
        int sum = numbers[i] + numbers[i + 1];
        if (sum > biggest_sum) {
            // Para jest większa niż wszystkie do tej pory,
            // więc zapisujemy nowy `biggest_sum` i aktualizujemy zmienne a, b
            biggest_sum = sum;
            a = numbers[i];
            b = numbers[i + 1];
        }
    }

    // Na koniec zwracamy największą sumę
    return biggest_sum;
}

// 7. element najczęściej występujący w tablicy
int mostOcurringNumber(const int items[], const int n, int &ocurrences) {
    // Policz ile razy każda liczba występuje w `items`
    // Załóż, że maksymalna wartość liczby to 100
    // Zwraca liczbę, która najczęściej występuje i
    // Ustawia wartość `ocurrences` na ilość wystąpień

    // Stwórz tablicę wypełnioną zerami
    // Długość to 101, bo chcemy w łatwy sposób ją indeksować,
    // Pierwszy (0) indeks nas nie interesuje
    int counts[101] = { 0 };

    for (int i = 0; i < n; i++) {
        const int item = items[i];
        // Zwiększ licznik dla danej liczby,
        // np. jeśli w `items[i]` była liczba 15
        // to zwiększ pozycję nr. 15 w tablicy `counts`
        counts[item]++;
    }

    // Mamy już policzoną każdą liczbę, więc teraz szukamy tej,
    // która występuje najczęściej
    int max_num = 0;
    int max_num_count = 0;
    for (int i = 0; i < 101; i++) {
        if (counts[i] > max_num_count) {
            max_num = i;
            max_num_count = counts[i];
        }
    }

    ocurrences = max_num_count;
    return max_num;
}

// 8. przestawienie kolejności elementów w tablicy
void reverseArray(int items[], const int n) {
    // Pętla o długości połowy tablicy (lub o 1 mniej dla nieparzystych n)
    // Musimy przestawić elementy tylko n/2 razy, aby odwrócić całą tablicę
    for (int i = 0; i < n / 2; i++) {
        // Tymczasowo zapisujemy element z lewej strony
        const int temp = items[i];
        // Liczymy indeks elementu, z którym będzie on przestawiony
        // Od długości tablicy `n` odejmujemy `1`, ponieważ indeks ostatniego
        // elementu to n-1 (np. tablica o długości 5 ostatni indeks ma 4)
        // i do tego odejmujemy wartość `i`, czyli takiego jakby "przesunięcia"
        const int right_index = n - 1 - i;

        // Podstawiamy wartość prawego elementu do lewego ...
        items[i] = items[right_index];
        // ... i wartość `tmp` do prawego elementu
        items[right_index] = temp;
    }
}

// 9. kopiowanie tablicy
void copyArray(const int from[], int to[], const int n) {
    // Kopiuje n elementów z tablicy `from` do tablicy `to`

    for (int i = 0; i < n; i++) {
        to[i] = from[i];
    }
}

int main() {
    const int min_n = 1;
    const int max_n = 100;
    // Tablica musi być zawsze tej samej wielkości,
    // ale nie zawsze wykorzystamy ją w 100%
    int numbers[max_n];

    int n;
    std::cout << "Podaj długość tablicy: ";
    std::cin >> n;
    while (n > max_n || n < min_n) {
        // Pytaj o `n` w nieskończoność dopóki będzie w przedziale 1..100
        std::cout << "Podaj liczbę z przedziału 1..100: ";
        std::cin >> n;
    }

    // Wylosuj `n` liczb
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        numbers[i] = randomNumber(1, 100);
    }
    std::cout << "\nWylosowane liczby:\n";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    // 6.
    int a, b;
    int biggest_pair_sum = biggestPair(numbers, n, a, b);
    std::cout << "Najczęściej występująca para: "
              << "a: " << a << ", b: " << b << ", sum: " << biggest_pair_sum << "\n\n";

    // 7.
    // Tablica ma rozmiar 100, bo losujemy liczby od 1 do 100
    int number_counts[100];
    int most_ocurring_count;
    int most_ocurring = mostOcurringNumber(numbers, n, most_ocurring_count);
    std::cout << "Liczba " << most_ocurring
              << " powtarza się najwięcej raz(y): " << most_ocurring_count << "\n\n";

    // 8.
    reverseArray(numbers, n);
    std::cout << "Odwrócona tablica:\n";
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n\n";

    // 9.
    int copied_array[n];
    copyArray(numbers, copied_array, n);
    std::cout << "Skopiowana tablica:\n";
    for (int i = 0; i < n; i++) {
        std::cout << copied_array[i] << ", ";
    }
    std::cout << "\n\n";
}
