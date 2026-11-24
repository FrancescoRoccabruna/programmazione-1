
/* Il nome del file è definito nel main come costante a livello di file. Il programma legge il file
Abbonamenti2026.txt e conta il numero di abbonamenti, poi alloca un array di strutture
Abbonamento con un numero di elementi pari alla dimensione letta moltiplicato per due. Legge
nuovamente il file e popola l'array */


/*
Chiede all'operatore incaricato di scegliere un'operazione tra le seguenti: emettere un nuovo
abbonamento; calcolare il guadagno totale (che viene poi stampato a video); calcolare il ricavo
per tipologia di abbonamento come specificato sotto (che viene poi stampato a video); esci. Una
volta eseguita l'operazione scelta, il programma ripropone le opzioni finché l'operatore non
sceglie di uscire.

*/
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Abbonamento
{
    int n_riga;
    char nome[30];
    char cognome[30];
    char tipo;
    int costo;

};


int main(int argc, char const *argv[])
{
    int n_abbonamenti;
    
    
    ifstream file("multifile/Abbonamenti2026.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            n_abbonamenti++;
        }
    file.close();
}
    Abbonamento ** arrAbbonamenti = new (nothrow) Abbonamento*[n_abbonamenti*2];
     
    int tmp = 0;
    int n_riga;
    char nome[30];
    char cognome[30];
    char tipo;
    int costo;

    ifstream file2("multifile/Abbonamenti2026.txt");
    if (file2.is_open()) {
        while (tmp < n_abbonamenti && (file2 >> n_riga >> nome >> cognome >> tipo >> costo)) {
            Abbonamento * abb = new Abbonamento;
            abb->n_riga = tmp;
            strcpy(abb->nome, nome);
            strcpy(abb->cognome, cognome);
            abb->tipo = tipo;
            abb->costo = costo;
            arrAbbonamenti[tmp] = abb;

            tmp++;
    }
    file2.close();
}

return 0;

}




