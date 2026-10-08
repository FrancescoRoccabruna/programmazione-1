#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int input, risultato = 0;


    do
    {
        cout << "inserisci un numero binario: ";
        cin >> input; 
    } while (input < 0);

    int cifra, decimale = 0, potenza_due = 1;

    while (input != 0)
    {
        cifra = input%10;
        decimale += cifra * potenza_due;
        potenza_due *= 2;
        input /=10; 

    }

    cout << decimale;
    

    
    
}