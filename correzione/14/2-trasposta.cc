#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

void init(int matrix[][COLS]);
void printMatrix(const int matrix[][COLS]);
void transposeMatrix(const int matrix[][COLS], int tMatrix[][ROWS]);
void printTransposedMatrix(const int matrix[][ROWS]);

int main()
{

    int matrix[ROWS][COLS];
    int tMatrix[COLS][ROWS];

    srand(time(NULL));

    init(matrix);
    printMatrix(matrix);
    transposeMatrix(matrix, tMatrix);
    printTransposedMatrix(tMatrix);

    return 0;
}

void init(int matrix[][COLS])
{
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            matrix[r][c] = rand() % 10;
}

void printMatrix(const int matrix[][COLS])
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void transposeMatrix(const int matrix[][COLS], int tMatrix[][ROWS])
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            tMatrix[c][r] = matrix[r][c];
        }
    }
}

void printTransposedMatrix(const int matrix[][ROWS])
{
    for (int c = 0; c < COLS; c++)
    {
        for (int r = 0; r < ROWS; r++)
        {
            cout << matrix[c][r] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
