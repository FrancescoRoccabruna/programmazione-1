#include <iostream>

using namespace std;


float max(float a, float b, float c){
    if (a >= b && a > c){
        return a;
    }
    else if (b > a && b > c){
        return b;
    }
    else {
        return c;
    }
}

float min(float a, float b, float c){
    if (a <= b && a < c){
        return a;
    }
    else if (b < a && b < c){
        return b;
    }
    else {
        return c;
    }
}

float differenza(float a, float b, float c){
    return max(a, b, c) - min(a, b, c);
}




int main(){

    int a, b, c;

    cin >> a >> b >> c;

    cout << differenza(a,b,c);

    return 0;
}