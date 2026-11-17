#include <iostream>

using namespace std;

int divisione(int, int, int&);

int main() {

    int dividendo, divisore, resto;
    int segno = 1;
    cout << "Inserisci il dividendo: ";
    cin >> dividendo;
    cout << "Inserisci il divisore: ";
    cin >> divisore;

    if (dividendo < 0 && divisore > 0){
       dividendo = -dividendo;
       segno = -1;}

    else if (dividendo > 0 && divisore < 0 ){
        divisore = -divisore;
        segno = -1;}

    else if (dividendo < 0 && divisore < 0){
        dividendo = -dividendo;
        divisore = -divisore;
    }  
    
    if (divisore == 0) {
       cout<<"Errore! Divisione per zero";
       exit(0);}

    int quoziente = divisione(dividendo, divisore, resto);

    cout << "Il quoziente e' " << quoziente*segno << " il resto e' " << resto << endl;

    return 0;
}

int divisione(int dividendo, int divisore, int& resto) {
    
    int value = 0;

    if (dividendo < divisore) {
        resto = dividendo;
        value = 0;
    }
    else {
        dividendo -= divisore;
        value = 1 + divisione(dividendo, divisore, resto);
    }

    return value;
}