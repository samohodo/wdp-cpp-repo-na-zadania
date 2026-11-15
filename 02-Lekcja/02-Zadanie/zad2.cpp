#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double o1 = 0.0, o2 = 0.0, o3 = 0.0, o4 = 0.0, o5 = 0.0;

    cout << "Podaj piec ocen: ";
    cin >> o1 >> o2 >> o3 >> o4 >> o5;

    double srednia = (o1 + o2 + o3 + o4 + o5) / 5.0;

    cout << fixed << setprecision(2);
    cout << "Srednia: " << srednia << endl;

    return 0;
}