#include <iostream>
using namespace std;

int main() {

    // es di puntatore-a

    // riservo una cella di memoria
    int x = 5; 

    // allocazione della memoria di x
    // &x operatore che da la sua cella di memoria che contiene anche un intero
    // 
    int * y = &x; 

    cout << "Valore: " << x  << endl;

    cout << "Cella di memoria di x in y: " << y  << endl;

    // Il valore dentro la scatola puntata o cella di memoria da y
    cout << "Valore dentro la cella di memoria di y: " << *y  << endl;

    x++;

    cout << "Valore +1 di x: " << x  << endl;

    y++;
    /*Qui non stai cambiando il valore 5 o 6. 
      Stai dicendo al puntatore: "Spostati alla prossima 
      cella di memoria disponibile per un intero */
    cout << "Valore +1 di y: " << y  << endl;

    (*y)++;
    cout << "Valore +1 di y: " << y  << endl;





}