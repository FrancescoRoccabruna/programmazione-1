#include <iostream>

struct nodo;
typedef nodo* list;

struct nodo {
    int value;
    nodo* next;
};

// Inserisce un nuovo elemento alla fine della lista
void inserisciInCoda(list& head, int val) {
    list nuovo = new nodo{val, nullptr};
    
    if (head == nullptr) {
        head = nuovo;
        return;
    }
    
    list temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = nuovo;
}

// Rimuove il primo nodo che contiene il valore cercato
void rimuoviValore(list& head, int target) {
    if (head == nullptr) return; // Lista vuota

    // Caso 1: il valore da eliminare è proprio in testa
    if (head->value == target) {
        list daEliminare = head;
        head = head->next;
        delete daEliminare;
        return;
    }

    // Caso 2: cerchiamo il nodo precedente a quello da eliminare
    list temp = head;
    while (temp->next != nullptr && temp->next->value != target) {
        temp = temp->next;
    }

    // Se lo abbiamo trovato, scollega il nodo e libera la memoria
    if (temp->next != nullptr) {
        list daEliminare = temp->next;
        temp->next = daEliminare->next;
        delete daEliminare;
    }
}

// Stampa tutti i nodi della lista
void stampaLista(list head) {
    while (head != nullptr) {
        std::cout << head->value << " -> ";
        head = head->next;
    }
    std::cout << "nullptr\n";
}

// Libera tutta la memoria allocata
void svuotaLista(list& head) {
    while (head != nullptr) {
        list temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // 1. Partiamo da un array classico
    int arr[] = {10, 20, 30, 40};
    int dimensione = 4;

    // 2. Dichiariamo la lista vuota
    list miaLista = nullptr;

    // 3. Copiamo i valori dell'array dentro la lista concatenata
    for (int i = 0; i < dimensione; i++) {
        inserisciInCoda(miaLista, arr[i]);
    }

    std::cout << "Lista iniziale: ";
    stampaLista(miaLista); // 10 -> 20 -> 30 -> 40 -> nullptr

    // 4. Rimuoviamo un elemento al centro (es. 30)
    rimuoviValore(miaLista, 30);
    std::cout << "Dopo aver rimosso 30: ";
    stampaLista(miaLista); // 10 -> 20 -> 40 -> nullptr

    // 5. Pulizia finale della memoria
    svuotaLista(miaLista);

    return 0;
}
