#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void inizializza(int array[], int dim);
void stampa(const int array[], int dim);
double mediaMaxMin(const int array[], int&, int&);

int main() {

    const int dim = 10;
    int array[dim];

    srand(time(NULL));

    inizializza(array, dim);
    stampa(array, dim);
    mediaMaxMin(array, dim);

    return 0;
}

void inizializza(int array[], int dim) {

    for (int i = 0; i<dim; i++) {
        array[i] = rand() % 10;
    }
}

void stampa(const int array[], int dim) {

    for (int i = 0 ; i < dim ; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

double mediaMaxMin(const int array[], int dim, int& min, int& max) {

    double somma = 0;
    int valore = 0;
    max = array[0];
    min = max;


    for (int i = 0 ; i < dim ; i++) {

        valore = array[i];
        somma += valore;

        if (valore > max) {
            max = valore;
        }
        if (valore < min) {
            min = valore;
        }
    }

    return (somma/dim);

}

