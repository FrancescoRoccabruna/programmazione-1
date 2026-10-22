#include <iostream>
using namespace std;

int somma(int valore){
    if(valore==0){
        return 0;
    }else{
        return valore%10 + somma(valore/10);
    }
}

int main(){
    int valore;

    cin >> valore;

    cout << somma(valore) << endl; 

    return 0;
}