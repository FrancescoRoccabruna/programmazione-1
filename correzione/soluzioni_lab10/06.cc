#include <iostream>
using namespace std;

int jump(int);


int main() {
    int N;
    cout << "Inserisci il valore di N che la rana deve raggiungere saltando: ";
    cin >> N;

    if (N <= 0) {
        cout << "Errore: N non puo' essere negativo o pari a zero." << endl;
        return 1;
    }

    int modi = jump(N);
    cout << "La rana puo' arrivare al punto " << N << " in " << modi << " modo(i)." << endl;

    return 0;
}


int jump(int n) {
    int varianti;

    if (n < 0) {
        varianti = 0; // caso base (la rana supera la ninfea)
    } else if (n == 0) { //un unico modo per restare fermi. caso base
        varianti = 1; 
    } else {
        varianti = jump(n - 1) + jump(n - 2);
    }

    return varianti;
}