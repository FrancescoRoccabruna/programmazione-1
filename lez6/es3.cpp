#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int contacifre = 0;
    do{
        cout << "Inserire un numero intero positivo: " << endl;
        cin >> num;
    }while (num <= 0);

    while (num > 0){
        num/=10;
        contacifre++;
    };

    cout << "Il numero ha: " << contacifre << " cifra/e" << endl;

    return 0;
}