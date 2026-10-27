#include <iostream>
using namespace std;

int potenza (int base, int pot){
    if(pot == 0){
        return 1;
    }else{
        return base * potenza(base, pot-1);
    }
}

int main(){
    int m=0, n=0;

    do{
        cout << "Inserire una base intera e la sua potenza positiva" << endl;
        cin >> m >> n;
    }while(n<0);
    

    cout << potenza(m,n) << endl;
}