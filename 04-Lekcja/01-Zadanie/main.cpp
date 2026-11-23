#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "podaj liczbe n: " << endl;
    cin >> n;
    int suma = 0;

    for (int i=1; i<n; i++){
        suma+=i;
    }
    cout << "Suma: " << suma << endl;

    return 0;    
} 
