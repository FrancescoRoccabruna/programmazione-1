#include <iostream>

using namespace std;

int somma(int numero){
    if (numero == 0){
        return 0;
    } else {
        return numero%10 + somma(numero/10);
    }
}

int main(){

    int n;

    cin >> n;

    cout << somma(n) << endl;

    return 0;
}