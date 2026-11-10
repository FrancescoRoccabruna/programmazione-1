#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Oggi abbiamo fatto algebra dei puntatori per accedere alle matrici
// Le matrici si possono definire così int **m;
// int **m  non è la stessa cosa di  int m[2][3]
// Ad uno definisci solo cos è, all'altro gli dici anche le dimensioni 
// int *m[2] --> array di puntatori a int con 2 celle
// in pratica sono 2 righe e un numero indefinito di colonne
// se fai m[0]={1,2,3} le seguenti righe possono avere più o meno colonne 
// esempio:  m[1]={4,5,6,7,8,9}
// int fun(int m[][3], unsigned int dim1) --> bisogna specificare il numero di righe tramite dim1 


void inizializza(int array[], int dimensione){
    srand(time(nullptr));

    for(int i=0; i<dimensione; i++){
        array[i]=rand() % (9 - 0 + 1) + 0;
    }
}

void stampa(int *array,int dim){
    for(int i=0;i<10;i++){
        cout << *(array+i) << endl;
    }
}

int main(){
    const int N= 10;
    int array[N];
    inizializza(array,N);

    stampa(array,N);
    
}