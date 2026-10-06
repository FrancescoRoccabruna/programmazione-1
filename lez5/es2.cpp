#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "inserire valori per a, b e c: " << endl;

    cin >> a >> b >> c;

    while (b>=c){
        cout << "reinserire i vaori di b e c (b deve essere minore di c)" << endl;
        cin >> b >> c;
    }

    if (a<b){
        cout << "1" << endl;
    }else if(a>c){
        cout << "0" << endl;
    }else{
        cout << "-1" << endl;
    }

}