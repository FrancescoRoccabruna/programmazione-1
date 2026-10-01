#include <iostream>
using namespace std;

int main(){
    int a,b;
    int max,min;
    cout << "Inserisci valori interi per a e b: " << endl;
    cin >> a >> b;
    /*if(a>b){
        max=a;
        min=b;
    }else{
        max=b;
        min=a;
    }*/

    max = a*(a>=b) + b*(b>a);
    min = a*(a<b) + b*(b<=a);

    cout << "Max: " << max << " Min: " << min << endl;
    return 0;
}