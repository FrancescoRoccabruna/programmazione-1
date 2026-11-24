// sportello.h

#ifndef SPORTELLO_H
#define SPORTELLO_H

const int MAX_LEN = 32;

struct abbonamento {
    int num;
    char nome[MAX_LEN];
    char cognome[MAX_LEN];
    char tipo;
    double costo;
};

bool Inserisci(const char nomeFile[], abbonamento arr[], int n);
double Guadagno(const abbonamento arr[], int n);
char Elabora(const abbonamento arr[], int n, double r[4]);

#endif