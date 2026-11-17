#include <iostream>
using namespace std;


void avanzaUnSecondo (int&, int&, int&);

int main() {
    int ore, minuti, secondi, n;

    cout << "Inserisci l'orario.";
    cout << "Inserisci le ore: ";
    cin >> ore;
    cout << "Inserisci i minuti: ";
    cin >> minuti;
    cout << "Inserisci i secondi: ";
    cin >> secondi;

    cout << "Inserisci n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        avanzaUnSecondo(ore, minuti, secondi);
        cout << ore << ":" << minuti << ":" << secondi << endl;
    }

    return 0;
}

void avanzaUnSecondo(int& ore, int& minuti, int& secondi) {
    secondi++;
    if (secondi == 60) {
        secondi = 0;
        minuti++;
        if (minuti == 60) {
            minuti = 0;
            ore++;
            if (ore == 24) {
                ore = 0;
            }
        }
    }
}