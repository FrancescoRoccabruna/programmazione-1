#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a;

    cout << "Inserisci a: " << endl;

    cin >> a;

    cout << "precedente: " << --a << " successivo: "  << ++(++a) << endl;

    return 0;
}