#include <iostream>
using namespace std;

int main(){
    int num;
    do{
        cout << "inserire un numero tra 0 e 1000: ";
        cin >> num;
    }while(num<0 || num>1000);
    bool primo=true;

    for(int i = 0;i<num && primo; i++){
        if (num % i == 0){
            primo = false;
        }
    };

    cout << "Il numero" 


    cout << (int)(primo && num) << endl;




}