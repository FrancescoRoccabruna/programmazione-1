#include <iostream>
#include <cmath>
using namespace std;

double distanza(double, double, double, double); 


int main () {
    double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, d =0.0;
	char continua = 's';

	do {
		// Acquisizione delle coordinate dei punti
		cout << "Immettere le coordinate del primo punto: " << endl;
		cout << "x1: ";
		cin >> x1;
		cout << "y1: ";
		cin >> y1;
		cout << endl;
		cout << "Immettere le coordinate del secondo punto: " << endl;
		cout << "x2: ";
		cin >> x2;
		cout << "y2: ";
		cin >> y2;
		cout << endl;

		// Calcolo della distanza
		d = distanza(x1, y1, x2, y2);

		// Visualizzazione del risultato
		cout << "La distanza tra i due punti vale: " << d << endl;

		do {
			cout << endl;
			cout << "Calcolare un'altra distanza (s/n)? ";
			cin >> continua;
			cout << endl;
			if ((continua != 's') && (continua != 'n'))
				cout << "Attenzione: inserire s per continuare, n per uscire" << endl;
		} while ((continua != 's') && (continua != 'n'));

	} while (continua != 'n');

	return 0;
}


double distanza(double x1, double y1, double x2, double y2) {
	double sum = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	return sqrt(sum);
}