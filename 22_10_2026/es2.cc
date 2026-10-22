#include <iostream>
using namespace std;

void binario (int n) {

    if (n == 0){

        return;
    }
    binario(n/2);

    cout << (n%2);


}

int main () {

    int n = 0;

    cout << "Inserisci un numero intero non negativo: " << endl;
    cin >> n;


    if (n < 0) {
        cout << "Errore: inserisci un numero non negativo!" << endl;
        return 1;
    }


    cout << "Numero inserito: " << n << "\nValore in binario con la ricorsica: " << endl;

    if (n == 0){
        cout << "0";
    } else {    
        binario(n);
    }

    cout << endl;



}