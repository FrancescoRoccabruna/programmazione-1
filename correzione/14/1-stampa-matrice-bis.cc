#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

const int ROWS = 4;
const int COLS = 4;

void init(int matrix[][COLS]);
void print(const int matrix[][COLS]);

void init_p(int *matrix, int rows, int cols);
void print_p(int *matrix, int rows, int cols);


int main() {

    srand(time(NULL));

    //matrice determinata in tempo di compilazione

    int matrix[ROWS][COLS];
    init(matrix);
    print(matrix);

    //matrice determinata in tempo di esecuzione

    int nRows = 0;
    int nCols  = 0;
    cout << "Inserisci le righe della matrice : ";
    cin >> nRows;
    cout << "Inserisci le colonne della matrice : ";
    cin >> nCols;

    int dMatrix[nRows][nCols];

    int* pMatrix = &dMatrix[0][0];

 
    init_p(pMatrix,nRows,nCols);
    print_p(pMatrix,nRows,nCols);

    return 0;
}

void init(int matrix[][COLS]) {
    for (int r = 0; r < ROWS ; r++) {
        for (int c = 0 ; c < COLS ; c++) {
            matrix[r][c] = rand() % 10;
        }
    }
}

void print(const int matrix[][COLS]) {
    for (int r = 0 ; r < ROWS ; r++) {
        for (int c = 0 ; c < COLS ; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void init_p(int *pMatrix, int rows, int cols) {
    for (int r = 0; r < rows ; r++) {
        for (int c = 0 ; c < cols ; c++) {
            *(pMatrix + r * cols + c) = rand() % 10;
        }
    }
}

void print_p(int *pMatrix, int rows, int cols) {
    for (int r = 0 ; r < rows ; r++) {
        for (int c = 0 ; c < cols ; c++) {
            cout << *(pMatrix + r * cols + c) << " ";
            
        }
        cout << endl;
    }
    cout << endl;
}
