#include <iostream>
using namespace std;

int main() {

    char b = 'R'; char s = 'S';
    char& q = b;
    char* ps = &s;
    (*ps)++;

    b = 'A' + (*ps -q);

    cout << b << endl; 
}