#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


const int N_ROW=3;
const int N_COL=4;


void inizializza(int mat[][N_ROW], int nCol){
    srand(time(nullptr));

    for(int i=0; i<N_ROW; i++){
        for(int j=0; j<nCol; j++){
            mat[i][j]=rand() % (9 - 0 + 1) + 0;
        }
    }
}

void stampa(int **mat,int N_ROW, int N_COL){
    for(int i=0;i<N_ROW;i++){
        for(int j=0;j<N_ROW;j++){
            cout << *(*(mat+i)+j) << endl;
        }
    }
}

int main(){
    const int N= 10;
    int array[N_ROW][N_COL];
    inizializza(array,N_ROW);

    int *puntaMatrice[N_COL]=array;

    stampa(puntaMatrice,N_ROW,N_COL);
    
}