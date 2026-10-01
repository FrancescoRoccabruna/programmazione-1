#include <iostream>
using namespace std;

int main(){
    int a,b;
    int ris;
    //bool var;
    cout << "Inserire dei valori interi per a e b: " << endl;
    cin >> a >> b;

    ris = a-b;
    /*if(ris<0){
        ris*=-1;
    }*/
    /*var=
    ris = ris*(0+var);*/

    ris = ris * ((a>b)-(a<b));
    
    cout << ris << endl;
    return 0;
}