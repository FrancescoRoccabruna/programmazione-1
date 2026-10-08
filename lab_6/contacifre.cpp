#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int intero = 0, risultato = 0;

    

    do {
        cout << "immetti un intero positivo: ";
        cin >> intero;
    } while (intero <= 0);



    while (intero >0){
        intero /= 10;
        risultato ++;
    }

    cout << risultato << endl; 
}

