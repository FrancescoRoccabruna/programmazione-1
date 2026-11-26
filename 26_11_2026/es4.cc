#include <iostream>
#include <fstream>

using namespace std;

struct nodo{
    int value;
    nodo *next; 
};
typedef nodo *lista;

lista creaLista(char *inputFile);
void stampaLista(lista testa); 
void distruggiLista(lista testa);
void stampaListaInvertita(lista testa);


int main(int argc, char *argv[]){

    int returnValue = 0;

    if (argc != 2){
        cout << "Usage: ./a.out <noma_file>" << endl;
        returnValue = 1;
    }else{
        lista listaDiNumeri = creaLista(argv[1]);
        if(listaDiNumeri == NULL){
            cout << "Errore (file vuoto o non esiste o altro)" << endl;
        }else{ 
            stampaLista(listaDiNumeri); 

            cout << "\n Stamapa la lista invertita: " << endl; 
            stampaListaInvertita(listaDiNumeri);
            cout << endl;


            distruggiLista(listaDiNumeri);
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

void stampaLista(lista testa){
    cout << " Stamapa la lista: " << endl; 
    while (testa != NULL){
        cout << testa->value << " ";
        testa = testa->next;
    }
 
    cout << endl;
}

void distruggiLista(lista testa){
    while (testa != NULL){
        lista temp = testa;
        testa = testa->next;
        delete temp;
    }
}

void stampaListaInvertita(lista testa){
    if (testa != NULL){
        stampaListaInvertita(testa->next);
        cout << testa->value << " ";
    };


}