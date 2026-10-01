#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout << "Inserisci a e b: " << endl;

    cin >> a >> b;

    int out = (a-b)*((a-b>=0)-(a-b<0));

    cout << "risultato: " << out << endl;

    return 0;
}