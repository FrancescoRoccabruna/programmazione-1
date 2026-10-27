#include <iostream>
using namespace std;

/*int main(){
    long magic(int n, int pos, long acc = 0){
        if (n == 0)
            return acc;
        int cifra = n % 10;
        long potenza = 1;
        for (int i = 0; i < pos; ++i)
            potenza *= cifra;
        return magic(n / 10, pos + 1, acc + potenza); 
    }
}*/

int main(){

    int n        = 234;
    int pos      = 1;
    int acc      = 0;
    int cifra    = 0;
    long potenza = 0;

    while(n!=0){
        cifra    = n % 10;
        potenza  = 1;
        for (int i = 0; i < pos; ++i){
            potenza *= cifra;
        }
        n   /=10;
        pos +=1;
        acc +=potenza;

    }

    cout << "Acc: " << acc << endl;

    return 0;
}