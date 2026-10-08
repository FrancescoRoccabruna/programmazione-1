#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Inserisci i 3 numeri interi: " << endl;
    cin >> a >> b >> c ;

    while (b >= c) {
        cout << "Intervallo non coretto" << endl;
        cin >> b >> c;
    }

    if (a<b && a >=b) {
        cout << "1" << endl;
    }else if (a>c){
        cout << "0" << endl;
    }else{
        cout << "-1" << endl;
    }

}
