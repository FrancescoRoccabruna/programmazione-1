#include <iostream>
using namespace std;
#include <cmath>

int divisione(int a, int b, int &resto){
    int quoz=a * pow(b,-1);
    resto=a%b;
    return quoz;
}

int main(){
    int a, b;
    int quoziente = 0, resto=0; 
    cout << "Dare 2 valori interi ad a e b: " << endl;
    cin >> a >> b;

    quoziente = divisione(a,b,resto);

    cout << quoziente << endl;
    cout << resto << endl;
}