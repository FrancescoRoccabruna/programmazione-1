#include <iostream>
#include <fstream>
#include <prime.h>

using namespace std;


struct nodo{
    int value;
    nodo *next;

    nodo(int value){
        this->value = value;
        next = nullptr;
    }
};

typedef nodo* lista;


lista creaLista(char *inputFile);
void stampaLista(lista nodo);
void stampaListaInvertita(lista nodo);
void distruggiLista(lista nodo);
void primizzaLista(lista &nodo);




int main(int argc, char *argv[]){
    int returnValue = 0;
    if (argc != 2){
        cout << "Usage ./a.out <nome_file>" << endl;
        returnValue = 1;
    } else {
        lista listaDiNumeri = creaLista(argv[1]);

        stampaLista(listaDiNumeri);
        stampaListaInvertita(listaDiNumeri);
        distruggiLista(listaDiNumeri);
        
    }


    return returnValue;
}


lista creaLista(char *inputFile){
    fstream file;
    lista testa = nullptr;

    file.open(inputFile, ios::in);

    if (file.fail() || !file.is_open()){
        cout << "Errore nell'apertura del file" << endl;
    } else {
        lista coda = nullptr;
        int numero;

        while (file >> numero){
            nodo *nuovo = new nodo(numero);

            if (testa == nullptr){
                testa = nuovo;
            } else {
                coda->next = nuovo;
            }
            coda = nuovo;
        }
    }

    return testa;
}


void stampaLista(lista nodo){
    while (nodo != nullptr){
        cout << nodo->value << endl;
        nodo = nodo->next;
    }
}

void distruggiLista(lista nodo){
    while (nodo != nullptr){
        lista tmp = nodo->next;
        delete nodo;
        nodo = tmp;
    }
}

void stampaListaInvertita(lista nodo){
    if (nodo == nullptr){
        return;
    }


    stampaListaInvertita(nodo->next);

    cout << nodo->value << endl;


    return;
}
