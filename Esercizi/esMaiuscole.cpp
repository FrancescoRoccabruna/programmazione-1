#include <iostream>
using namespace std;

int main(){
    char a;
    int diff;
    cout << "Inserire una lettera: ";
    cin  >> a;
    "\n";
    if(a>= 'a' && a<='z'){
        diff = (a - ('a'-'A'));
        cout << "Lettera maiuscola: " << (char)diff << endl;
        //cout << "valore ASCII lettera: " << (int)a << endl;
    }else if(a>= 'A' && a<='Z'){
        diff = (a + ('a'-'A'));
        cout << "Lettera minuscola: " << (char)diff << endl;
        //cout << "valore ASCII lettera: " << (int)a << endl;
    }else{
        cout << "Il valore non è una lettera!" << endl;
    }
    
    return 0;

}