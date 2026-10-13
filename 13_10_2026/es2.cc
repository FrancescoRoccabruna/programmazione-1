#include <iostream>
using namespace std;

int main() {

    // es di byte.cc

    // unsigned occupa 1 byte
    // utilizzo tutti i 8 bit che ci siamo

    unsigned char x = 65;

    int m = 1;

    cout << "M:         " << m << endl;
    cout << "sizeof(m): " << sizeof(m) << endl;

    // cella di memoria singila
    // forzalo questa cella di memoria 
    // (* quarda all'interno della cella di memoria
    //(unsigned char *) guarda il carattere
    // &m memoria inizialiazzato prima che contiene 1
    if ( (* ((unsigned char *)&m) ) == 1){
        cout << "Little-endian" << endl;
    }else{
        cout << "Big-endian" << endl;
    };
    
    int i = 12;
    float f = 12;

    cout << "\n" << "sizeoff(i): " << sizeof(i) << endl; //4
    cout << "sizeof(f): " << sizeof(f) << endl;

    return 0;
    
}