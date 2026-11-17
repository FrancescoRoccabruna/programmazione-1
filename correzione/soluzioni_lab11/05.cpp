#include <iostream>
#include <cmath>
using namespace std;

long int fattoriale(long int n)
{ 
	if (n > 1) 
		return n * fattoriale(n - 1); 
	else 
		return 1; 
} 

double sin_taylor(double x, long int n)
{ 
	if (n >= 0) {
		return ((pow(-1.0, n) * pow(x, 2.0 * n + 1.0) / fattoriale(2 * n + 1)) + sin_taylor(x, n - 1)); 
	} else 
		return 0; 
} 

int main ()
{
	double x = 0.0;
	int n = 0;
	char c = 'n';

	do {
		cout << "Inserire il punto x intorno al quale calcolare l'approssimazione in serie di Taylor: ";
		cin >> x;
		cout << "Inserire il grado n dell'approsimazione: ";
		cin >> n;
		cout << endl;

		cout << "Il valore approssimato di sin(" << x << ") e': " << sin_taylor(x, n) << endl;
		cout << endl;
		do {
			cout << "Continuare (s/n)? ";
			cin >> c;
			if (c != 's' && c != 'n')
				cout << "Attenzione: inserire s oppure n";
		} while (c != 's' && c != 'n');
	} while (c == 's');
	
	return 0;
}
