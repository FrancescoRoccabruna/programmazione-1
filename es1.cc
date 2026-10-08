#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 0;

    cout << "Inserisci i numero di A e B: " << endl;

    cout << "Valore di A: " << endl;
    cin >> a;

    cout << "Valore di B: " << endl;
    cin >> b;

    int valore_assoluto = (a-b)*((a>b)-(b>a));
    cout << "Valore assoluto: " << valore_assoluto << endl;


    return 0;

}