#include <iostream>
using namespace std;

int main() {

    char din, dout, valido;     // carattere in/out (char)
    int vin, vout;      // carattere in/out (int)
    bool flag;          // verso della conversione
    int diff=('a'-'A'); // inserisci il carattere minuscono e lo sottrai da quello maiuscolo

    cout << "Immetti una lettera minuscola o maiuscola: ";
    cin  >> din;

    vin = (int)din;

    // verifico il valore inserito è sotto la maiuscola e cosi scopro che ha messo maiscolo
    flag = (vin<'a'); 

    vout = (vin+diff)*flag + (vin-diff)*(1-flag); 
    
    // e solo vero se ha messo la lettera maiuscoola = 1



    dout = (char)vout;

    valido = (din>='A' && din<='Z') || (din>='a' && din<='z');
    dout = valido*dout + (1-valido)*'?';
    
    cout << din << "->" << dout << endl;
 


    return 0;




}
