#include <iostream>
using namespace std;

int main() {
    int a[5] = {4, 2, 6, 1, 8};
    double x = 2.5;
    for (int* p = a; p < a + 5; p += 2)
    *p -= x;
    int& r = a[3];
    int* q = &a[1] + 1;
    r = a[3] + *q;
    for (int k = 0; k < 5; k++)
    cout << a[k] << " ";
    cout << endl;
    return 0;
}