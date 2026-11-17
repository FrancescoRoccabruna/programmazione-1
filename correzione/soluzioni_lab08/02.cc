#include <iostream>
using namespace std;

double trova_minimo(double, double, double);
double trova_massimo(double, double, double);
double differenza(double, double, double);


int main() {
    double num1 = 0.0, num2 = 0.0, num3 = 0.0, d = 0.0;

    // Acquisizione dell'input
    cout << "Inserisci tre numeri: " << endl;
    cout << "Primo numero: ";
    cin >> num1;
    cout << "Secondo numero: ";
    cin >> num2;
    cout << "Terzo numero: ";
    cin >> num3;

    // Chiamata della funzione differenza
    d = differenza(num1, num2, num3);

    // Visualizzazione del risultato
    cout << "La differenza tra il numero piu' grande e il piccolo vale: " << d << endl;
    return 0;
}

double trova_minimo(double a1, double a2, double a3) {
    double minimo = a1;
    if (a2 < minimo)
        minimo = a2;
    if (a3 < minimo)
        minimo = a3;
    return minimo;
}

double trova_massimo(double a1, double a2, double a3) {
    double massimo = a1;
    if (a2 > massimo)
        massimo = a2;
    if (a3 > massimo)
        massimo = a3;
    return massimo;
}

double differenza(double a1, double a2, double a3) {
    double minimo = 0.0, massimo = 0.0, diff = 0.0;
    minimo = trova_minimo (a1, a2, a3);
    massimo = trova_massimo (a1, a2, a3);
    diff = massimo - minimo;
    return diff;
}
