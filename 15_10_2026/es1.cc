#include <iostream>
using namespace std;

int main() {

    int x = 5;

    /*stampa il indirizzo della cella di memoria di x*/
    int * y = &x;

    cout << "stampa il valore di x: " << x << endl;
    cout << "stampa il indirizzo della memoria di x: " << y << endl;

    x++;

    cout << "Stampa " << x << endl;

}