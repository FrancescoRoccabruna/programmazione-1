#include <iostream>
using namespace std;

int main(){
    float x,y;
    cout << "assegnare delle coordinate reali per il punto P: " << endl;
    cin >> x >> y;

    float a,b,c,d;
    cout << "assegnare dei valori per il vertice A del rettangolo: " << endl;
    cin >> a >> b;

    cout << "assegnare dei valori per il vertice B del rettangolo: " << endl;
    cin >> c >> d;

    while(d>=b){
        cout << "riassegnare i valori della cordinata y dei 2 punti (prima A poi B): " << endl;
        cin >> b >> d;
    }

    if (x<=c && x>=a && y>=d && y<=b){
        cout << "Il punto P si trova dentro al rettangolo: " << endl;
    }else{
        cout << "Il punto si trova fuori dal rettangolo: " << endl;
    }

    return 0;
}