#include <iostream>

using namespace std;


template <typename T>
class SafeArray{
    T *array;
    int max_elements;
    T err_value;


    public:

        SafeArray(){
            max_elements = 5;
            array = new T[max_elements];
            err_value = T();
        }

        SafeArray(int size, T default_val){
            max_elements = size;

            array = new T[max_elements];
            err_value = default_val;
        }

        void set(int position, T value){
            if (position >= 0 && position < max_elements){
                array[position] = value;
            }
            else if (position >= max_elements)
            {
                T *tmp_array = new T[position+1];

                for (int i = 0; i < max_elements; i++){
                    tmp_array[i] = array[i];
                }

                delete array;
                array = tmp_array;

                array[position] = value;
                max_elements = position+1;
            }
            
        }

        T get(int position){
            if (position >= 0 && position < max_elements){
                return array[position];
            }

            return err_value;
        }
};

int main(){
    int a = 0, b = 0;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

    int &r = a;

    int *pa = &a, *pb= &b;

    int **ppa = &pa;

    const int *pca = &a;

    cin >> a >> b;

    cout << *pa << endl << *pb << endl;

    c1 = *pa;

    c2 = **ppa;

    c3 = *pca;

    c4 = r;



    cout << c1 << c2 << c3 << c4 << endl;

    a += 3;

    cout << a << endl;

    *pa += 3;

    cout << a << endl;

    **ppa += 3;

    cout << a << endl;


    r += 3;

    cout << a << endl;

    SafeArray<int> array;

    SafeArray<char> array2(2, 'c');

    array.set(4, 10);

    array.set(10, 104);

    cout << array.get(4) << endl;
    cout << array.get(10) << endl;


    cout << array2.get(104) << endl; 



    return 0;
}


