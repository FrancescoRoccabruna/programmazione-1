#include <iostream>
using namespace std;

int sommaPari(int);

int main() {
    int numero;
    cout << "Inserisci un numero intero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Errore: il numero deve essere positivo." << endl;
        exit(0);
    }

    int risultato = sommaPari(numero);
    cout << "La somma dei numeri pari da 1 a " << numero << " e': " << risultato << endl;

    return 0;
}



int sommaPari(int n) {
    int risultato; 

    if (n <= 0) {
        risultato = 0;
    } else if (n % 2 == 0) {
        risultato = n + sommaPari(n - 2);
    } else {
        risultato = sommaPari(n - 1);
    }

    return risultato;
}