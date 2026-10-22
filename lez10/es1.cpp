#include <iostream>
using namespace std;

int divisione(int dividendo, int divisore, int &resto){
    if(dividendo<divisore){
        resto=dividendo;
        return 0;
    }else{
        return 1 + divisione(dividendo-divisore,divisore,resto);
    }
}

int main(){
    int a,b;
    int resto;

    cin >> a >> b;

    if (b!=0){
        cout << "risultato: " << divisione(a,b,resto) << " resto: " << resto << endl;
    }else{
        cout << "Non va bene mettere lo 0 al divisore" << endl;
    }

    //cout << 33%5 <<endl; //3

    return 0;
}