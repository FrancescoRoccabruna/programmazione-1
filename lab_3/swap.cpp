#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b;

    cout << "INSERISCI a, b" << endl;
    cin >> a >> b;

    a += b;

    b = a - b;

    a = a - b;

    cout << "a: " << a << " b: " << b << endl;


    return 0;
}


