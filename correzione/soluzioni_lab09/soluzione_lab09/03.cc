#include <iostream>
#include <cmath>
using namespace std;

int potenza(int n, int b, int& e, int& m) {
	e = 0;
	m = 1;

	if (n <= 0 || b <= 1)
		return -1;

	while (m <= n) {
		e++;
		m *= b;
	}

	return 0;
}

int main () {
    int numero_input = 0, base = 0;
    int numero_output = 1, esponente = 0, risultato = 0;
	char continua = 's';

	do {
		// Acquisizione del numero e della base
		cout << "Immettere un numero intero positivo: ";
		cin >> numero_input;
		cout << "Immettere una base: ";
		cin >> base;
		cout << endl;

		risultato = potenza(numero_input, base, esponente, numero_output);

		// Verifica che sia positivo
		if (risultato != 0)
			cout << "Attenzione: numero e base devono essere positivi; la base deve inoltre essere diversa da 1." << std::endl;

		else {
			// Visualizzazione del risultato
			cout << "L'esponente della piu' piccola potenza di " << base
				<< " il cui valore e' maggiore di " << numero_input << " e' " << esponente << endl;
			cout << "Il valore della piu' piccola potenza di " << base
				<< " il cui valore e' maggiore di " << numero_input << " e' " << numero_output << endl;
		}

		do {
			cout << endl;
			cout << "Inserire un altro numero (s/n)? ";
			cin >> continua;
			cout << endl;
			if ((continua != 's') && (continua != 'n'))
				cout << "Attenzione: inserire s per continuare, n per uscire" << endl;
		} while ((continua != 's') && (continua != 'n'));

	} while (continua != 'n');

	return 0;
}
