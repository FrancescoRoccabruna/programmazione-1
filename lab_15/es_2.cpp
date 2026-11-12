#include <iostream>
#include <fstream>



using namespace std;


int main(int argc, char *argv []){



    if (argc != 2){
        cout << "Utilizzo ./a.out <file>" << endl;
        exit(1);
    }


    fstream file;

    file.open(argv[1], ios::in);

    if (!file.is_open()){
        cout << "Errore nell'apertura del file" << endl;
    }


    char c;

    while (!file.fail() && !file.eof()){
        file.get(c);

        cout << c;
    }

    file.close();


    return 0;
}