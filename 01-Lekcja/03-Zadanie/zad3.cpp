#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int wiek;
    string imie;
    double wzrost;
    cout << "Podaj wiek: ";
    cin >> wiek;
    cout << "Podaj wzrost: ";
    cin >> wzrost;
    cout << "Podaj imie: ";
    cin >> imie;

    cout << fixed;
    cout << setprecision(2) << "Wzrost: " << wzrost << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Imie: " << imie << endl;

    return 0;    
}