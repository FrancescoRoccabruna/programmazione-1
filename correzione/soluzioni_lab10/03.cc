#include <iostream>

using namespace std;

int somma_cifre(int);

int main() {

  int numero;

  cout << "Inserisci un numero: ";
  cin >> numero;

  if (numero < 0)
        numero = -numero;

  cout << somma_cifre(numero) << endl;

  return 0;
}

int somma_cifre(int n) {
    int valore = n;
    
    if (n < 10 ) {
       valore = n;
    }

    else
      valore = n%10 + somma_cifre(n/10);

    return valore;
  

}
