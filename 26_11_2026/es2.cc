#include <iostream>
#include <fstream>

using namespace std;

struct nodo{
    int value;
    nodo *next; 
};
typedef nodo *lista;

lista creaLista(char *inputFile);

int main(int argc, char *argv[]){

    int returnValue = 0;

    if (argc != 2){
        cout << "Usage: ./a.out <noma_file>" << endl;
        returnValue = 1;
    }else{
        lista listaDiNumeri = creaLista(argv[1]);
        if(listaDiNumeri == NULL){
            cout << "Errore (file vuoto o non esiste o altro)" << endl;
        };
    };
    return returnValue;
} 

lista creaLista(char *inputFile){
    fstream input;
    lista testa = NULL;
    input.open(inputFile, ios::in);


    if (input.fail()){
        cout << "?Errore apertura file" << endl;
    }else{
        int numero;
        nodo *coda = NULL;

        while(input >> numero) {
            nodo *nuovo = new nodo {numero, NULL};
            if (testa == NULL){
                testa = nuovo;
            }else{
                coda->next = nuovo;
            };
            coda = nuovo;
        }
        input.close();
    };

    return testa;
}