#include <iostream>
using namespace std;


int mcd(int, int);

int main (){

int n1, n2;
cout << "Inserisci il primo numero: ";
cin >> n1;
cout << "Inserisci il secondo numero: ";
cin >> n2;

 if (n1 < 0 || n2 < 0) {
        cout << "Errore: i numeri devono essere non negativi." << endl;
        exit(1);
    }

    if (n2 >= n1) {
        cout << "Errore: il primo numero deve essere maggiore del secondo." << endl;
        exit (2);
    }

cout << "Il massimo comune divisore e' " << mcd(n1, n2) << endl;
return 0;

}


int mcd(int x, int y)
{
if (y==0)
    return x;
else 
   return mcd(y,x%y);

}


// funzione iterativaa che calcola MCD tra due numeri
 

//int mcd(int a, int b)

//{
  //int resto;

  //while (b != 0) {

    //resto = a % b;

    //a = b;

    //b = resto;
  //}

  //return a;

//}