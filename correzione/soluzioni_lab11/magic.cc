#include<iostream>
using namespace std;

long magic(int n, int pos, long acc = 0){

     if (n == 0) return acc; 

     int cifra = n % 10; 
     long potenza = 1; 
     for (int i = 0; i < pos; ++i) 
          potenza *= cifra; 

     return magic(n / 10, pos + 1, acc + potenza); }




long magic_iter(int n, int pos) {  
    int acc = 0;   
    while (n > 0) {        
        int cifra = n % 10;       
        int pot = 1;       
    for (int i = 0; i < pos; ++i)            
        pot *= cifra;        
    acc += pot;       
    n /= 10;        
    ++pos;    }   
 return acc;}

int main(){

    int numero, pos;
    cout << "Inserisci un numero intero: ";
    cin >> numero;

    cout << "Inserisci la potenza di partenza: ";
    cin >> pos;
    cout  << magic(numero, 1) << " " <<magic_iter(numero, 1)<<endl;
    return 0;
 }