#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Inserisci i 3 numeri interi: " << endl;
    cin >> a >> b >> c ;

    if (a < b && a < c){
        cout << "minore: " << a << endl;
    }else if (b < c){
        cout << "minore: " << b << endl;
    }else{
        cout << "minore: " << c << endl;
    }


}
