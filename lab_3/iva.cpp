#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float prezzo, iva;

    cout << "Inserisci prezzo e iva" << endl;

    cin >> prezzo >> iva;

    int version;

    cout << "inserisci 1 se hai inserito il prezzo netto, -1 se hai inserito il prezzo lordo " << endl;

    cin >> version;
    
    float out = prezzo + (version * prezzo * (iva/100));
    
    
    cout << "Risultato: " << out;

    return 0;
    

}