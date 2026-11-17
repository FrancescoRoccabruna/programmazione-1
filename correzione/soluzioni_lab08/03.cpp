

#include <iostream>

using namespace std;


int invert(int n)
{
	int m = 0;
	while (n >= 1) {
		m = (m * 10) + (n % 10);
		n /= 10;
	}
	return m;
}

int main ()
{
	char condition;
	

	do {

		// Acquisizione del numero
		int number, res = 0;
		cout << "Immettere un numero intero positivo: ";
		cin >> number;
		cout << endl;
	
		// Verifica che sia positivo
		if (number > 0) {

			// Inversione delle cifre
			res = invert(number);

			// Visualizzazione del risultato
			cout << "Il numero a cifre invertite e' " << res << endl;

		}
		else 
			cout << "Attenzione: bisogna inserire un numero positivo." << endl;

		do {
			cout << endl;
			cout << "Inserire un altro numero (s/n)? ";
			cin >> condition;
			cout << endl;
			if ((condition != 's') && (condition != 'n'))
				cout << "Attenzione: inserire s per continuare, n per uscire" << endl;
		} while ((condition != 's') && (condition != 'n'));

	} while (condition != 'n');
	
	return 0;
}
