#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



void b (int m[], int d1, int d2) {
    srand(time(nullptr));

    for (int i=0; i<d1; i++){
        for (int j = 0; j<d2; j++){
            m[i][j] = rand() % (9 - 0 + 1) + 0;
        }
    }

}

void stampa (int m[][N_ROW], int nCol) {

    for (int i = 0; i < N_ROW; i++) {
        for (int j = 0; j < N_ROW; j++){
            cout << *(*m+i)+j << ", ";
        }

    }

    cout << "\n";

}

void 


int main (){

    const int N_ROW = 3;
    const int N_COL = 4;
    int mat[m];
    b(mat,m);
    stampa(mat,m);
    

    
}