#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int punteggio(char str[]);

int main()
{
    char choice;
    char text[32];
    do
    {
        cout << "Inserire una stringa: ";
        cin >> text;
        // cin.getline(s,32, '\n');
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int p = punteggio(text);
        if (p != -1)
            cout << "Punteggio = " << p << endl;
        else
            cout << "Stringa non valida" << endl;

        do
        {
            cout << "Vuoi continuare (s/n)? ";
            cin >> choice;
        } while (!(choice != 'n' ^ choice != 's'));

    } while (choice != 'n');
    return 0;
}

int punteggio(char str[])
{
    int sum = 0;
    
    // first char lowercase and alphabet check
    if (str[0] >= 'A' && str[0] <= 'Z')
        str[0] = str[0] - 'A' + 'a';
    if (str[0] < 'a' || str[0] > 'z')
        return -1;
    
    //starting from second char
    int k = 1;
    while (str[k] != '\0')
    {
        // current char lowercase and alphabet check
        if (str[k] >= 'A' && str[k] <= 'Z')
            str[k] = str[k] - 'A' + 'a';
        if (str[k] >= 'a' && str[k] <= 'z')
            sum += abs(str[k] - str[k - 1]);
        else
            return -1;
        k++;
    }

    return sum;
}
