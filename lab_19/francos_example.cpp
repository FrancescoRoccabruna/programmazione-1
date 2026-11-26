#include <iostream>
#include <fstream>


using namespace std;

template <typename T>
struct nodo {
    T value;
    nodo* next;


    nodo(T value){
        this->value = value;
    }


    void setNext(nodo &next){
        this->next = &next;
    }

    nodo* getLast(){
        nodo *nodo = this;

        while (nodo->next != nullptr){
            nodo = nodo->next;
        }

        return nodo;
    }

};



int main(){
    nodo<int> *array = new nodo<int>(12); 

    nodo<int> *nodo2 = new nodo<int>(5); 

    cout << nodo2->value;

    array->setNext(*nodo2);

    array->next->value = 10;

    cout << nodo2->value;
    return 0;
}