#include <iostream>
using namespace std;

double test(double a[], int n, int d){ 
    double r = 0.0;
    for (int h = 0; h <= (n - d); h += d) {
        double s = 0.0;
    for (int k = h; k < (h + d); k++)
        s += a[k];
        r += (s / d);
    }
    return r;
}

int main() {
    double v[] = {2, 0, 4, 2, 1, 3};
    double q = test(v, 6, 2);

    cout << q << endl;
    v[1] = q; v[3] += q;
    q = test(v, 6, 3);
    cout << q << endl;
    
    return 0;
}