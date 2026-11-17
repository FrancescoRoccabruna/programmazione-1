#include<iostream>
using namespace std;

int preleva(double, double&, double*);

int main() {
    double saldo = 3000.0;
    double commissioni = 0.0;
    double importo;

    cout << "Il tuo saldo iniziale e': " << saldo << " euro" << endl;
    cout << "Inserisci importo da prelevare: ";
    cin >> importo;

    int esito = preleva(importo, saldo, &commissioni);

    if (esito)
        cout << "Prelievo effettuato. Saldo attuale: " << saldo
             << " | Commissioni totali: " << commissioni << endl;
    else
        cout << "Prelievo rifiutato." << endl;

    return 0;
}


int preleva(double importo, double& saldo, double* commissioni) {
    int esito = 0;
    double commissione = 0.0;
    double importo_con_commissione = 0.0;


    if (importo > 0) {
        commissione = importo * 0.02;

        if (commissione < 1.0) 
            commissione = 1.0;

        importo_con_commissione = importo + commissione;

        if (saldo >= importo_con_commissione) {
            saldo -= importo_con_commissione;
            *commissioni += commissione;
            esito = 1;
        }
    }

    return esito;
}
