#include <iostream>
using namespace std;

double capitale_maturato(double alpha, int n, double gamma, double sigma) {
    if (n <= 0)
        return alpha;
    else
        return (1 + gamma) * capitale_maturato(alpha, n - 1, gamma, sigma) - sigma;
}

int main() {
    int k = 0;
    cout << "Inserire il numero di mesi corripondenti alla durata dell'investimento: ";
    cin >> k;
    if (k < 6) {
        cout << "Attenzione: la durata minima dell'investimento e' di 6 mesi" << endl;
        return -1;
    }
    double c = capitale_maturato(25000.0, k, 0.0015, 1.0);
    cout << "Il capitale maturato dopo " << k << " mesi e' pari a " << c << " Euro" << endl;
    return 0;

}