#include <iostream>

int factorialIter(const int n);
int factorialRec(const int n);

int main() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::cout << "(iteracja)   " << n << "! = " << factorialIter(n) << '\n';
    std::cout << "(rekurencja) " << n << "! = " << factorialRec(n) << '\n';
}

int factorialIter(const int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) sum *= i;
    return sum;
}

int factorialRec(const int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return n * factorialRec(n - 1);
}
