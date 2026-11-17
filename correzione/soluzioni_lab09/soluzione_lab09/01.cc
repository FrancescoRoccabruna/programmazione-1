#include<iostream>
using namespace std;

int divisione (int, int, int&);

int main(){
    int dividendo, divisore, resto;
    int segno = 1;
    cout<<"Dividendo: ";
    cin>>dividendo;

    cout<<"Divisore: ";
    cin>>divisore;

    if (divisore == 0){
       cout<<"Attenzione! Divisione per zero";
       exit(1);
    }

    if (dividendo < 0 && divisore > 0){
        dividendo = -dividendo;
        segno = -1;
    }

     else if (dividendo > 0 && divisore < 0){
        divisore = -divisore;
        segno = -1;
    }

    else if (dividendo < 0 && divisore < 0){
        divisore = -divisore;
        dividendo =- dividendo;
    }

    int quoziente = divisione(dividendo, divisore, resto);

    cout<<"Quoziente: "<<quoziente*segno<<" e il resto"<<resto;

    return 0;
}

int divisione (int dividendo, int divisore, int& resto){
    int value = 0;

    if (dividendo < divisore) {
        resto = dividendo;
        value = 0;

    }

    else {
        dividendo = dividendo - divisore;
        value = 1 + divisione (dividendo, divisore, resto);

    }

return value;


}