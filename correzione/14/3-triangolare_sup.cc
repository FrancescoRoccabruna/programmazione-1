#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 4;

void init(int matrix[][COLS]);
void print(const int matrix[][COLS]);
int sumElements (const int matrix[][COLS]);

int main() {

    srand(time(NULL));

    int matrix[ROWS][COLS];

    init(matrix);
    print(matrix);

    cout<<"La sum degli elementi contenuti nella matrice triangolare superiore e':" << sumElements(matrix);;

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

int sumElements (const int matrix[][COLS]){
    int sum = 0;

    for (int r = 0; r < ROWS; r++) 
        for (int c = r; c < COLS; c++)
            sum += matrix[r][c];
    return sum;
}