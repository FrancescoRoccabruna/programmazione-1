#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inizializza_array (int a[], int n, int max_val) {

    for (int i=0; i < n; i++) {
        a[i] = rand() % (max_val + 1);
    }

}


void stampa(int a[], int b[], int n) {
    cout << "a[] --> [ ";
    for (int i = 0; i < n; i++) {
        cout << a[i];
        
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;

    cout << "b[] --> [ ";
    for (int i = 0; i < n; i++) {
        cout << b[i];
        
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl;  
}

int ugualianza (int a[], int b[], int n) {
    int m=0;
    for (int i=0; i<n; i++){
        if (a[i] == b[i]){
            m++;
        }
    }
    return m;

}


int main() {

    srand(time(nullptr));

    const int n = 5;
    int a[] = {3, 4, 0, 8, 6};
    int b[] = {4, 9, 0, 3, 6};


    int r = ugualianza(a, b, n);

    stampa(a, b ,n);

    inizializza_array(a, n, 9);

    cout << r << endl;
    

    return 0;



}