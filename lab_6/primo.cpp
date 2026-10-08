#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int numero;
    bool trovato = false;

    

    do {
        cout << "inserisci un itero fra 0 e 1000: ";
        cin >> numero;
    } while (numero < 0 || numero > 1000);

    for (int i = 2; i<numero && !trovato; i++){
        if (numero % i == 0){
            trovato = true;
        }
    }
    
    

    if (trovato){
        cout << "non è primo" << endl;
    } else {
        cout << "è primo" << endl;
    }
}

