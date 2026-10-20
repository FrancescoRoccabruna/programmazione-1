#include <iostream>
using namespace std;

void f(int &a) {
    //a = 2;
    cout << a << endl;
}

void f_1(int &b){
    int *c = &b;
    b++;
    cout << b << endl;
}

void f_2(int *c) {
    cout << c << endl;
}

int main() {

    int a = 4, b = 9, c = 500;

    f(a);

    f_1(b);

    f_2(&c);


    return 0;
}