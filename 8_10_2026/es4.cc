#include <iostream>
using namespace std;

int main() {

    int numero;
    bool primo = true;

    // 

    do {
        cout << "INserisci il numero 0 <= numero <= 1000: ";
        cin >> numero;

    } while (numero < 0 || numero > 1000);

    //

    for (int i=2; i<numero && primo; i++){

        if (numero % i == 0){
            primo = false;
        }
    };

    cout << "IL NUMERO " << numero << " ";
    if (primo == false) cout << "non ";
    cout << "è primo" << endl;


    return 0;

}