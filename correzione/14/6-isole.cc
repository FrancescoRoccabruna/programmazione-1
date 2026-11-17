#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS   = 10;
const int COLS = 10;

//la probabilità che venga generato una cella di terra (1) invece che di acqua (0)
const int LAND_P = 30;

void init(int matrix[][COLS]);
void print(const int matrix[][COLS]);
int  enumerateIslands(const int matrix[][COLS]);
bool  checkIFIsland(const int matrix[][COLS], int row, int col);

int main() {
    int matrix[ROWS][COLS];

    srand(time(NULL));

    init(matrix);
    print(matrix);

    int totalIslands = enumerateIslands(matrix);
    cout << "La matrix ha " << totalIslands << " isole." << endl;

    return 0;
}

void init(int matrix[][COLS]) {
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            //estraggo se terra (1) o a acqua (0) in base ad una probabilità
            int isLand = rand() % 99;
            matrix[r][c] = isLand<LAND_P? 1: 0;
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

int enumerateIslands(const int matrix[][COLS]) {
    int countIslands = 0;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            //se è terra controlla se è anche isola
            if (matrix[r][c] == 1) {
                countIslands += checkIFIsland(matrix, r, c) ? 1: 0;
            }
        }
    }
    return countIslands;
}

bool checkIFIsland(const int matrix[][COLS], int row, int col) {
    int sumLand = 0;

    for (int r = row - 1; r <= row + 1; r++) {
        for (int c = col - 1; c <= col + 1; c++) {
            if ((r >= 0) && (r < ROWS) && 
                (c >= 0) && (c < COLS)) {
                sumLand += matrix[r][c];
            }
        }
    }
    return sumLand == 1 ? true : false;
}