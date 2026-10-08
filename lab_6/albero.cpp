#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int intero = 0;

    

    do {
        cout << "immetti un intero positivo: ";
        cin >> intero;
    } while (intero < 0);



    for (int i = 0; i < intero; i++)
    {
        for (int h = 0; h < (intero/2 - i - 1); h++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            
            cout << "*";
        }
        cout << endl;
    }
    

}

