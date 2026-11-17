#include <iostream>
using namespace std;

long potenza(int base, int esponente, long res = 1) {
	if (esponente == 0)
		return res;
	else
		return potenza (base, esponente -1, base*res);

}


int main()
{
	int n = 0;
	int m = 0;
	char c = 'n';

	do{
		cout << "Inserire il valore della base: ";
		cin >> m;

	do {
		
		cout << "Inserire il valore dell'esponente: ";
		cin >> n;

        if (m == 0 && n == 0) {
                cout << "Errore: 0 elevato a 0 e' indeterminato!" << endl;
            }

		else if (n >= 0)
			cout << m << " elevato alla " << n << " vale " << potenza(m, n) << endl;
	  }
	  while (n<0);
	
	do{
	  cout << "Continuare (s/n)? ";
	  cin >> c;
			if (c != 's' && c != 'n')
				cout << "Attenzione: inserire s oppure n"<<endl;;
		} while (c != 's' && c != 'n');}

    while (c=='s');
	return 0;
}


