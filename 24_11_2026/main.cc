#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include "sportello.h"

using namespace std;

const char Abbonamenti2026[] = "Abbonamenti2026.txt";

int main(){

    fstream input;
    input.open(Abbonamenti2026, ios::in);
    if(!input.is_open()){
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


    int capacita = a * 2;
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
            case 1:
                // Qui chiameremo Inserisci(...)
                cout << "[Opzione 1: emissione nuovo abbonamento]\n";
                break;
            case 2:
                // Qui chiameremo Guadagno(...)
                cout << "[Opzione 2: calcolo guadagno totale]\n";
                break;
            case 3:
                // Qui chiameremo Elabora(...)
                cout << "[Opzione 3: calcolo ricavo per tipologia]\n";
                break;
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