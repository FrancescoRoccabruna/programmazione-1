#include <iostream>
using namespace std;

double potenza2(int base, int esponente) {
	double res = 0;
	if (esponente > 0)
		res = base * potenza2(base, esponente - 1);
	else if (esponente < 0)
		res = (1.0 / base) * potenza2(base, esponente + 1);
	else
		res = 1;

	return res;
}


int main()
{
	int n = 0;
	int m = 0;
	char c = 'n';

	

	do{

		cout << "Inserire il valore della base: ";
		cin >> m;
		cout << "Inserire il valore dell'esponente: ";
		cin >> n;

		cout << m << " elevato alla " << n << " vale " << potenza2(m, n) << endl;
	
	do{
	  cout << "Continuare (s/n)? ";
	  cin >> c;
			if (c != 's' && c != 'n')
				cout << "Attenzione: inserire s oppure n"<<endl;;
		} while (c != 's' && c != 'n');}

    while (c=='s');
	return 0;
}


