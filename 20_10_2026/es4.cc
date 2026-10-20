#include <iostream>
using namespace std;

int divisione(int &n1, int &n2,int q, int r){
    q = 0;

    if (n1 == 0) {
        cout << "errore" << endl;
    }

    while (n1 <= n2){
        n1 -= n2;
        q++;
    }
    


}

int main() {

    // n1 --> dividenso

    // n2 --> divisore

    int n1, n2;
    int q = 0;
    int r = 0;


    return 0;
}