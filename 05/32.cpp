#include <iostream>

int main() {
    int n, k;
    std::cout << " Podaj kolejno n i k: \n";
    std::cin >> n >> k;

    int *nn = &n;
    int *kk = &k;

    int sn = 1;
    int *snn = &sn;
    for (int i = 2; i <= *nn; i++) *snn = *snn * i;

    int sk = 1;
    int *skk = &sk;
    for (int i = 2; i <= *kk; i++) *skk = *skk * i;

    int snk = 1;
    int *snkk = &snk;
    for (int i = 2; i <= *nn - k; i++) *snkk = *snkk * i;

    std::cout << " Symbol Newtona n nad k wynosi " << sn / (*skk * *snkk);
}
