#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double somma(double num1, double num2){
    return num1+num2;
}

double sottrazione(double num1, double num2){
    return num1-num2;
}

double moltiplicazione(double num1,double num2){
    return num1*num2;
}

double divisione(double num1, double num2){
    return num1/num2;
}

int main(int argc, char *argv[]){

    if (argc!=4){
        cout << "Utilizzare: ./a.out <num1> <num2> <operatore>";
        exit(1);
    }

    double a,b;
    char alfa, beta;

    a=to_string(argv)

    while ("a"!=argv[1]){

    }

    if(argv[3]=="+"){
        cout << somma(argv[1], argv[2]);
    }

    return 0;
}