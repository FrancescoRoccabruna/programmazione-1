#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



void b (int m[], int dimenzione) {
    srand(time(nullptr));

    for (int i=0; i<dimenzione; i++){
        m[i] = rand() % (9 - 0 + 1) + 0;
    }

}

void stampa (int *m, int dimenzione) {

    for (int i = 0; i < dimenzione; i++) {
        cout << *(m+i) << ", ";
    }

    cout << "\n";

}


int main (){

    const int m=10;
    int mat[m];
    b(mat,m);
    stampa(mat,m);
    

    
}