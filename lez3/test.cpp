#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Inserisci valori interi per a e b: " << endl;
    cin >> a >> b;

    int arsen = 12;
    //char arsen = 12;
    cout << arsen << endl;
    int *ciao = &arsen;

    cout << *ciao << endl;

    *ciao = 14;


    cout << arsen;

    cout << "\n";
    // a=3 b=7

    a+=b;
    //b-=a
    b=a-b;
    a-=b;

    cout << "a: " << a << " b: " << b << endl;
}