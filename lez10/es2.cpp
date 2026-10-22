#include <iostream>
using namespace std;

void binario(int valore){
    int ris;
    if(valore<=0){
        ris=0;
        
    }else{
       if(valore%2==0){
            ris=0;
        }else{
            ris=1;
        } 

        binario(valore/2);
    }

    cout << ris;
    
}

int main(){

    int valore=5;

    binario(valore);
    return 0;
}