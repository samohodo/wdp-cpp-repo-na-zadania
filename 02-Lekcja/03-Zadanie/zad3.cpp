#include <iostream>
using namespace std;

int main() {
    double x = 0.0, y = 0.0;

    cout << "Podaj dwie liczby rzeczywiste: ";
    cin >> x >> y;

    cout << "Suma: " << (x + y) << endl;
    cout << "Roznica: " << (x - y) << endl;
    cout << "Iloczyn: " << (x * y) << endl;

    cout << "Iloraz: " << (x / y) << endl;

    return 0;
}