#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void inizializza(int array[], int dimension){
    srand(time(nullptr));


    for (int i = 0; i < dimension; i++){
        array[i] = rand() % (9 - 0 + 1) + 0;
    }
    
}

double calcolone(int array[], int dimension, int &max, int &min){
    double media = 0;
    max = array[0];
    min = array[0];


    for (int i = 0; i < dimension; i++){
        media += array[i];

        max = array[i] > max ? array[i] : max;
        min = array[i] < min ? array[i] : min;
    }

    media = media / dimension;

    return media;
}

void stampa(int array[], int dimension){
    for (int i = 0; i < dimension; i++){
        cout << array[i] << endl;
    }
}

int main(){

    int a[5];

    inizializza(a, 5);

    stampa(a, 5);

    int min, max;

    double media = calcolone(a, 5, max, min);

    cout << "Min: " << min << ", Max: " << max << ", Media: " << media << endl;

    
}