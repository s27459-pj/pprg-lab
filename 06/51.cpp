#include <iostream>
#include <string>

struct Fraction {
    int nominator;
    int denominator;
    float value;
};
typedef struct Fraction Fraction;

Fraction divide(const Fraction a, const Fraction b) {
    return Fraction{
        a.nominator * b.nominator,
        a.denominator * b.denominator,
        a.value * b.value,
    };
}

int main() {
    Fraction a = { 1, 2, 1. / 2 };
    Fraction b = { 1, 8, 1. / 8 };

    Fraction res = divide(a, b);
    std::cout << "Result: " << res.nominator << '/' << res.denominator << " = "
              << res.value << '\n';
}
