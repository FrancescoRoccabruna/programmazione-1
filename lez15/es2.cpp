#include <iostream>
#include <string> 
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    if (argc!=3){
        cout << "Utilizzo: ./a.out <input> <output>" <<endl;
        exit(1);
    }

    fstream input, output;

    input.open(argv[1],ios::in);

    if(!input.is_open()){
        cout << "Il file non esiste" << endl;
        exit(1);
    }

    output.open(argv[2],ios::out);

    if(!output.is_open()){
        cout << "Il file non esiste" << endl;
        exit(1);
    }

    char c;
    while(!input.eof() && !input.fail()){
        input.get(c); 
        output.put(c);
    }

    input.close();
    output.close();
    
    return 0;
}