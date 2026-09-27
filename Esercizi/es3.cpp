#include <iostream>
using namespace std;

// Stampa dei valori delle tabelle AND e OR
int main(){
    
    bool a, b;

    cout << "Tebella AND: " << endl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            a=(bool)i;
            b=(bool)j;
            cout << "Valore "<<(i+j)<<": "  << (int)(a&&b) << endl;
        }
    }

    cout << "\n";

    cout << "Tebella OR: " << endl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            a=(bool)i;
            b=(bool)j;
            cout << "Valore "<<(i+j)<<": "  << (int)(a||b) << endl;
        }
    }
}