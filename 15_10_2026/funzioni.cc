#include <iostream>
using namespace std;
#include <cmath>



float distanza(float xa, float ya, float xb, float yb){
    return sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));

}



int main() {

    float xa, ya, xb, yb;

    cout << "Inserisci le cordinate dei punti di A(x,y) e B(x,y): " << endl;

    cin >> xa >> ya >> yb >> xb;

    cout << distanza(xa,ya,xb,yb) << endl;

}

/*
float min(float x, float y) {

    if (x <= y){
        return x;
    }else{
        return y;
    }
}


float max(float x, float y) {

    if (x >= y){
        return x;
    }else{
        return y;
    }

}


float dif(float x, float y) {

    return max(x,y) - min(x,y);

}


int main() {

    float x,y;
    cin >> x >> y;

    cout << "Diffenreza tra x e y: " << dif(x,y) << endl;;


    return 0;
}

*/