#include <iostream>
using namespace std;

int main() {

    char b = 'Q'; char p = 'b';
    b = b - 'A' + 'a';
    b += (int (p - 'a'));

    cout << b << endl;

}