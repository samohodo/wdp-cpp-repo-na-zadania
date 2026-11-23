#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Podaj liczbe n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        suma += i;
    }

    cout << "Suma wynosi: " << suma << endl;

    return 0;
}