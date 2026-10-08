#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int cifre, dividendo, divisore;

    int temp, quoto, resto, fattore;

    cout << "immetti dividendo, dividore e cifre: ";
    cin >> dividendo >> divisore >> cifre ;

    fattore = pow(10, cifre);
    temp    = (dividendo * fattore) / divisore;

    quoto = temp / fattore;

    //resto = temp % fattore; soluzione brutta facile
    resto = (temp - quoto * fattore);

    cout << dividendo << ":" << divisore << " = " << quoto << "." << resto; 
}