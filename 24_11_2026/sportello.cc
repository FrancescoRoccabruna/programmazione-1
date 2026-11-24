//sportello.cc

#include "sportello.h"
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

bool Inserisci(const char nomeFile[], abbonamento*& arr, int& n, int& capacita) {
    abbonamento nuovo{};

    cout << "Numero abbonamento: ";
    if (!(cin >> nuovo.num)) {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }

    cout << "Nome (max 30 caratteri, senza spazi): ";
    if (!(cin >> setw(MAX_LEN) >> nuovo.nome)) {
        return false;
    }

    cout << "Cognome (max 30 caratteri, senza spazi): ";
    if (!(cin >> setw(MAX_LEN) >> nuovo.cognome)) {
        return false;
    }

    cout << "Tipo ('a' stagionale, 'm' mensile, 's' settimanale, 'g' giornaliero): ";
    if (!(cin >> nuovo.tipo)) {
        return false;
    }

    switch (nuovo.tipo) {
        case 'a':
            nuovo.costo = COSTO_STAGIONALE;
            break;
        case 'm':
            nuovo.costo = COSTO_MENSILE;
            break;
        case 's':
            nuovo.costo = COSTO_SETTIMANALE;
            break;
        case 'g':
            nuovo.costo = COSTO_GIORNALIERO;
            break;
        default:
            cout << "Tipo non valido. Inserimento annullato.\n";
            return false;
    }

    // Punto 5: se l'array e' pieno, raddoppia la dimensione
    if (n >= capacita) {
        int nuovaCapacita = (capacita > 0) ? capacita * 2 : 2;
        abbonamento* temp = new abbonamento[nuovaCapacita];
        for (int i = 0; i < n; ++i) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacita = nuovaCapacita;
    }

    // Punto 4: inserimento in coda al file esistente
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
    ++n;
    return true;
}