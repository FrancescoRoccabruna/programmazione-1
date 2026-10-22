#include <iostream>


using namespace std;

int fattoriale(int &valore, int& risultato){
    if (valore <= 1){
        risultato = 1;
    } else {
        risultato =  fattoriale(--valore, risultato) *  (++valore); 

    }

    return risultato;

}




int fattoriale2(int valore){
    if (valore <= 1){
        valore = 1;
    } else {
        valore =  fattoriale2(valore - 1) *  valore; 

    }

    return valore;
}



int main(){

    int numero, risultato;

    cout << "Inserisci un intero: ";
    cin >> numero;

    cout << fattoriale(numero, risultato) << endl;

    cout << fattoriale2(numero) << endl;


    return 0;
}