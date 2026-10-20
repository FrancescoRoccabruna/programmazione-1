#include <iostream>
using namespace std;

int prelievo(int richiesta, float &saldo,int commissioni){

    saldo-= (richiesta + ((richiesta * 2)/100));

    return 0;

}

//prelievo minimo 1 euro
int main(){
    const int comm=2;
    float saldo = 1800.0;
    int pre=0;
    int rotta = (pre * 2)/100;

    if(saldo >=1 && saldo-rotta>=0){
        prelievo(pre, saldo, comm);
        cout << "Saldo: " << saldo << endl;
        cout << "Commissioni: " << rotta << endl;
        return 1;
    }else if(pre <=0){
        return 0;
    }else{
        return 0;
    }


}