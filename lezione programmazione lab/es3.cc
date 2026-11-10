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

    // int max = ((a>b)*(a-b));

    int max = a*(a>=b) + b*(a<b);
    cout << "max: " << max << endl;

    int min = (a+b) - max;
    cout << "min: " << min << endl;


    return 0;

}