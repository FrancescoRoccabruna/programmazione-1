#include <iostream>
using namespace std;

// Stampa dei valori delle tabelle AND e OR
int main(){
    
    bool a, b;

    cout << "Tebella AND: " << endl;
    cout << "a | b" << endl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            cout << i << " | " << j << " | " << (i&&j) << endl;
        }
    }

    cout << "\n";

    cout << "Tebella OR: " << endl;
    cout << "a | b" << endl;
    for(int i=0; i<=1; i++){
        for(int j=0; j<=1; j++){
            cout << i << " | " << j << " | " << (i||j) << endl;
        }
    }
}