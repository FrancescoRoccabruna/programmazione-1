#include <iostream>
using namespace std;

int main() {


    int i;
    int n;
    int f_p = 1;
    int f = 0;
    int temp;

    cout << "Inserisci il numero per fibonacci" << endl;

    cin >> n ;

    for (i=0; i<n; i++){
        cout << f << " " ;
        temp = f;
        f = f_p;
        f_p = f_p + temp;

    }
    cout << endl;

    //cout << "Fibonacci: " << temp << "\n" << endl;


    cout << "Fibonacci: " << f << endl;




}