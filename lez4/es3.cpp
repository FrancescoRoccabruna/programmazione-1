#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Inserire il valore intero per a: " << endl;
    cin >> a;

    cout << --a << " " << /*(++a,++a)*/ ++(++a) << endl;
    return 0;
}