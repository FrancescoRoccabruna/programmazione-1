#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Inserire valori interi per a, b e c: " << endl;
    cin >> a >> b >> c;
    
    /*if (a==b && b==c){
        cout << a << "=" << b << "=" << c << endl;
    }else if(a>b && b>c){
        cout << a << ">" << b << ">" << c << endl;
    }else if(b>a && a>c){
        cout << b << ">" << a << ">" << c << endl;
    }else if(c>a && a>b){
        cout << c << ">" << a << ">" << b << endl;
    }else{
        cout << c << ">" << b << ">" << a << endl;
    }*/
    if(a<b && a<c){
        cout << a << endl;
    }else if(b<c){
        cout << b << endl;
    }else{
        cout << c << endl;
    }

    return 0;
}