#include <iostream>
using namespace std;

int main() {

    int temperatura = 0;
    cout << "Inserisci la temperatura: " << endl;
    cin  >> temperatura;

    if (temperatura == 0){
        cout << "Siamo a zero" << endl; 
    }else if (temperatura > -10 && temperatura <= -1){
        cout << "Fa freddo" << endl;
    }else {
        cout << "Si salvi chi può!" << endl;
        return 0; 
    }
    
}