#include <iostream>
#include <fstream>



using namespace std;


int main(int argc, char *argv []){



    if (argc != 3){
        cout << "Utilizzo ./a.out <input> <output>" << endl;
        exit(1);
    }


    fstream input, output;

    input.open(argv[1], ios::in);
    output.open(argv[2], ios::out);

    if (!input.is_open()){
        cout << "Errore nell'apertura del file di input" << endl;
    }

    if (!output.is_open()){
        cout << "Errore nell'apertura del file di output" << endl;
    }


    char c;

    while (!input.fail() && !input.eof() && !output.fail()){
        input.get(c);
        output.put(c);
    }

    input.close();
    output.close();


    return 0;
}