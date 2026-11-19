#include <iostream>
#include <cstring>
using namespace std;

struct Studente{
    char nome[31];
    char cognome[31];
    int matricola;
    float media;

};

void stampaStudente(const Studente *studente){
    cout << studente->nome << endl;
    cout << studente->cognome << endl;
    cout << studente->matricola << endl;
    cout << studente->media << endl;
}

Studente *generaStudente(const char *nome, const char *cognome, int matricola, float media){
    Studente *studente=new (nothrow) Studente;
    if( studente==nullptr){
        return nullptr;
    }
    strcpy(studente->nome, nome);
    strcpy(studente->cognome, cognome);
    studente->matricola=matricola;
    studente->media=media;
    return studente;
}

int main(){

    Studente *stud=generaStudente("Marco", "Giacomini", 213456, 25.4);


    stampaStudente(stud);

    delete stud;

    return 0;
}