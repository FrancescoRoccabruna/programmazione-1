#include <iostream>
using namespace std;
#include <cmath>

int somma(int int1, int int2){
    int somma=int1+int2;
    return somma;
}

float distanza(int xA, int yA, int xB, int yB){
    return sqrt((xA-xB)*(xA-xB) + (yB-yA)*(yB-yA));
}

int main(){
    int xA, yA, xB, yB;

    cout << "inserie le coordinate per il punto A" << endl;
    cin >> xA >> yA;
    cout << "inserie le coordinate per il punto B" << endl;
    cin >> xB >> yB;

    cout << "Distanza tra A e B: " << distanza(xA, yA, xB, yB) << endl;
    
    
    
    
    //int a=1,b=4;
    //cout << "Somma: " << somma(a,b) << endl;
    return 0;
}