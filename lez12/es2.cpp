#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void inizializza(int array[], int dimensione){
    srand(time(nullptr));

    for(int i=0; i<dimensione; i++){
        array[i]=rand() % (9 - 0 + 1) + 0;
    }
}

void stampa(int array[],int dimensione){
    for(int i=0; i<dimensione; i++){
        cout << array[i] << ", " << endl;
    }
}

double tripla_M(int array[], int dimensione, int &max, int &min){
    double media=0;
    max=array[0];
    min=array[0];
    for(int i=0; i<dimensione; i++){
        media+=array[i];

        if(array[i] > max){
            max=array[i];
        }
        if(array[i] < min){
            min=array[i];
        }

        max = array[i] > max ? array[i] : max;
        min = array[i] < min ? array[i] : min;

    }
    media/=dimensione;

    for(int i=0;i<dimensione;i++){

        if(array[i]>max){

        }
    } 

    return media;
}

int main(){
    int array[5];
    int max=0, min=0;

    inizializza(array, 5);

    stampa(array, 5);

    cout << tripla_M(array, 5, max, min) << ", Max: " << max << ", Min: " << min << endl;


    return 0;
}