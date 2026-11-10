#include <iostream>
using namespace std;

int main() {

    int a = 0;

    cout << "Inserisci numero: " << endl;

    cin >> a;

    int precedete = 0;
    precedete = --a;
    cout << "Precedete: " << precedete << endl;


    int successivo = 0;
    //successivo = ++a + 1;
    successivo = ++(++a);
    cout << "Successivo: " << successivo << endl;



}