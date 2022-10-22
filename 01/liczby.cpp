#include <iostream>

using namespace std;

int main() {
    float a;
    cout << "podaj liczbe";
    cin >> a;

    if (a < 0) {
        cout << "a jest mniejsze od 0" << endl;
    } else if (a > 0) {
        cout << "a jest wieksze od 0" << endl;
    } else {
        cout << "a jest rowne 0" << endl;
    }

    if (a == 5) {
        cout << "a=5 pogchamp" << endl;
    } else if (a == 2) {
        cout << "a=2 pogchamp" << endl;
    } else {
        cout << "a=/=5 nonpogchamp" << endl;
    }
}
