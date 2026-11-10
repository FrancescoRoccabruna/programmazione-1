#include <iostream>
using namespace std;

int main() {

    int somma = 0;

    int valore = 6;

    int i = valore++;

    cout << "Inserisce il valore: " << endl;

    cin >> somma;
    
    somma = 2*somma + valore;

    cout << "SOMMA: " << somma << endl;
}