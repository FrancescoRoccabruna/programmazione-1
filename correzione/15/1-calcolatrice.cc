#include <iostream>
#include <cstdlib>
using namespace std;

float calc(float numA, float numB, char operation);

int main(int argc, char *argv[])
{
    float numA, numB, result;
    char  operation;

    // Controllo che siano stati dati gli argomenti corretti
    if (argc != 4)
    {
        cout << "Usage: calcolatrice <numA> <numB> <operatore>" << endl;
        exit(1);
    }

    // Converto i due numeri dati in input in interi
    numA = atof(argv[1]);
    numB = atof(argv[2]);

    // Per ottenere l'operation, prendo solo il primo carattere
    operation = argv[3][0];

    // Calcolo il result
    result = calc(numA, numB, operation);

    cout << "Il risultato e' " << result << endl;

    return 0;
}

float calc(float numA, float numB, char operation)
{
    float result;

    switch (operation) {
      case '+':
          result = numA + numB;
          break;

      case '-':
          result = numA - numB;
          break;

      case '/':

          // Controllo che la divisione si possa fare
          if (numB == 0) {
              cout << "Stai cercando di dividere per 0!" << endl;
              exit(1);
          }
          result = numA / numB;
          break;

      case 'x':
          result = numA * numB;
          break;

      default:
          cout << "L'operazioni inserita non è stata riconosciuta!" << endl;
          exit(1);
    }
    return result;
}