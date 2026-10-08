#include <iostream>
using namespace std;

int main() {

    float x = 0.0;
    float y = 0.0;

/*    cout << "Inserisce le cordinate reali di x e y: " << endl;

    cin >> x >> y ;*/

    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    float d = 0.0;

    cout << "x = AB" << endl;
    cin >> a >> b ;

    cout << "y = CD" << endl;

    cin >> c >> d;

    if ((a>=c) || (d>=b)) {
        cout << "Attenzione! Rettangolo non valido" << endl;
        exit(1);

    }



    cout << "Inserisce le cordinate reali di x e y: " << endl;

    cin >> x >> y ;

    if (((x>a) && (x<c)) && ((y>d) && (y<b))){
        cout << "Punti intero " << endl;

    }else{
        cout << "Punto esterno" << endl;
    }


}