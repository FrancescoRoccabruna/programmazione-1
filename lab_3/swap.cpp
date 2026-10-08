#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;

    cout << "INSERISCI a, b" << endl;
    cin >> a >> b;

    a += b;
    int a = 12; //r-value = 12, l-value = indirizzo che punta a 12

    *int b = a; //assegno al puntatore l' l-value di b
    b = a - b;

    a = a - b;

    cout << "a: " << a << " b: " << b << endl;


    return 0;
}


