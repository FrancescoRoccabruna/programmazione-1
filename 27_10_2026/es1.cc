#include <iostream>
using namespace std;


/*long magic(int n, int pos, long acc = 0){
    if (n == 0)
        return acc;
    int cifra = n % 10;
    long potenza = 1;
    for (int i = 0; i < pos; ++i)
        potenza *= cifra;
    return magic(n / 10, pos + 1, acc + potenza); 
}*/

int main() {

    int n = 234;
    int pos = 1;
    long acc = 0;

    
    while (n != 0){
        int cifra = n % 10;
        long potenza = 1;

        for (int i=0; i<pos; i++){
            potenza *= cifra;
        }

        n = n / 10 ; 
        pos = pos + 1 ; 
        acc = acc + potenza;

    }

    cout << acc << endl;


}