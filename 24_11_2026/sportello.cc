#include "sportello.h"
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

bool Inserisci(const char nomeFile[], abbonamento arr[], int n) {
    abbonamento nuovo{};

    cout << "Numero abbonamento: ";
    if (!(cin >> nuovo.num)) {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }

    cout << "Nome (max 31 caratteri, senza spazi): ";
    if (!(cin >> setw(MAX_LEN) >> nuovo.nome)) {
        return false;
    }

    cout << "Cognome (max 31 caratteri, senza spazi): ";
    if (!(cin >> setw(MAX_LEN) >> nuovo.cognome)) {
        return false;
    }

    cout << "Tipo ('a' stagionale, 'm' mensile, 's' settimanale, 'g' giornaliero): ";
    if (!(cin >> nuovo.tipo)) {
        return false;
    }

    switch (nuovo.tipo) {
        case 'a':
            nuovo.costo = 500.0;
            break;
        case 'm':
            nuovo.costo = 150.0;
            break;
        case 's':
            nuovo.costo = 50.0;
            break;
        case 'g':
            nuovo.costo = 10.0;
            break;
        default:
            cout << "Tipo non valido. Inserimento annullato.\n";
            return false;
    }

    ofstream out(nomeFile, ios::app);
    if (!out.is_open()) {
        cout << "Errore nell'apertura del file in scrittura.\n";
        return false;
    }

    out << nuovo.num << " "
        << nuovo.nome << " "
        << nuovo.cognome << " "
        << nuovo.tipo << " "
        << nuovo.costo << "\n";

    if (!out) {
        cout << "Errore durante la scrittura sul file.\n";
        return false;
    }

    arr[n] = nuovo;
    return true;
}

double Guadagno(const abbonamento arr[], int n) {
    double totale = 0.0;
    for (int i = 0; i < n; ++i) {
        totale += arr[i].costo * 0.9; // al netto del 10% di spese
    }
    return totale;
}

char Elabora(const abbonamento arr[], int n, double r[4]) {
    for (int i = 0; i < 4; ++i) {
        r[i] = 0.0;
    }

    for (int i = 0; i < n; ++i) {
        switch (arr[i].tipo) {
            case 'a':
                r[0] += arr[i].costo;
                break;
            case 'm':
                r[1] += arr[i].costo;
                break;
            case 's':
                r[2] += arr[i].costo;
                break;
            case 'g':
                r[3] += arr[i].costo;
                break;
            default:
                break;
        }
    }

    const char tipi[4] = {'a', 'm', 's', 'g'};
    int idxMax = 0;
    for (int i = 1; i < 4; ++i) {
        if (r[i] > r[idxMax]) {
            idxMax = i;
        }
    }

    return tipi[idxMax];
}