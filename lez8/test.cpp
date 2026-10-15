#include <iostream>
using namespace std;

// alias usano & per essere definiti mentre i puntatori *

int main(){
    int mama=57;
    int *gg= &mama;

    cout << ++(*gg)<<endl;

    return 0;
}