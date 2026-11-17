#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS   = 3;
const int COLS = 3;

void init(int matrix[][COLS]);
void print(const int matrix[][COLS]);
int  sarrus(const int matrix[][COLS]);
int  diagonalValue(const int matrix[][COLS],
                         int       startingCol,
                         bool      inverted);

int main() {
    srand(time(NULL));

    int matrix[ROWS][COLS];

    init(matrix);
    print(matrix);

    int determinant = sarrus(matrix);
    cout << "Il determinante e' " << determinant << endl;

    return 0;
}

void init(int matrix[][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            matrix[r][c] = rand() % 10;
        }
    }
}

void print(const int matrix[][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int sarrus(const int matrix[][COLS]) {
    int sarrus = 0;
    for (int c = 0; c<COLS; c++){
        //sommo e sottraggo a sarrus la diagonale e la sua "inversa" di una cella
        sarrus += diagonalValue(matrix, c, false);
        sarrus -= diagonalValue(matrix, c, true);
    }
    return sarrus;
}

int diagonalValue(const int matrix[][COLS], int startingCol, bool inverted) {
    int diagonalValue = 1;
    int sign = inverted ? -1 : 1;


    for (int r = 0; r < ROWS; r++) {
        // muovo di r colonne in base a sign
        int c = (startingCol + r * sign);

        //gestione "uscita e rientro" dai bordi della matrice
        c = (c>=COLS) ? c % COLS : (c < 0) ? c + COLS : c; //es. di codice breve ma che perde in leggibilità
        
        diagonalValue *= matrix[r][c];
    }

    return diagonalValue;
}