#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int *generate_random_array(int length)
{
    int *arr = new (nothrow) int[length];
    if (arr == NULL)
    {
        cout << "fatal memory error exit!!!" << endl;
        exit(1);
    }

    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 100;
    }

    return arr;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Usage: random_array <length>" << endl;
        exit(0);
    }

    int length = atoi(argv[1]);

    if (length <= 0)
    {
        cout << "La lunghezza data in input " << argv[1] << " non e' valida!" << endl;
        exit(0);
    }

    srand(time(NULL));

    int *random_array = generate_random_array(length);

    for (int i = 0; i < length; i++)
    {
        cout << random_array[i] << " ";
    }
    cout << endl;

    delete[] random_array;

    return 0;
}
