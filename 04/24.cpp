#include <iostream>

int sumIter(const int n);
int sumRec(const int n);

int main() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::cout << "(iteracja)   " << n << "+ = " << sumIter(n) << '\n';
    std::cout << "(rekurencja) " << n << "+ = " << sumRec(n) << '\n';
}

int sumIter(const int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

int sumRec(const int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return n + sumRec(n - 1);
}
