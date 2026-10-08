#include <iostream>
using namespace std;

int main(){
    int n;
    int f=0, f_p=1;
    int temp;

    cout << "inserire il numero di volte che viene eseguito fibonacci: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout << f << " ";
        temp = f;
        f    = f_p;
        f_p  = f_p + temp;
    }
    cout << endl;

    return 0;
}