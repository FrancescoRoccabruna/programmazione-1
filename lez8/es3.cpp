#include <iostream>
using namespace std;

float trova_minimo(float a, float b, float c){
    if (a <= b && a<=c){
        return a;
    }else if(b<a && b<c){
        return b;
    }else{
        return c;
    }
}

float trova_massimo(float a, float b, float c){
    if (a >= b && a>=c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

float differenza(float a, float b, float c){
    return trova_massimo(a,b,c)-trova_minimo(a,b,c);
}

int main(){

    float a,b,c;

    cin >> a >> b >> c;

    cout << differenza(a,b,c) << endl;

    return 0;


}