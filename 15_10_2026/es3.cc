#include <iostream>
using namespace std;

int main() {

    // 1. 
    int a = 0; 
    int b = 0;

    // 2. dicchiariamo le variabili c1-c4 e lop inizializzamo a 0
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    // 3. riferimento di allias 
    int &r = a;  

    // puntatore che punta as un puntatore
    int *pa = &a;

    int *pb = &b;

    /*4. Dichiari le variabili puntatore pa e pb che puntino alle 
    variabili a e b e la variabile
    puntatore ppa che punti al puntatore pa;*/
    int **ppa = &pa ;

    //puntatore a costante
    const int *pca = &a;

    cout << "Inserisci a  e b: " << endl; 

    cin >> a >> b;

    cout << "Hai inserito i valori: " << *pa << *pb << endl; 

    cout << "In puntatori pa e  e pb valgono: " << pa << pb << endl;

    cout << "In valore puntato sa pca vale: " << *pca << endl;

    cout << "Valore della variabile puntata dal puntatore al quale punta ppa: " << **ppa << endl;

    /*-------------------------------------------------------------------------------------------*/

    cout << "----------------------------------------------------------------------" << endl;

    c1 = *pa;
    c2 = **ppa;
    c3 = *pca;
    c4 = r;


    cout << c1 << endl << c2 << endl << c3 << endl << c4 << endl;

    a+=3;
    cout << "Somma di a: " << a << endl;

    *pa+=3;
    cout << "Somma di pa: " << a << endl;

    **ppa+=3;
    cout << "Somma di ppa: " << a << endl;

    // e una allias di a 
    r+=3;
    cout << "Somma di r: " << a << endl;


    /*-------------------------------------------------------------------------------------------*/

    cout << "----------------------------------------------------------------------" << endl;

    a=c1;
    cout << "a = c1: " << a << endl;
    pa=pb;
    cout << "pa = pb punta a b: " <<  *pa << endl;


    a+=3;
    cout << "a: " <<a << endl;

    *pa+=3;
    cout << "pa: " << a << endl;

    **ppa+=3;
    cout << "ppa: " << a << endl;
    
    r+=3;
    cout << "r: " << a << endl;

    cout << b << endl;

    //*pca+=5;

    //cout << *pca << endl;

    return 0;

}