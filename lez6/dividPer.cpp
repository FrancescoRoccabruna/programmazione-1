#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int cifre, dividendo, divisore;
    int temp, quoto, resto, fattore;
    cout << "Immetti dividendo, divisore e cifre: " << endl;
    cin  >> dividendo >> divisore >> cifre;
    fattore = pow(10,cifre);
    temp    = (dividendo*fattore)/divisore;
    quoto   = temp/fattore;
    //resto   = temp%fattore;
    resto   = (temp - quoto * fattore); 
    cout << dividendo << ":" << divisore << "=";
    cout << temp;
    cout << endl;
    
    cout << quoto << endl;

    cout << resto << endl;
}