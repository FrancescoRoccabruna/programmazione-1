#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

//importante chiudere i file dopo averli (e fatto robe) aperti

/*int main(int argc, char * argv[]){
    //if imporastante per il controllo che siano stati inseriti il numero giusto di argomenti
    if (argc!=3){
        cout << "Utilizzo: ./a.out <in> <out>" << endl;
        exit(1);
    }

    fstream input, output;

    input.open("input.txt", ios::in);
    output.open("output.txt", ios::out);

    if()

    char parola[3];
    while(input >> parola){
        output << parola << " ";
    }

    input.close();
    output.close();

    return 0;

}*/

int main(int argc, char *argv[]){
    if (argc!=2){
        cout << "Utilizzo: ./a.out <file>" <<endl;
        exit(1);
    }

    fstream input;

    input.open(argv[1],ios::in);

    if(!input.is_open()){
        cout << "Il file non esiste" << endl;
        exit(1);
    }

    char c;
    while(!input.eof() && !input.fail()){
        input.get(c);
        cout << c; 
    }

    input.close();
    
    return 0;
}