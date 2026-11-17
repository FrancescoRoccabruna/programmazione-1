#include <iostream>

using namespace std;

const int ROWS = 5;
const int COLS = 6;

void print(const int matrix[ROWS][COLS]);
bool findPath(int swamp[][COLS], int i, int j, int path[]);
bool exploreSwamp(int swamp[][COLS], int path[]);
void showPath(int swamp[][COLS], int path[]);

int main()
{
    int swamp1[ROWS][COLS] = {
        {1, 0, 0, 1, 0, 0},
        {1, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 1, 1},
        {0, 0, 1, 1, 1, 0},
        {0, 1, 0, 0, 1, 0}};
    
    int swamp2[ROWS][COLS] = {
        {1, 0, 0, 1, 1, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 1, 1, 1},
        {0, 0, 1, 1, 0, 0},
        {0, 1, 0, 0, 1, 0}};

    int path[COLS] = {0};

    cout << "Palude: " << endl
         << endl;

    print(swamp1);

    if (exploreSwamp(swamp1, path))
        showPath(swamp1, path);
    else
        cout << "Non ci sono percorsi che attraversano la palude sulla terraferma" << endl;
    return 0;
}

void print(const int matrix[ROWS][COLS])
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

bool exploreSwamp(int swamp[][COLS], int path[])
{
    bool found = false;
    for (int i = 0; i < ROWS && !found; i++)
    {
        if (findPath(swamp, i, 0, path))
        {
            found = true;
        }
    }
    return found;
}

bool findPath(int swamp[][COLS], int i, int j, int path[])
{
    bool found = false;

    // Verifica se abbiamo raggiunto l'ultima c
    if (j == COLS)
    {
        found = true;
    }
    else if (i >= 0 && i < ROWS && swamp[i][j] == 1)
    { // Controlla limiti e presenza di "terra"

        path[j] = i; // Memorizza la posizione corrente

        // Prova matrix muoversi in tre direzioni e aggiorna `found` se uno dei percorsi ha successo
        if (!found)
        {
            found = findPath(swamp, i - 1, j + 1, path) || // sopra
                    findPath(swamp, i, j + 1, path) ||     // dritto
                    findPath(swamp, i + 1, j + 1, path);   // sopra
        }
    }
    return found;
}

void showPath(int swamp[][COLS], int path[])
{
    cout << "Cammino trovato nelle righe (per ogni c): ";
    for (int j = 0; j < COLS; j++)
    {
        cout << path[j] << " ";
    }
    cout << endl;

    cout << "Percorso che attraversa la palude sulla terraferma:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (path[j] == i)
                cout << "* ";
            else
                cout << "- ";
        }
        cout << endl;
    }
}
