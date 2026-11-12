#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;





int main(int argc, char *argv[]){

    for (int i = 1; i < argc; i++){

        //cout << argv[i];

        fstream input, output;

        input.open(argv[i], ios::in);

        char text[256];

        input >> text;

        cout << text;

        input.close();


        cout << endl;
    }

    return 0;
}



