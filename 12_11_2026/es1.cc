#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main (int argc, char * argv[]) {

    if (argc != 2){
        cout << " errore \n";
        exit(1);
    }

    fstream input;

    input.open(argv[1], ios::in);
    
    cout << "\n";

    if (input.fail()) {
        cout << "Errore: il file '" << argv[1] << "' non esiste o non puo' essere aperto. \n" << endl;
        exit(1);
    }

    char c;
    input.get(c);
    while (!input.eof() && !input.fail()) {
        cout << c; 
        input.get(c);
    }
    
    input.close();

    return 0;
}