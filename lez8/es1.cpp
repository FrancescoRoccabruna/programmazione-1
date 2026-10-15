#include <iostream>
using namespace std;

// & indica l'indirizzo di memoria
//* indica il valore della variabile 
//(il valore contenuto all'indirizzo di memoria della variabile)

int main(){
    int a=0, b=0;
    int c1=0, c2=0, c3=0, c4=0;

    //riferimento o alias
    int &r=a;
    
    //puntatori
    int *pa=&a;
    int *pb=&b;

    //puntatore che punta ad un puntatore
    int **ppa=&pa;

    //puntatore a costante
    const int *pca=&a;

    cin >> a >> b;

    cout << "pa: " << *pa << ", pb: " << *pb << endl;

    //indirizzo di a e di b
    cout << "stampa pa: " << pa << ", stampa pb: " << pb << endl;

    //indirizzo di a pk ppa punta a pa che esso punta ad a
    cout << "stampa ppa: " << *ppa << endl;

    //stmpa il valore di a
    cout << "stampa ppa rrrrrrrrrr: " << **ppa << endl;

    //cout << "stampa ppa vvvvvvvvv: " << *&ppa << endl;

    c1 = *pa;
    c2 = **ppa;
    c3 = *pca;
    c4 = r;

    cout << c1 <<endl<< c2<<endl <<c3<<endl<<c4<<endl;

    a+=3;
    cout << a << endl;
    *pa+=3;
    cout << a << endl;
    **ppa+=3;
    cout << a << endl;
    r+=3;
    cout << a << endl;

    a=c1;
    cout << a << endl;
    pa=pb;
    cout << *pa << endl;

    a+=3;
    cout << a << endl;
    *pa+=3;
    cout << a << endl;
    **ppa+=3;
    cout << a << endl;
    r+=3;
    cout << a << endl;

    cout << b << endl;

    *pca+=5;

    cout << *pca << endl;

    return 0;
}