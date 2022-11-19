#include <iostream>

// A function can't change actual values of passed variables
// without references, so this function won't do anything.
template <typename T>
void swapVal(T a, T b) {
    auto temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swapRef(T &a, T &b) {
    auto temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cout << "Podaj liczbe a: ";
    std::cin >> a;
    std::cout << "Podaj liczbe b: ";
    std::cin >> b;

    std::cout << "Liczby przed zamianią: a=" << a << " b=" << b << '\n';
    swapRef(a, b);
    std::cout << "Liczby po zamianie:    a=" << a << " b=" << b << '\n';
}
