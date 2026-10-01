#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout << "Inserisci a e b: " << endl;

    cin >> a >> b;

    int max = a * (a-b >= 0) + b * (b - a > 0);

    int min = a + b - max;





    cout << "max: " << max << " min: "<< min << endl;

    return 0;
}