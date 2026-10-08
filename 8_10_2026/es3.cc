#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int contacifre = 0;

    // 

    do {
        cout << "Inserire un intero positivo: ";
        cin >> num;

    } while (num<=0); 
    //
    while (num>0){
        num = num / 10;
        contacifre++ ;

    };

    cout << "Il numero ha: " << contacifre << " ";

    if (contacifre>1) {
        cout << "cifra: ";

    }else {
        cout << "cifra" ;
    }
    

    return 0;


}
