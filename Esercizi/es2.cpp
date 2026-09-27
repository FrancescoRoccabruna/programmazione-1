#include <iostream>
using namespace std;

// Inserimento da linea di comando dei valori del dividendo e divisore
int main(){
    int a, b;
    int quoziente, resto;

    cout << "Inserire il dividendo: " << endl;
    cin  >> a;
    "\n";
    cout << "Inserire il divisore: " << endl;
    cin  >> b;
    "\n";

    quoziente = a/b;
    resto     = a-(quoziente*b);

    cout << "Quozinete: " << quoziente << endl << "Resto: " << resto << endl;
    return 0;
}