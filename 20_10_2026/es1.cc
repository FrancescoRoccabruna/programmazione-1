#include <iostream>
using namespace std;

char lettera = 'g';

void f() {
    char lettera = 'f';
    cout << lettera << endl;
}

int main() {

    cout << "Stampa la variabile globale o comune a tutti 'f' che ho dicchiarato sopra: " << endl;
    f();
    cout << "Stampa la variabile locale della funzione 'g': " << lettera << endl;
    char lettera = 'm';
    cout << "Stampa la varibile locale del main 'm': " << lettera << endl;


    return 0;
}