#include <iostream>
using namespace std;

bool palindromo(int valore);
int palindromo_ausiliaria(int valore, int temp);

int main() {
    int valore;
    cout << "Inserisci un valore: " << endl;
    cin >> valore;

    if (palindromo(valore)) {
        cout << "L'intero e' palindromo!" << endl;
    } else {
        cout << "L'intero non e' palindromo!" << endl;
    }

    return 0;
}

int palindromo_ausiliaria(int valore, int temp) {
    if (valore < 10)
        return valore;
    int cifra = valore % 10;
    int ris = palindromo_ausiliaria(valore / 10, temp / 10);
    return cifra * temp + ris;
}

bool palindromo(int valore) {
    int len = 1, tmp = valore;
    while (tmp >= 10) 
		{ len *= 10; tmp /= 10; }
    return (valore == palindromo_ausiliaria(valore, len));
}