#include <iostream>
using namespace std;

#include <cmath>

// Esercizio: calcolare il volume della sfera dato il raggio di un cerchio

int main(){
    float r;
    cout << "Inserire il raggio della sfera: ";
    cin >> r;
    '\n';
    float volSf=4/3*(pow(r,2) * 3.14);
    cout << "Volume cerchio: " << volSf << endl;
    return 0;
}