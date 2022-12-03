#include <iostream>

int f(int *a, int *b);

int *g(int *a, int *b);

int main() {
    int a = 1;
    int b = 2;

    int najwieksza = f(&a, &b);
    std::cout << "Najwieksza (funkcja f): " << najwieksza << '\n';

    int *najwieksza_ptr = g(&a, &b);
    std::cout << "Najwieksza (funkcja g): " << *najwieksza_ptr << '\n';
}

int f(int *a, int *b) {
    // Znajdź większą liczbę i zwróć jej wartość

    if (*a < *b)
        return *a;
    else
        return *b;
}

int *g(int *a, int *b) {
    // Znajdź największą liczbę i zwróć wskaźnik do niej

    if (*a < *b)
        return a;
    else
        return b;
}
