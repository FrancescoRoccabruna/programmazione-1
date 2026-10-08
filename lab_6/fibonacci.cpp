#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int intero, risultato, f_0= 0, f_1 = 1, tmp = 0;

    cout << "immetti un intero: ";
    cin >> intero;

    for (int i = 1; i<intero; i++){
        tmp = f_0;
        f_0 = f_1;

        f_1 = tmp + f_0;
    }

    risultato = f_1;

    cout << risultato << endl; 
}

