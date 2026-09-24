#include <iostream>
using namespace std;

int main(){
    /*for(int i=0; i<5; i++){
        cout << "sono la i al passaggio: " << i << endl;
    }

    for(int i=0; i<5; ++i){
        cout << "sono la i al passaggio: " << i << endl;
    }*/

    int val1=6, val2=6;
    int i1=val1++, i2=++val2;
    int j1 =++val1, j2=++val2;
    cout << "valore1: " << val1 << endl;
	cout << "valore2: " << val2 << endl;
	cout << "i1: " << i1 << " i2: " << i2 << endl;
    cout << "j1: " << j1 << " j2: " << j2 << endl;

    return 0;
}