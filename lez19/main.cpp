#include <iostream>
#include <fstream>
#include "prime.h"

using namespace std;

struct nodo{
    int value;
    nodo *next;
};

typedef nodo* lista;

lista crealista(char *inputfile);
void stampaLista(lista listaDiNumeri);
void distruggiLista(lista listaDiNumeri);


lista crealista(char *inputfile){
    fstream input;
    lista testa = nullptr;
    input.open(inputfile, ios::in);
    if(input.fail()){
        cout << "?Errore apertura file" << endl;
    }else{
        int numero;
        nodo *coda=nullptr;

        while(input>>numero){
            nodo *nuovo=new nodo {numero, nullptr};
            if(testa==nullptr){
                testa=nuovo;
            }else{
                coda -> next = nuovo;
            };
            coda=nuovo;
        }
        input.close();
    }
    return testa;
}

void stampaLista(lista listaDiNumeri){
    while(listaDiNumeri!=nullptr){
        cout << listaDiNumeri -> value << endl;
        listaDiNumeri=listaDiNumeri->next;
    }
}

void distruggiLista(lista nodo){
    while(nodo!=nullptr){
        lista temp=nodo->next;
        delete nodo;
        nodo=temp;
    }
}

void stampaListaInvertita(lista listaDiNumeri){
    if(listaDiNumeri != nullptr){
        stampaListaInvertita(listaDiNumeri->next);
        cout << listaDiNumeri->value << endl;
    }
}


int main(int argc, char *argv[]){

    int returnValue = 0;

    if(argc!=2){
        cout << "Usage: ./a.out <nome_file>" << endl;
        returnValue=1;
    }
    else{
        lista listaDiNumeri = crealista(argv[1]); // [] è un accesso alla memoria
        if (listaDiNumeri==nullptr){
            cout << "Errore" << endl;
        }else{
            cout << "lista creata correttamente" << endl;
        };

        stampaLista(listaDiNumeri);

        cout << endl;

        stampaListaInvertita(listaDiNumeri);

        distruggiLista(listaDiNumeri);

        returnValue = 0;
    };
    return returnValue;
}


void primizzalista(lista &listaDiNumeri){
    while (listaDiNumeri !=nullptr && !numeroPrimo(listaDiNumeri->value)){
        nodo *daRimuovere = listaDiNumeri;
        listaDiNumeri=listaDiNumeri->next;
        delete daRimuovere;
    }
    /*
    Da finire
    */
}