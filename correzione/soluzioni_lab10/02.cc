#include <iostream>

using namespace std;

void stampaBinario(int);

int main() {

    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero < 0){
        cout<<"Attenzione il numero deve essere positivo!";
        exit(0);
    }
        

    stampaBinario(numero);
    return 0;
}

void stampaBinario(int n) {
    if (n==0 || n==1){
       cout<<n; }

    else{
       stampaBinario(n/2);
       cout<<(n%2);}
       return;
   

    }
       


