#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;

    cout << "INSERISCI a, b, c" << endl;
    cin >> a >> b >> c;

    float delta = b*b - 4*a*c;

    float x1 = (-b + sqrt(delta))/(2*a);
    float x2 = (-b - sqrt(delta))/(2*a);

    cout << "x1: " << x1 << " x2: " << x2 << endl;

    return 0;
}


