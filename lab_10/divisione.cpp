#include <iostream>


using namespace std;


float divisione(int dividendo, int divisore, int &resto){

    if (dividendo < divisore){
        resto = dividendo;

        return 0;
    }
    else {
        return 1 + divisione(dividendo - divisore, divisore, resto);
    }

}

int main(){
    int a, b;

    do
    {
        cout << "Inserire dividendo e divisore: ";
        cin >> a >> b;
    } while (b == 0);
    
    int segno = ((a >= 0 && b > 0) || (a < 0 && b < 0));

    segno = segno * 2 - 1;

    if (a < 0){
        a *= -1;
    }

    if (b < 0){
        b *= -1;
    }

    int resto;

    cout << "Risultato: " << segno * divisione(a, b, resto) << ", Resto: " << resto << endl;


    return 0;
}