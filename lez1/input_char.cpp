#include <iostream>
using namespace std;

//bello ma troppi caratteri

/// @brief inserisci un carattere che poi viene ristampato
/// @return una minchia
int main(){
    /*char car;
    cout << "Inserisci un carattere: ";
    cin  >> car;
    cout << "Hai inserito: " << car << endl;
    return 0;*/

    char b;
    cout << "Inserisci un numero: ";
    cin >> b;

    //guarda il codice asci assegnato al caratere inserito
    int a = (int)b;

    cout << a << endl;
    if(a%2==0){
        cout << "tieni i piedi pari\n";
    }else{
        cout << "OrunzoloStrunz\n";
    }
}