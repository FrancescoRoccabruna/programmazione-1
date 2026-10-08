#include <iostream>
using namespace std;
#include <cmath>

int main() {

    int cifra, dividendo, divisore;
    int temp, quoto, resto, fattore;

    cout << "Immetti divendo divisore e cifre: " << endl;
    cin >> dividendo >> divisore >> cifra;

    fattore = pow(10, cifra);

    temp = (dividendo*fattore)/divisore;

    resto = temp%fattore;

    quoto = temp/fattore;

    cout << "Quoto: " << dividendo << ":" << divisore << " = ";

    cout << quoto << endl;

    cout << "Cifra senza la virgola: " <<temp << endl;

    cout << "Cifra dopo la virgole: " << resto << endl;

}