#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout << "Inserisci a e b: " << endl;

    cin >> a >> b;

    bool out = !(a - b);

    cout << "risultato: " << out << endl;

    return 0;
}