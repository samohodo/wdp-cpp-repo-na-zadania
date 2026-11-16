#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if (a>b){
        cout << "Wieksza liczba: " << a << endl;
        cout << "Mniejsza liczba: " << b << endl;
        cout << a << " > " << b << endl; 
    }
    else if (b>a){
        cout << "Wieksza liczba: " << b << endl;
        cout << "Mniejsza liczba: " << a << endl;
        cout << a << " < " << b << endl; 
    }
    else{
        cout << a << " == " << b << endl;
    }
}