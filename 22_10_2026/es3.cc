#include <iostream>
using namespace std;

int sommaCifre(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sommaCifre(n / 10);
}

int main() {
    int numero = 0;

    cout << "Inserisci un numero intero non negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Errore: Il numero deve essere non negativo!" << endl;
        return 1;
    }

    int risultato = sommaCifre(numero);
    cout << numero << " => " << risultato << endl;

    return 0;
}