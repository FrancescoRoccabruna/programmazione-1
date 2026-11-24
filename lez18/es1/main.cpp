#include <iostream>
#include <fstream>
#include <cstring>
#include "sportello.h"

using namespace std;


int main(int argc, char *argv[]){

    if(argc!=2){
        cout << "due argomenti: ./a.out nomefile.txt" << endl;
        exit(1);
    }

    fstream input;
    input.open(argv[1], ios::in);
    if (!input.is_open()){
        cout << "Il file non esiste" << endl;
        exit(1);
    }

    int a=0;
    string riga;
    while(getline(input, riga)){
        a++;
    }

    input.close();

    cout << a << endl;


    


    return 0;

}