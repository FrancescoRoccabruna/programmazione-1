#include <iostream>

using namespace std;

void stampa(int value){

    int out;

    if (value <= 0){
        out = 0;
    } else {
        if (value%2 == 0){
            out = 0;
        } else {
            out = 1;
        }

        stampa(value/2);
    }

    cout << out;
}


int main(){

    int value;

    cin >> value;

    stampa(value);
    cout << endl;

    return 0;
}