#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int ** generate_matrix(int rows, int cols)
{
    // 1. Alloco l'array di puntatori alle righe
    int **matrix = new (nothrow) int*[rows];
    if (matrix == NULL)
    {
        cout << "fatal memory error exit!!!" << endl;
        exit(1);
    }

    // 2. Per ogni riga, alloco l'array delle colonne e lo popolo
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new (nothrow) int[cols];
        if (matrix[i] == NULL)
        {
            cout << "fatal memory error exit!!!" << endl;
            exit(1);
        }

        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 100;
        }
    }

    return matrix;
}

int main(int argc, char *argv[])
{
    // Servono 3 argomenti: nome programma, rows, cols
    if (argc < 3)
    {
        cout << "Usage: random_matrix <rows> <cols>" << endl;
        exit(0);
    }

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    if (rows <= 0 || cols <= 0)
    {
        cout << "Le dimensioni date in input non sono valide!" << endl;
        exit(0);
    }

    srand(time(NULL));

    int **random_matrix = generate_matrix(rows, cols);

    // Stampa della matrice riga per riga
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << random_matrix[i][j] << " \t";
        }
        cout << endl;
    }

    // Deallocazione della memoria (prima le colonne di ogni riga, poi le righe)
    for (int i = 0; i < rows; i++)
    {
        delete[] random_matrix[i];
    }
    delete[] random_matrix;

    return 0;
}
