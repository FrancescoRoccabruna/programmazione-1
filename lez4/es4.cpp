#include <iostream>
using namespace std;

int main(){
    int a,b;
    bool ris;
    cout << "Inserire valori interi per a e b: " << endl;
    cin >> a >> b;

    ris=!(a-b);
    cout << ris << endl;
}