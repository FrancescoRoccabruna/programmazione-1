#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "sportello.h"

using namespace std;

const char Abbonamenti2026[] = "Abbonamenti2026.txt";

int main() {
    fstream input;
    input.open(Abbonamenti2026, ios::in);
    if (!input.is_open()) {
        cout << "Il file non esiste" << endl;
        exit(1);
    }

    int a = 0;
    abbonamento temp;
    while (input >> temp.num >> temp.nome >> temp.cognome >> temp.tipo >> temp.costo) {
        a++;
    }
    input.close();

    cout << "Numero abbonamenti letti: " << a << endl;

    int capacita = (a > 0) ? a * 2 : 2;
    int n = 0;
    abbonamento* arr = new abbonamento[capacita];

    input.open(Abbonamenti2026, ios::in);
    if (input.is_open()) {
        while (n < capacita &&
               (input >> arr[n].num >> arr[n].nome >> arr[n].cognome >> arr[n].tipo >> arr[n].costo)) {
            n++;
        }
        input.close();
    }

    int scelta = 0;
    do {
        cout << "\n--- MENU SPORTELLO ABBONAMENTI ---\n";
        cout << "1. Emetti nuovo abbonamento\n";
        cout << "2. Calcola guadagno totale\n";
        cout << "3. Calcola ricavo per tipologia\n";
        cout << "4. Esci\n";
        cout << "Scegli un'operazione: ";

        if (!(cin >> scelta)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Scelta non valida: inserisci un numero da 1 a 4.\n";
            continue;
        }

        switch (scelta) {
            case 1: {
                if (Inserisci(Abbonamenti2026, arr, n)) {
                    n++;
                    cout << "Abbonamento inserito con successo.\n";
                    // Punto 5: se ha occupato l'ultimo elemento dell'array, raddoppia la dimensione
                    if (n == capacita) {
                        int nuovaCapacita = capacita * 2;
                        abbonamento* nuovoArr = new abbonamento[nuovaCapacita];
                        for (int i = 0; i < n; ++i) {
                            nuovoArr[i] = arr[i];
                        }
                        delete[] arr;
                        arr = nuovoArr;
                        capacita = nuovaCapacita;
                    }
                } else {
                    cout << "Inserimento non effettuato.\n";
                }
                break;
            }
            case 2: {
                double totGuadagno = Guadagno(arr, n);
                cout << "Guadagno totale: " << totGuadagno << " euro\n";
                break;
            }
            case 3: {
                double r[4];
                char maxTipo = Elabora(arr, n, r);
                cout << "Ricavi per tipologia:\n"
                     << "  Stagionale ('a'):   " << r[0] << " euro\n"
                     << "  Mensile ('m'):      " << r[1] << " euro\n"
                     << "  Settimanale ('s'):  " << r[2] << " euro\n"
                     << "  Giornaliero ('g'):  " << r[3] << " euro\n"
                     << "Tipologia con massimo ricavo: '" << maxTipo << "'\n";
                break;
            }
            case 4:
                cout << "Uscita dal programma.\n";
                break;
            default:
                cout << "Opzione non valida, riprova.\n";
                break;
        }
    } while (scelta != 4);

    delete[] arr;
    return 0;
}